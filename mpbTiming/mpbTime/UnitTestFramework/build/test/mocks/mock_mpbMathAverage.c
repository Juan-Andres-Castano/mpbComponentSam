/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_mpbMathAverage.h"

static const char* CMockString_eMpbMathAverageFloat = "eMpbMathAverageFloat";
static const char* CMockString_eMpbMathAverageS32 = "eMpbMathAverageS32";
static const char* CMockString_pslArray = "pslArray";
static const char* CMockString_pslResult = "pslResult";
static const char* CMockString_pxArray = "pxArray";
static const char* CMockString_pxResult = "pxResult";
static const char* CMockString_usLength = "usLength";

typedef struct _CMOCK_eMpbMathAverageS32_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  CMOCK_ARG_MODE IgnoreMode;
  eMpbError_t ReturnVal;
  int CallOrder;
  const int32_t* Expected_pslArray;
  uint16_t Expected_usLength;
  int32_t* Expected_pslResult;
  int Expected_pslArray_Depth;
  int Expected_pslResult_Depth;
  int ReturnThruPtr_pslResult_Used;
  int32_t* ReturnThruPtr_pslResult_Val;
  int ReturnThruPtr_pslResult_Size;
  int IgnoreArg_pslArray;
  int IgnoreArg_usLength;
  int IgnoreArg_pslResult;

} CMOCK_eMpbMathAverageS32_CALL_INSTANCE;

typedef struct _CMOCK_eMpbMathAverageFloat_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  CMOCK_ARG_MODE IgnoreMode;
  eMpbError_t ReturnVal;
  int CallOrder;
  const float* Expected_pxArray;
  uint16_t Expected_usLength;
  float* Expected_pxResult;
  int Expected_pxArray_Depth;
  int Expected_pxResult_Depth;
  int ReturnThruPtr_pxResult_Used;
  float* ReturnThruPtr_pxResult_Val;
  int ReturnThruPtr_pxResult_Size;
  int IgnoreArg_pxArray;
  int IgnoreArg_usLength;
  int IgnoreArg_pxResult;

} CMOCK_eMpbMathAverageFloat_CALL_INSTANCE;

static struct mock_mpbMathAverageInstance
{
  int eMpbMathAverageS32_IgnoreBool;
  eMpbError_t eMpbMathAverageS32_FinalReturn;
  CMOCK_eMpbMathAverageS32_CALLBACK eMpbMathAverageS32_CallbackFunctionPointer;
  int eMpbMathAverageS32_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE eMpbMathAverageS32_CallInstance;
  int eMpbMathAverageFloat_IgnoreBool;
  eMpbError_t eMpbMathAverageFloat_FinalReturn;
  CMOCK_eMpbMathAverageFloat_CALLBACK eMpbMathAverageFloat_CallbackFunctionPointer;
  int eMpbMathAverageFloat_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE eMpbMathAverageFloat_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_mpbMathAverage_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.eMpbMathAverageS32_IgnoreBool)
    Mock.eMpbMathAverageS32_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_eMpbMathAverageS32);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.eMpbMathAverageS32_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.eMpbMathAverageS32_CallbackFunctionPointer != NULL)
    Mock.eMpbMathAverageS32_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.eMpbMathAverageFloat_IgnoreBool)
    Mock.eMpbMathAverageFloat_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_eMpbMathAverageFloat);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.eMpbMathAverageFloat_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.eMpbMathAverageFloat_CallbackFunctionPointer != NULL)
    Mock.eMpbMathAverageFloat_CallInstance = CMOCK_GUTS_NONE;
}

void mock_mpbMathAverage_Init(void)
{
  mock_mpbMathAverage_Destroy();
}

void mock_mpbMathAverage_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.eMpbMathAverageS32_CallbackFunctionPointer = NULL;
  Mock.eMpbMathAverageS32_CallbackCalls = 0;
  Mock.eMpbMathAverageFloat_CallbackFunctionPointer = NULL;
  Mock.eMpbMathAverageFloat_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

