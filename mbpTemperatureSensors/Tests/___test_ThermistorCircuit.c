/**
* @file			test_ThermistorCircuit.c
* @brief
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
#include "thermistorCircuit.h"
#include "mock_thermistorCircuitUtil.h"
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private enum --------------------------------------------------------------*/
/* Private struct ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
static eMpbError_t eMpbError;
/* External variables --------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

void setUp()
{
    eMpbError = eUnknownError;
}
/*----------------------------------------------------------------------------*/ 
void tearDown()
{

}
/*----------------------------------------------------------------------------*/

/*******************************************************************************
eThermistorCircuitGetThermistance                      
*******************************************************************************/

void test_eThermistorCircuitGetThermistance_PullUp_Success()
{
    handle_t xMockStream = 10;
    uint32_t ulMockSeriesResistor1 = 0, ulMockSeriesResistor2 = 300;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2 };
    uint32_t ulThermistance, ulMockThermistance = 4000;
    
    eThermistorCircuitUtilGetThermistanceValuePullUp_ExpectAndReturn( xMockStream, xMockThermistorConfig, NULL, eSuccess );
    eThermistorCircuitUtilGetThermistanceValuePullUp_IgnoreArg_pulThermistance();
    eThermistorCircuitUtilGetThermistanceValuePullUp_ReturnThruPtr_pulThermistance( &ulMockThermistance );

    eMpbError = eThermistorCircuitGetThermistance( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eSuccess, eMpbError );
    TEST_ASSERT_EQUAL_UINT32( ulMockThermistance, ulThermistance );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitGetThermistance_PullUp_Fail()
{
    handle_t xMockStream = 10;
    uint32_t ulMockSeriesResistor1 = 0, ulMockSeriesResistor2 = 300;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2 };
    uint32_t ulThermistance;
    
    eThermistorCircuitUtilGetThermistanceValuePullUp_ExpectAndReturn( xMockStream, xMockThermistorConfig, NULL, eUnknownError );
    eThermistorCircuitUtilGetThermistanceValuePullUp_IgnoreArg_pulThermistance();

    eMpbError = eThermistorCircuitGetThermistance( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitGetThermistance_PullDown_Success()
{
    handle_t xMockStream = 10;
    uint32_t ulMockSeriesResistor1 = 300, ulMockSeriesResistor2 = 0;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2 };
    uint32_t ulThermistance, ulMockThermistance = 4000;
    
    eThermistorCircuitUtilGetThermistanceValuePullDown_ExpectAndReturn( xMockStream, xMockThermistorConfig, NULL, eSuccess );
    eThermistorCircuitUtilGetThermistanceValuePullDown_IgnoreArg_pulThermistance();
    eThermistorCircuitUtilGetThermistanceValuePullDown_ReturnThruPtr_pulThermistance( &ulMockThermistance );

    eMpbError = eThermistorCircuitGetThermistance( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eSuccess, eMpbError );
    TEST_ASSERT_EQUAL_UINT32( ulMockThermistance, ulThermistance );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitGetThermistance_PullDown_Fail()
{
    handle_t xMockStream = 10;
    uint32_t ulMockSeriesResistor1 = 300, ulMockSeriesResistor2 = 0;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2 };
    uint32_t ulThermistance;
    
    eThermistorCircuitUtilGetThermistanceValuePullDown_ExpectAndReturn( xMockStream, xMockThermistorConfig, NULL, eUnknownError );
    eThermistorCircuitUtilGetThermistanceValuePullDown_IgnoreArg_pulThermistance();

    eMpbError = eThermistorCircuitGetThermistance( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitGetThermistance_InvalidEntry_Fail()
{
    handle_t xMockStream = 10;
    uint32_t ulMockSeriesResistor1 = 0, ulMockSeriesResistor2 = 0;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2 };
    uint32_t ulThermistance;

    eMpbError = eThermistorCircuitGetThermistance( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eInvalidParameter, eMpbError );
}
/*----------------------------------------------------------------------------*/