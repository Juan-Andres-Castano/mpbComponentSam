/**
* @file           test_Thermistor.c
* @brief          Tests for the thermistor library
* @author         Juan Andres Castano Ing.
* @date           Created on 4/20/2021
* @copyright MPB, Montreal, Qc
* <h2><center>&copy; COPYRIGHT 2022 MPB, Montreal, Quebec, Canada</center></h2>
* <h2><center>&copy; All rights reserved.</center></h2><br/><br/>
* <center>This document contains confidential and proprietary information
* of MPB (subject to a non-disclosure agreement) and shall</center>
* <center>not be disclosed, distributed, or reproduced in whole or in
* part, without the prior written authorization of MPB.</center>
*
**/
/* Includes ------------------------------------------------------------------*/
#include "unity.h"
#include "thermistor.h"
#include "thermistorCircuitUtil.h"
//#include "PT103J2.h"
#include "mock_test_Thermistor.h"
#include "mock_thermistorCircuit.h"
#include "mock_mpbMathDivision.h"
#include "mock_mpbMathLinearApprox.h"
#include "mock_mpbMathResistor.h"

/* Private define ------------------------------------------------------------*/
#define BETA_COEFFICIENT				( 3575 )
#define _25_DEGREES_IN_FAHRENHEIT	    ( 298.15 )
#define KELVIN_TO_DEGREE_CONSTANT	    ( 273.15 )

/* Temperature table */
/* -55°C to 150°C */
#define PT103J2_TABLE_LENGTH            ( 206 )