eMpbError_t eMpbMathAverageS32(const int32_t* pslArray, uint16_t usLength, int32_t* pslResult)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_eMpbMathAverageS32);
  cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.eMpbMathAverageS32_CallInstance);
  Mock.eMpbMathAverageS32_CallInstance = CMock_Guts_MemNext(Mock.eMpbMathAverageS32_CallInstance);
  if (Mock.eMpbMathAverageS32_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.eMpbMathAverageS32_FinalReturn;
    memcpy(&Mock.eMpbMathAverageS32_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(eMpbError_t));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.eMpbMathAverageS32_CallbackFunctionPointer != NULL)
  {
    return Mock.eMpbMathAverageS32_CallbackFunctionPointer(pslArray, usLength, pslResult, Mock.eMpbMathAverageS32_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (cmock_call_instance->IgnoreMode != CMOCK_ARG_NONE)
  {
  if (!cmock_call_instance->IgnoreArg_pslArray)
  {
    UNITY_SET_DETAILS(CMockString_eMpbMathAverageS32,CMockString_pslArray);
    if (cmock_call_instance->Expected_pslArray == NULL)
      { UNITY_TEST_ASSERT_NULL(pslArray, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_INT_ARRAY(cmock_call_instance->Expected_pslArray, pslArray, cmock_call_instance->Expected_pslArray_Depth, cmock_line, CMockStringMismatch); }
  }
  if (!cmock_call_instance->IgnoreArg_usLength)
  {
    UNITY_SET_DETAILS(CMockString_eMpbMathAverageS32,CMockString_usLength);
    UNITY_TEST_ASSERT_EQUAL_HEX16(cmock_call_instance->Expected_usLength, usLength, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_pslResult)
  {
    UNITY_SET_DETAILS(CMockString_eMpbMathAverageS32,CMockString_pslResult);
    if (cmock_call_instance->Expected_pslResult == NULL)
      { UNITY_TEST_ASSERT_NULL(pslResult, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_INT_ARRAY(cmock_call_instance->Expected_pslResult, pslResult, cmock_call_instance->Expected_pslResult_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  if (cmock_call_instance->ReturnThruPtr_pslResult_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(pslResult, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)pslResult, (void*)cmock_call_instance->ReturnThruPtr_pslResult_Val,
      cmock_call_instance->ReturnThruPtr_pslResult_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_eMpbMathAverageS32(CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance, const int32_t* pslArray, int pslArray_Depth, uint16_t usLength, int32_t* pslResult, int pslResult_Depth)
{
  cmock_call_instance->Expected_pslArray = pslArray;
  cmock_call_instance->Expected_pslArray_Depth = pslArray_Depth;
  cmock_call_instance->IgnoreArg_pslArray = 0;
  cmock_call_instance->Expected_usLength = usLength;
  cmock_call_instance->IgnoreArg_usLength = 0;
  cmock_call_instance->Expected_pslResult = pslResult;
  cmock_call_instance->Expected_pslResult_Depth = pslResult_Depth;
  cmock_call_instance->IgnoreArg_pslResult = 0;
  cmock_call_instance->ReturnThruPtr_pslResult_Used = 0;
}

void eMpbMathAverageS32_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageS32_CALL_INSTANCE));
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageS32_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageS32_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageS32_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.eMpbMathAverageS32_IgnoreBool = (int)1;
}

void eMpbMathAverageS32_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageS32_CALL_INSTANCE));
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageS32_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageS32_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageS32_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_NONE;
}

void eMpbMathAverageS32_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const int32_t* pslArray, uint16_t usLength, int32_t* pslResult, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageS32_CALL_INSTANCE));
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageS32_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageS32_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageS32_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_eMpbMathAverageS32(cmock_call_instance, pslArray, 1, usLength, pslResult, 1);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(eMpbError_t));
  UNITY_CLR_DETAILS();
}

void eMpbMathAverageS32_StubWithCallback(CMOCK_eMpbMathAverageS32_CALLBACK Callback)
{
  Mock.eMpbMathAverageS32_IgnoreBool = (int)0;
  Mock.eMpbMathAverageS32_CallbackFunctionPointer = Callback;
}

