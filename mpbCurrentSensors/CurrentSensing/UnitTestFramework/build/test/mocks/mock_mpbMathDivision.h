/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_MPBMATHDIVISION_H
#define _MOCK_MPBMATHDIVISION_H

#include "mpbMathDivision.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_mpbMathDivision_Init(void);
void mock_mpbMathDivision_Destroy(void);
void mock_mpbMathDivision_Verify(void);




#define eMpbMathDivisionU32_IgnoreAndReturn(cmock_retval) eMpbMathDivisionU32_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionU32_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionU32_ExpectAnyArgsAndReturn(cmock_retval) eMpbMathDivisionU32_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionU32_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionU32_ExpectAndReturn(ulNumerator, ulDenominator, pulResult, cmock_retval) eMpbMathDivisionU32_CMockExpectAndReturn(__LINE__, ulNumerator, ulDenominator, pulResult, cmock_retval)
void eMpbMathDivisionU32_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ulNumerator, uint32_t ulDenominator, uint32_t* pulResult, eMpbError_t cmock_to_return);
typedef eMpbError_t (* CMOCK_eMpbMathDivisionU32_CALLBACK)(uint32_t ulNumerator, uint32_t ulDenominator, uint32_t* pulResult, int cmock_num_calls);
void eMpbMathDivisionU32_StubWithCallback(CMOCK_eMpbMathDivisionU32_CALLBACK Callback);
#define eMpbMathDivisionU32_ExpectWithArrayAndReturn(ulNumerator, ulDenominator, pulResult, pulResult_Depth, cmock_retval) eMpbMathDivisionU32_CMockExpectWithArrayAndReturn(__LINE__, ulNumerator, ulDenominator, pulResult, pulResult_Depth, cmock_retval)
void eMpbMathDivisionU32_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t ulNumerator, uint32_t ulDenominator, uint32_t* pulResult, int pulResult_Depth, eMpbError_t cmock_to_return);
#define eMpbMathDivisionU32_ReturnThruPtr_pulResult(pulResult) eMpbMathDivisionU32_CMockReturnMemThruPtr_pulResult(__LINE__, pulResult, sizeof(*pulResult))
#define eMpbMathDivisionU32_ReturnArrayThruPtr_pulResult(pulResult, cmock_len) eMpbMathDivisionU32_CMockReturnMemThruPtr_pulResult(__LINE__, pulResult, (int)(cmock_len * (int)sizeof(*pulResult)))
#define eMpbMathDivisionU32_ReturnMemThruPtr_pulResult(pulResult, cmock_size) eMpbMathDivisionU32_CMockReturnMemThruPtr_pulResult(__LINE__, pulResult, cmock_size)
void eMpbMathDivisionU32_CMockReturnMemThruPtr_pulResult(UNITY_LINE_TYPE cmock_line, uint32_t* pulResult, int cmock_size);
#define eMpbMathDivisionU32_IgnoreArg_ulNumerator() eMpbMathDivisionU32_CMockIgnoreArg_ulNumerator(__LINE__)
void eMpbMathDivisionU32_CMockIgnoreArg_ulNumerator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionU32_IgnoreArg_ulDenominator() eMpbMathDivisionU32_CMockIgnoreArg_ulDenominator(__LINE__)
void eMpbMathDivisionU32_CMockIgnoreArg_ulDenominator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionU32_IgnoreArg_pulResult() eMpbMathDivisionU32_CMockIgnoreArg_pulResult(__LINE__)
void eMpbMathDivisionU32_CMockIgnoreArg_pulResult(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionFloat_IgnoreAndReturn(cmock_retval) eMpbMathDivisionFloat_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionFloat_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionFloat_ExpectAnyArgsAndReturn(cmock_retval) eMpbMathDivisionFloat_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionFloat_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionFloat_ExpectAndReturn(fNumerator, fDenominator, pfResult, cmock_retval) eMpbMathDivisionFloat_CMockExpectAndReturn(__LINE__, fNumerator, fDenominator, pfResult, cmock_retval)
void eMpbMathDivisionFloat_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, float fNumerator, float fDenominator, float* pfResult, eMpbError_t cmock_to_return);
typedef eMpbError_t (* CMOCK_eMpbMathDivisionFloat_CALLBACK)(float fNumerator, float fDenominator, float* pfResult, int cmock_num_calls);
void eMpbMathDivisionFloat_StubWithCallback(CMOCK_eMpbMathDivisionFloat_CALLBACK Callback);
#define eMpbMathDivisionFloat_ExpectWithArrayAndReturn(fNumerator, fDenominator, pfResult, pfResult_Depth, cmock_retval) eMpbMathDivisionFloat_CMockExpectWithArrayAndReturn(__LINE__, fNumerator, fDenominator, pfResult, pfResult_Depth, cmock_retval)
void eMpbMathDivisionFloat_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, float fNumerator, float fDenominator, float* pfResult, int pfResult_Depth, eMpbError_t cmock_to_return);
#define eMpbMathDivisionFloat_ReturnThruPtr_pfResult(pfResult) eMpbMathDivisionFloat_CMockReturnMemThruPtr_pfResult(__LINE__, pfResult, sizeof(*pfResult))
#define eMpbMathDivisionFloat_ReturnArrayThruPtr_pfResult(pfResult, cmock_len) eMpbMathDivisionFloat_CMockReturnMemThruPtr_pfResult(__LINE__, pfResult, (int)(cmock_len * (int)sizeof(*pfResult)))
#define eMpbMathDivisionFloat_ReturnMemThruPtr_pfResult(pfResult, cmock_size) eMpbMathDivisionFloat_CMockReturnMemThruPtr_pfResult(__LINE__, pfResult, cmock_size)
void eMpbMathDivisionFloat_CMockReturnMemThruPtr_pfResult(UNITY_LINE_TYPE cmock_line, float* pfResult, int cmock_size);
#define eMpbMathDivisionFloat_IgnoreArg_fNumerator() eMpbMathDivisionFloat_CMockIgnoreArg_fNumerator(__LINE__)
void eMpbMathDivisionFloat_CMockIgnoreArg_fNumerator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionFloat_IgnoreArg_fDenominator() eMpbMathDivisionFloat_CMockIgnoreArg_fDenominator(__LINE__)
void eMpbMathDivisionFloat_CMockIgnoreArg_fDenominator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionFloat_IgnoreArg_pfResult() eMpbMathDivisionFloat_CMockIgnoreArg_pfResult(__LINE__)
void eMpbMathDivisionFloat_CMockIgnoreArg_pfResult(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionDouble_IgnoreAndReturn(cmock_retval) eMpbMathDivisionDouble_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionDouble_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionDouble_ExpectAnyArgsAndReturn(cmock_retval) eMpbMathDivisionDouble_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionDouble_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionDouble_ExpectAndReturn(fdNumerator, fdDenominator, pfdResult, cmock_retval) eMpbMathDivisionDouble_CMockExpectAndReturn(__LINE__, fdNumerator, fdDenominator, pfdResult, cmock_retval)
void eMpbMathDivisionDouble_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, double fdNumerator, double fdDenominator, double* pfdResult, eMpbError_t cmock_to_return);
typedef eMpbError_t (* CMOCK_eMpbMathDivisionDouble_CALLBACK)(double fdNumerator, double fdDenominator, double* pfdResult, int cmock_num_calls);
void eMpbMathDivisionDouble_StubWithCallback(CMOCK_eMpbMathDivisionDouble_CALLBACK Callback);
#define eMpbMathDivisionDouble_ExpectWithArrayAndReturn(fdNumerator, fdDenominator, pfdResult, pfdResult_Depth, cmock_retval) eMpbMathDivisionDouble_CMockExpectWithArrayAndReturn(__LINE__, fdNumerator, fdDenominator, pfdResult, pfdResult_Depth, cmock_retval)
void eMpbMathDivisionDouble_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, double fdNumerator, double fdDenominator, double* pfdResult, int pfdResult_Depth, eMpbError_t cmock_to_return);
#define eMpbMathDivisionDouble_ReturnThruPtr_pfdResult(pfdResult) eMpbMathDivisionDouble_CMockReturnMemThruPtr_pfdResult(__LINE__, pfdResult, sizeof(*pfdResult))
#define eMpbMathDivisionDouble_ReturnArrayThruPtr_pfdResult(pfdResult, cmock_len) eMpbMathDivisionDouble_CMockReturnMemThruPtr_pfdResult(__LINE__, pfdResult, (int)(cmock_len * (int)sizeof(*pfdResult)))
#define eMpbMathDivisionDouble_ReturnMemThruPtr_pfdResult(pfdResult, cmock_size) eMpbMathDivisionDouble_CMockReturnMemThruPtr_pfdResult(__LINE__, pfdResult, cmock_size)
void eMpbMathDivisionDouble_CMockReturnMemThruPtr_pfdResult(UNITY_LINE_TYPE cmock_line, double* pfdResult, int cmock_size);
#define eMpbMathDivisionDouble_IgnoreArg_fdNumerator() eMpbMathDivisionDouble_CMockIgnoreArg_fdNumerator(__LINE__)
void eMpbMathDivisionDouble_CMockIgnoreArg_fdNumerator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionDouble_IgnoreArg_fdDenominator() eMpbMathDivisionDouble_CMockIgnoreArg_fdDenominator(__LINE__)
void eMpbMathDivisionDouble_CMockIgnoreArg_fdDenominator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionDouble_IgnoreArg_pfdResult() eMpbMathDivisionDouble_CMockIgnoreArg_pfdResult(__LINE__)
void eMpbMathDivisionDouble_CMockIgnoreArg_pfdResult(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionS64_IgnoreAndReturn(cmock_retval) eMpbMathDivisionS64_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionS64_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionS64_ExpectAnyArgsAndReturn(cmock_retval) eMpbMathDivisionS64_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void eMpbMathDivisionS64_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return);
#define eMpbMathDivisionS64_ExpectAndReturn(sllNumerator, sllDenominator, psllResult, cmock_retval) eMpbMathDivisionS64_CMockExpectAndReturn(__LINE__, sllNumerator, sllDenominator, psllResult, cmock_retval)
void eMpbMathDivisionS64_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int64_t sllNumerator, int64_t sllDenominator, int64_t* psllResult, eMpbError_t cmock_to_return);
typedef eMpbError_t (* CMOCK_eMpbMathDivisionS64_CALLBACK)(int64_t sllNumerator, int64_t sllDenominator, int64_t* psllResult, int cmock_num_calls);
void eMpbMathDivisionS64_StubWithCallback(CMOCK_eMpbMathDivisionS64_CALLBACK Callback);
#define eMpbMathDivisionS64_ExpectWithArrayAndReturn(sllNumerator, sllDenominator, psllResult, psllResult_Depth, cmock_retval) eMpbMathDivisionS64_CMockExpectWithArrayAndReturn(__LINE__, sllNumerator, sllDenominator, psllResult, psllResult_Depth, cmock_retval)
void eMpbMathDivisionS64_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, int64_t sllNumerator, int64_t sllDenominator, int64_t* psllResult, int psllResult_Depth, eMpbError_t cmock_to_return);
#define eMpbMathDivisionS64_ReturnThruPtr_psllResult(psllResult) eMpbMathDivisionS64_CMockReturnMemThruPtr_psllResult(__LINE__, psllResult, sizeof(*psllResult))
#define eMpbMathDivisionS64_ReturnArrayThruPtr_psllResult(psllResult, cmock_len) eMpbMathDivisionS64_CMockReturnMemThruPtr_psllResult(__LINE__, psllResult, (int)(cmock_len * (int)sizeof(*psllResult)))
#define eMpbMathDivisionS64_ReturnMemThruPtr_psllResult(psllResult, cmock_size) eMpbMathDivisionS64_CMockReturnMemThruPtr_psllResult(__LINE__, psllResult, cmock_size)
void eMpbMathDivisionS64_CMockReturnMemThruPtr_psllResult(UNITY_LINE_TYPE cmock_line, int64_t* psllResult, int cmock_size);
#define eMpbMathDivisionS64_IgnoreArg_sllNumerator() eMpbMathDivisionS64_CMockIgnoreArg_sllNumerator(__LINE__)
void eMpbMathDivisionS64_CMockIgnoreArg_sllNumerator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionS64_IgnoreArg_sllDenominator() eMpbMathDivisionS64_CMockIgnoreArg_sllDenominator(__LINE__)
void eMpbMathDivisionS64_CMockIgnoreArg_sllDenominator(UNITY_LINE_TYPE cmock_line);
#define eMpbMathDivisionS64_IgnoreArg_psllResult() eMpbMathDivisionS64_CMockIgnoreArg_psllResult(__LINE__)
void eMpbMathDivisionS64_CMockIgnoreArg_psllResult(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
