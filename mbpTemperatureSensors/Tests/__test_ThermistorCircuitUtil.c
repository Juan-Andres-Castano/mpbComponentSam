/**
* @file			test_ThermistorCircuitUtil.c
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
#include "thermistorCircuitUtil.h"
#include "mock_mpbMathResistor.h"
#include "mock_test_Thermistor.h"
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
eThermistorCircuitUtilGetThermistanceValuePullUp                      
*******************************************************************************/

void test_eThermistorCircuitUtilGetThermistanceValuePullUp_ParallelResistor_Success()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100, usMockVoltage = 500;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400, ulMockEquivalentResistor = 500;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance, ulMockThermistance = 1000;
    
    eMpbMathResistorGetEquivalentInParallel_ExpectAndReturn( ulMockSeriesResistor2, ulMockParallelResistor, NULL, eSuccess );
    eMpbMathResistorGetEquivalentInParallel_IgnoreArg_pulEquivalentResistor();
    eMpbMathResistorGetEquivalentInParallel_ReturnThruPtr_pulEquivalentResistor( &ulMockEquivalentResistor );
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eSuccess );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    eThermistorAnalogReadmV_ReturnThruPtr_pusVoltage( &usMockVoltage );
    
    eMpbMathResistorVoltageDividerGetPullUpResistor_ExpectAndReturn( ulMockEquivalentResistor, usMockInputVoltageMv, usMockVoltage, NULL, eSuccess );
    eMpbMathResistorVoltageDividerGetPullUpResistor_IgnoreArg_pulPullUpResistor();
    eMpbMathResistorVoltageDividerGetPullUpResistor_ReturnThruPtr_pulPullUpResistor( &ulMockThermistance );
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullUp( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eSuccess, eMpbError );
    TEST_ASSERT_EQUAL_UINT32( ulMockThermistance, ulThermistance );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullUp_NoParallelResistor_Success()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100, usMockVoltage = 500;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 0;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance, ulMockThermistance = 1000;
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eSuccess );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    eThermistorAnalogReadmV_ReturnThruPtr_pusVoltage( &usMockVoltage );
    
    eMpbMathResistorVoltageDividerGetPullUpResistor_ExpectAndReturn( ulMockSeriesResistor2, usMockInputVoltageMv, usMockVoltage, NULL, eSuccess );
    eMpbMathResistorVoltageDividerGetPullUpResistor_IgnoreArg_pulPullUpResistor();
    eMpbMathResistorVoltageDividerGetPullUpResistor_ReturnThruPtr_pulPullUpResistor( &ulMockThermistance );
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullUp( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eSuccess, eMpbError );
    TEST_ASSERT_EQUAL_UINT32( ulMockThermistance, ulThermistance );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullUp_ParallelResistor_eMpbMathResistorGetEquivalentInParallel_Fail()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance;
    
    eMpbMathResistorGetEquivalentInParallel_ExpectAndReturn( ulMockSeriesResistor2, ulMockParallelResistor, NULL, eUnknownError );
    eMpbMathResistorGetEquivalentInParallel_IgnoreArg_pulEquivalentResistor();
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullUp( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullUp_eThermistorAnalogReadmV_Fail()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400, ulMockEquivalentResistor = 500;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance;
    
    eMpbMathResistorGetEquivalentInParallel_ExpectAndReturn( ulMockSeriesResistor2, ulMockParallelResistor, NULL, eSuccess );
    eMpbMathResistorGetEquivalentInParallel_IgnoreArg_pulEquivalentResistor();
    eMpbMathResistorGetEquivalentInParallel_ReturnThruPtr_pulEquivalentResistor( &ulMockEquivalentResistor );
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eUnknownError );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullUp( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullUp_eMpbMathResistorVoltageDividerGetPullUpResistor_Fail()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100, usMockVoltage = 500;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400, ulMockEquivalentResistor = 500;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance;
    
    eMpbMathResistorGetEquivalentInParallel_ExpectAndReturn( ulMockSeriesResistor2, ulMockParallelResistor, NULL, eSuccess );
    eMpbMathResistorGetEquivalentInParallel_IgnoreArg_pulEquivalentResistor();
    eMpbMathResistorGetEquivalentInParallel_ReturnThruPtr_pulEquivalentResistor( &ulMockEquivalentResistor );
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eSuccess );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    eThermistorAnalogReadmV_ReturnThruPtr_pusVoltage( &usMockVoltage );
    
    eMpbMathResistorVoltageDividerGetPullUpResistor_ExpectAndReturn( ulMockEquivalentResistor, usMockInputVoltageMv, usMockVoltage, NULL, eUnknownError );
    eMpbMathResistorVoltageDividerGetPullUpResistor_IgnoreArg_pulPullUpResistor();
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullUp( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/

/*******************************************************************************
eThermistorCircuitUtilGetThermistanceValuePullDown                      
*******************************************************************************/

void test_eThermistorCircuitUtilGetThermistanceValuePullDown_ParallelResistor_Success()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100, usMockVoltage = 500;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400, ulMockEquivalentResistor = 500;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance, ulMockThermistance = 1000;
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eSuccess );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    eThermistorAnalogReadmV_ReturnThruPtr_pusVoltage( &usMockVoltage );
    
    eMpbMathResistorVoltageDividerGetPullDownResistor_ExpectAndReturn( ulMockSeriesResistor1, usMockInputVoltageMv, usMockVoltage, NULL, eSuccess );
    eMpbMathResistorVoltageDividerGetPullDownResistor_IgnoreArg_pulPullDownResistor();
    eMpbMathResistorVoltageDividerGetPullDownResistor_ReturnThruPtr_pulPullDownResistor( &ulMockEquivalentResistor );
    
    eMpbMathResistorGetResistorInParallel_ExpectAndReturn( ulMockEquivalentResistor, ulMockParallelResistor, NULL, eSuccess );
    eMpbMathResistorGetResistorInParallel_IgnoreArg_pulResistor2();
    eMpbMathResistorGetResistorInParallel_ReturnThruPtr_pulResistor2( &ulMockThermistance );
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullDown( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eSuccess, eMpbError );
    TEST_ASSERT_EQUAL_UINT32( ulMockThermistance, ulThermistance );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullDown_NoParallelResistor_Success()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100, usMockVoltage = 500;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 0, ulMockEquivalentResistor = 500;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance;
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eSuccess );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    eThermistorAnalogReadmV_ReturnThruPtr_pusVoltage( &usMockVoltage );
    
    eMpbMathResistorVoltageDividerGetPullDownResistor_ExpectAndReturn( ulMockSeriesResistor1, usMockInputVoltageMv, usMockVoltage, NULL, eSuccess );
    eMpbMathResistorVoltageDividerGetPullDownResistor_IgnoreArg_pulPullDownResistor();
    eMpbMathResistorVoltageDividerGetPullDownResistor_ReturnThruPtr_pulPullDownResistor( &ulMockEquivalentResistor );
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullDown( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eSuccess, eMpbError );
    TEST_ASSERT_EQUAL_UINT32( ulMockEquivalentResistor, ulThermistance );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullDown_eThermistorAnalogReadmV_Fail()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance;
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eUnknownError );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullDown( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullDown_eMpbMathResistorVoltageDividerGetPullDownResistor_Fail()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100, usMockVoltage = 500;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance;
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eSuccess );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    eThermistorAnalogReadmV_ReturnThruPtr_pusVoltage( &usMockVoltage );
    
    eMpbMathResistorVoltageDividerGetPullDownResistor_ExpectAndReturn( ulMockSeriesResistor1, usMockInputVoltageMv, usMockVoltage, NULL, eUnknownError );
    eMpbMathResistorVoltageDividerGetPullDownResistor_IgnoreArg_pulPullDownResistor();
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullDown( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/

void test_eThermistorCircuitUtilGetThermistanceValuePullDown_eMpbMathResistorGetResistorInParallel_Fail()
{
    handle_t xMockStream = 10;
    uint16_t usMockInputVoltageMv = 100, usMockVoltage = 500;
    uint32_t ulMockSeriesResistor1 = 200, ulMockSeriesResistor2 = 300, ulMockParallelResistor = 400, ulMockEquivalentResistor = 500;
    xThermistorCircuitConfig_t xMockThermistorConfig = { .usInputVoltagemV = usMockInputVoltageMv, .ulSeriesResistor1 = ulMockSeriesResistor1, .ulSeriesResistor2 = ulMockSeriesResistor2, .ulParallelResistor = ulMockParallelResistor };
    uint32_t ulThermistance;
    
    eThermistorAnalogReadmV_ExpectAndReturn( xMockStream, NULL, eSuccess );
    eThermistorAnalogReadmV_IgnoreArg_pusVoltage();
    eThermistorAnalogReadmV_ReturnThruPtr_pusVoltage( &usMockVoltage );
    
    eMpbMathResistorVoltageDividerGetPullDownResistor_ExpectAndReturn( ulMockSeriesResistor1, usMockInputVoltageMv, usMockVoltage, NULL, eSuccess );
    eMpbMathResistorVoltageDividerGetPullDownResistor_IgnoreArg_pulPullDownResistor();
    eMpbMathResistorVoltageDividerGetPullDownResistor_ReturnThruPtr_pulPullDownResistor( &ulMockEquivalentResistor );
    
    eMpbMathResistorGetResistorInParallel_ExpectAndReturn( ulMockEquivalentResistor, ulMockParallelResistor, NULL, eUnknownError );
    eMpbMathResistorGetResistorInParallel_IgnoreArg_pulResistor2();
    
    eMpbError = eThermistorCircuitUtilGetThermistanceValuePullDown( xMockStream, xMockThermistorConfig,  &ulThermistance );
    
    TEST_ASSERT_EQUAL( eUnknownError, eMpbError );
}
/*----------------------------------------------------------------------------*/