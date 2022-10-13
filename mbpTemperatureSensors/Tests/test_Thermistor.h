/**
  * @file           test_Thermistor.h
  * @brief          Header file for extern functions mocking
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
/* Header guard ------------------------------------------------------------- */
#ifndef __TEST_THERMISTOR_H
#define __TEST_THERMISTOR_H

/* Includes ----------------------------------------------------------------- */
#include "mpblibs.h"

/* Define ------------------------------------------------------------------- */
/* Exported macro ----------------------------------------------------------- */
/* Exported enum ------------------------------------------------------------ */
/* Exported struct ---------------------------------------------------------- */
/* Global variables --------------------------------------------------------- */
/* Exported function prototypes --------------------------------------------- */

/**
* @brief      Get the voltage of the thermistor input in mV
* @param[in]  xStream: Application specific peripheral channel identifier
* @param[out] pusVoltage: Pointer to store the voltage
* @return     Success or library error message
**/
extern MpbError_t eThermistorAnalogReadmV( handle_t xStream, uint16_t *pusVoltage );

/**
* @brief        Calculate the log of a double for beta calculation
* @param[in]    dValue: Value that we want the log of
* @param[out]   pdResult: Result of the log
* @return       Success or library error message
*/
extern eMpbError_t eThermistorLogarithm( double dValue, double *pdResult );

#endif /* __TEST_THERMISTOR_H */