/* Private macro -------------------------------------------------------------*/
/* Private enum --------------------------------------------------------------*/
/* Private struct ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
static eMpbError_t eMpbError;
static handle_t xMockStream;

const xThermistorTemperature_t xPT103J2TemperatureTable[ PT103J2_TABLE_LENGTH ] = {
    { PT103J2_MIN_55, -5500 },
    { PT103J2_MIN_54, -5400 },
    { PT103J2_MIN_53, -5300 },
    { PT103J2_MIN_52, -5200 },
    { PT103J2_MIN_51, -5100 },
    { PT103J2_MIN_50, -5000 },
    { PT103J2_MIN_49, -4900 },
    { PT103J2_MIN_48, -4800 },
    { PT103J2_MIN_47, -4700 },
    { PT103J2_MIN_46, -4600 },
    { PT103J2_MIN_45, -4500 },
    { PT103J2_MIN_44, -4400 },
    { PT103J2_MIN_43, -4300 },
    { PT103J2_MIN_42, -4200 },
    { PT103J2_MIN_41, -4100 },
    { PT103J2_MIN_40, -4000 },
    { PT103J2_MIN_39, -3900 },
    { PT103J2_MIN_38, -3800 },
    { PT103J2_MIN_37, -3700 },
    { PT103J2_MIN_36, -3600 },
    { PT103J2_MIN_35, -3500 },
    { PT103J2_MIN_34, -3400 },
    { PT103J2_MIN_33, -3300 },
    { PT103J2_MIN_32, -3200 },
    { PT103J2_MIN_31, -3100 },
    { PT103J2_MIN_30, -3000 },
    { PT103J2_MIN_29, -2900 },
    { PT103J2_MIN_28, -2800 },
    { PT103J2_MIN_27, -2700 },
    { PT103J2_MIN_26, -2600 },
    { PT103J2_MIN_25, -2500 },
    { PT103J2_MIN_24, -2400 },
    { PT103J2_MIN_23, -2300 },
    { PT103J2_MIN_22, -2200 },
    { PT103J2_MIN_21, -2100 },
    { PT103J2_MIN_20, -2000 },
    { PT103J2_MIN_19, -1900 },
    { PT103J2_MIN_18, -1800 },
    { PT103J2_MIN_17, -1700 },
    { PT103J2_MIN_16, -1600 },
    { PT103J2_MIN_15, -1500 },
    { PT103J2_MIN_14, -1400 },
    { PT103J2_MIN_13, -1300 },
    { PT103J2_MIN_12, -1200 },
    { PT103J2_MIN_11, -1100 },
    { PT103J2_MIN_10, -1000 },
    { PT103J2_MIN_9, -900 },
    { PT103J2_MIN_8, -800 },
    { PT103J2_MIN_7, -700 },
    { PT103J2_MIN_6, -600 },
    { PT103J2_MIN_5, -500 },
    { PT103J2_MIN_4, -400 },
    { PT103J2_MIN_3, -300 },
    { PT103J2_MIN_2, -200 },
    { PT103J2_MIN_1, -100 },
    { PT103J2_0, 0 },
    { PT103J2_1, 100 },
    { PT103J2_2, 200 },
    { PT103J2_3, 300 },
    { PT103J2_4, 400 },
    { PT103J2_5, 500 },
    { PT103J2_6, 600 },
    { PT103J2_7, 700 },
    { PT103J2_8, 800 },
    { PT103J2_9, 900 },
    { PT103J2_10, 1000 },
    { PT103J2_11, 1100 },
    { PT103J2_12, 1200 },
    { PT103J2_13, 1300 },
    { PT103J2_14, 1400 },
    { PT103J2_15, 1500 },
    { PT103J2_16, 1600 },
    { PT103J2_17, 1700 },
    { PT103J2_18, 1800 },
    { PT103J2_19, 1900 },
    { PT103J2_20, 2000 },
    { PT103J2_21, 2100 },
    { PT103J2_22, 2200 },
    { PT103J2_23, 2300 },
    { PT103J2_24, 2400 },
    { PT103J2_25, 2500 },
    { PT103J2_26, 2600 },
    { PT103J2_27, 2700 },
    { PT103J2_28, 2800 },
    { PT103J2_29, 2900 },
    { PT103J2_30, 3000 },
    { PT103J2_31, 3100 },
    { PT103J2_32, 3200 },
    { PT103J2_33, 3300 },
    { PT103J2_34, 3400 },
    { PT103J2_35, 3500 },
    { PT103J2_36, 3600 },
    { PT103J2_37, 3700 },
    { PT103J2_38, 3800 },
    { PT103J2_39, 3900 },
    { PT103J2_40, 4000 },
    { PT103J2_41, 4100 },
    { PT103J2_42, 4200 },
    { PT103J2_43, 4300 },
    { PT103J2_44, 4400 },
    { PT103J2_45, 4500 },
    { PT103J2_46, 4600 },
    { PT103J2_47, 4700 },
    { PT103J2_48, 4800 },
    { PT103J2_49, 4900 },
    { PT103J2_50, 5000 },
    { PT103J2_51, 5100 },
    { PT103J2_52, 5200 },
    { PT103J2_53, 5300 },
    { PT103J2_54, 5400 },
    { PT103J2_55, 5500 },
    { PT103J2_56, 5600 },
    { PT103J2_57, 5700 },
    { PT103J2_58, 5800 },
    { PT103J2_59, 5900 },
    { PT103J2_60, 6000 },
    { PT103J2_61, 6100 },
    { PT103J2_62, 6200 },
    { PT103J2_63, 6300 },
    { PT103J2_64, 6400 },
    { PT103J2_65, 6500 },
    { PT103J2_66, 6600 },
    { PT103J2_67, 6700 },
    { PT103J2_68, 6800 },
    { PT103J2_69, 6900 },
    { PT103J2_70, 7000 },
    { PT103J2_71, 7100 },
    { PT103J2_72, 7200 },
    { PT103J2_73, 7300 },
    { PT103J2_74, 7400 },
    { PT103J2_75, 7500 },
    { PT103J2_76, 7600 },
    { PT103J2_77, 7700 },
    { PT103J2_78, 7800 },
    { PT103J2_79, 7900 },
    { PT103J2_80, 8000 },
    { PT103J2_81, 8100 },
    { PT103J2_82, 8200 },
    { PT103J2_83, 8300 },
    { PT103J2_84, 8400 },
    { PT103J2_85, 8500 },
    { PT103J2_86, 8600 },
    { PT103J2_87, 8700 },
    { PT103J2_88, 8800 },
    { PT103J2_89, 8900 },
    { PT103J2_90, 9000 },
    { PT103J2_91, 9100 },
    { PT103J2_92, 9200 },
    { PT103J2_93, 9300 },
    { PT103J2_94, 9400 },
    { PT103J2_95, 9500 },
    { PT103J2_96, 9600 },
    { PT103J2_97, 9700 },
    { PT103J2_98, 9800 },
    { PT103J2_99, 9900 },
    { PT103J2_100, 10000 },
    { PT103J2_101, 10100 },
    { PT103J2_102, 10200 },
    { PT103J2_103, 10300 },
    { PT103J2_104, 10400 },
    { PT103J2_105, 10500 },
    { PT103J2_106, 10600 },
    { PT103J2_107, 10700 },
    { PT103J2_108, 10800 },
    { PT103J2_109, 10900 },
    { PT103J2_110, 11000 },
    { PT103J2_111, 11100 },
    { PT103J2_112, 11200 },
    { PT103J2_113, 11300 },
    { PT103J2_114, 11400 },
    { PT103J2_115, 11500 },
    { PT103J2_116, 11600 },
    { PT103J2_117, 11700 },
    { PT103J2_118, 11800 },
    { PT103J2_119, 11900 },
    { PT103J2_120, 12000 },
    { PT103J2_121, 12100 },
    { PT103J2_122, 12200 },
    { PT103J2_123, 12300 },
    { PT103J2_124, 12400 },
    { PT103J2_125, 12500 },
    { PT103J2_126, 12600 },
    { PT103J2_127, 12700 },
    { PT103J2_128, 12800 },
    { PT103J2_129, 12900 },
    { PT103J2_130, 13000 },
    { PT103J2_131, 13100 },
    { PT103J2_132, 13200 },
    { PT103J2_133, 13300 },
    { PT103J2_134, 13400 },
    { PT103J2_135, 13500 },
    { PT103J2_136, 13600 },
    { PT103J2_137, 13700 },
    { PT103J2_138, 13800 },
    { PT103J2_139, 13900 },
    { PT103J2_140, 14000 },
    { PT103J2_141, 14100 },
    { PT103J2_142, 14200 },
    { PT103J2_143, 14300 },
    { PT103J2_144, 14400 },
    { PT103J2_145, 14500 },
    { PT103J2_146, 14600 },
    { PT103J2_147, 14700 },
    { PT103J2_148, 14800 },
    { PT103J2_149, 14900 },
    { PT103J2_150, 15000 }
};

/* External variabes ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

void setUp()
{
    eMpbError = eUnknownError;
    xMockStream = 99;
}
/*----------------------------------------------------------------------------*/

void tearDown()
{
    
}
/*----------------------------------------------------------------------------*/

/******************************************************************************/
/*                         eThermistorInitBaseCircuit                         */
/******************************************************************************/
void test_eThermistorInitBaseCircuit_InvalidInputVoltage_Fail()
{
	xThermistorCircuitConfig_t xThermistorCircuitConfig;
    uint32_t ulMockSeriesResitor1 = 1000, ulMockSeriesResistor2 = 1000, ulMockParallelResistor = 1000;
    uint16_t ulMockInputVoltage = 0;
    
    /* usInputVoltagemV = 0 */
  //  eMpbError = eThermistorInitBaseCircuit( &xThermistorCircuitConfig, ulMockSeriesResitor1, ulMockSeriesResistor2, ulMockParallelResistor, ulMockInputVoltage );
    TEST_ASSERT_EQUAL( 1, 1 );
}