void eMpbMathAverageS32_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, const int32_t* pslArray, int pslArray_Depth, uint16_t usLength, int32_t* pslResult, int pslResult_Depth, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageS32_CALL_INSTANCE));
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageS32_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageS32_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageS32_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_eMpbMathAverageS32(cmock_call_instance, pslArray, pslArray_Depth, usLength, pslResult, pslResult_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void eMpbMathAverageS32_CMockReturnMemThruPtr_pslResult(UNITY_LINE_TYPE cmock_line, int32_t* pslResult, int cmock_size)
{
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageS32_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_pslResult_Used = 1;
  cmock_call_instance->ReturnThruPtr_pslResult_Val = pslResult;
  cmock_call_instance->ReturnThruPtr_pslResult_Size = cmock_size;
}

void eMpbMathAverageS32_CMockIgnoreArg_pslArray(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageS32_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_pslArray = 1;
}

void eMpbMathAverageS32_CMockIgnoreArg_usLength(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageS32_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_usLength = 1;
}

void eMpbMathAverageS32_CMockIgnoreArg_pslResult(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_eMpbMathAverageS32_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageS32_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageS32_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_pslResult = 1;
}

eMpbError_t eMpbMathAverageFloat(const float* pxArray, uint16_t usLength, float* pxResult)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_eMpbMathAverageFloat);
  cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.eMpbMathAverageFloat_CallInstance);
  Mock.eMpbMathAverageFloat_CallInstance = CMock_Guts_MemNext(Mock.eMpbMathAverageFloat_CallInstance);
  if (Mock.eMpbMathAverageFloat_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.eMpbMathAverageFloat_FinalReturn;
    memcpy(&Mock.eMpbMathAverageFloat_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(eMpbError_t));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.eMpbMathAverageFloat_CallbackFunctionPointer != NULL)
  {
    return Mock.eMpbMathAverageFloat_CallbackFunctionPointer(pxArray, usLength, pxResult, Mock.eMpbMathAverageFloat_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  if (cmock_call_instance->IgnoreMode != CMOCK_ARG_NONE)
  {
  if (!cmock_call_instance->IgnoreArg_pxArray)
  {
    UNITY_SET_DETAILS(CMockString_eMpbMathAverageFloat,CMockString_pxArray);
    if (cmock_call_instance->Expected_pxArray == NULL)
      { UNITY_TEST_ASSERT_NULL(pxArray, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_FLOAT_ARRAY(cmock_call_instance->Expected_pxArray, pxArray, cmock_call_instance->Expected_pxArray_Depth, cmock_line, CMockStringMismatch); }
  }
  if (!cmock_call_instance->IgnoreArg_usLength)
  {
    UNITY_SET_DETAILS(CMockString_eMpbMathAverageFloat,CMockString_usLength);
    UNITY_TEST_ASSERT_EQUAL_HEX16(cmock_call_instance->Expected_usLength, usLength, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_pxResult)
  {
    UNITY_SET_DETAILS(CMockString_eMpbMathAverageFloat,CMockString_pxResult);
    if (cmock_call_instance->Expected_pxResult == NULL)
      { UNITY_TEST_ASSERT_NULL(pxResult, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_FLOAT_ARRAY(cmock_call_instance->Expected_pxResult, pxResult, cmock_call_instance->Expected_pxResult_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  if (cmock_call_instance->ReturnThruPtr_pxResult_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(pxResult, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)pxResult, (void*)cmock_call_instance->ReturnThruPtr_pxResult_Val,
      cmock_call_instance->ReturnThruPtr_pxResult_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_eMpbMathAverageFloat(CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance, const float* pxArray, int pxArray_Depth, uint16_t usLength, float* pxResult, int pxResult_Depth)
{
  cmock_call_instance->Expected_pxArray = pxArray;
  cmock_call_instance->Expected_pxArray_Depth = pxArray_Depth;
  cmock_call_instance->IgnoreArg_pxArray = 0;
  cmock_call_instance->Expected_usLength = usLength;
  cmock_call_instance->IgnoreArg_usLength = 0;
  cmock_call_instance->Expected_pxResult = pxResult;
  cmock_call_instance->Expected_pxResult_Depth = pxResult_Depth;
  cmock_call_instance->IgnoreArg_pxResult = 0;
  cmock_call_instance->ReturnThruPtr_pxResult_Used = 0;
}

void eMpbMathAverageFloat_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageFloat_CALL_INSTANCE));
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageFloat_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageFloat_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageFloat_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.eMpbMathAverageFloat_IgnoreBool = (int)1;
}

void eMpbMathAverageFloat_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageFloat_CALL_INSTANCE));
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageFloat_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageFloat_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageFloat_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_NONE;
}

void eMpbMathAverageFloat_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const float* pxArray, uint16_t usLength, float* pxResult, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageFloat_CALL_INSTANCE));
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageFloat_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageFloat_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageFloat_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_eMpbMathAverageFloat(cmock_call_instance, pxArray, 1, usLength, pxResult, 1);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(eMpbError_t));
  UNITY_CLR_DETAILS();
}

void eMpbMathAverageFloat_StubWithCallback(CMOCK_eMpbMathAverageFloat_CALLBACK Callback)
{
  Mock.eMpbMathAverageFloat_IgnoreBool = (int)0;
  Mock.eMpbMathAverageFloat_CallbackFunctionPointer = Callback;
}

void eMpbMathAverageFloat_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, const float* pxArray, int pxArray_Depth, uint16_t usLength, float* pxResult, int pxResult_Depth, eMpbError_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_eMpbMathAverageFloat_CALL_INSTANCE));
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.eMpbMathAverageFloat_CallInstance = CMock_Guts_MemChain(Mock.eMpbMathAverageFloat_CallInstance, cmock_guts_index);
  Mock.eMpbMathAverageFloat_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->IgnoreMode = CMOCK_ARG_ALL;
  CMockExpectParameters_eMpbMathAverageFloat(cmock_call_instance, pxArray, pxArray_Depth, usLength, pxResult, pxResult_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void eMpbMathAverageFloat_CMockReturnMemThruPtr_pxResult(UNITY_LINE_TYPE cmock_line, float* pxResult, int cmock_size)
{
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageFloat_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_pxResult_Used = 1;
  cmock_call_instance->ReturnThruPtr_pxResult_Val = pxResult;
  cmock_call_instance->ReturnThruPtr_pxResult_Size = cmock_size;
}

void eMpbMathAverageFloat_CMockIgnoreArg_pxArray(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageFloat_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_pxArray = 1;
}

void eMpbMathAverageFloat_CMockIgnoreArg_usLength(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageFloat_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_usLength = 1;
}

void eMpbMathAverageFloat_CMockIgnoreArg_pxResult(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_eMpbMathAverageFloat_CALL_INSTANCE* cmock_call_instance = (CMOCK_eMpbMathAverageFloat_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.eMpbMathAverageFloat_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_pxResult = 1;
}

