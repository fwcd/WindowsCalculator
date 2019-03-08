#pragma once

#include <cstdint>

typedef int32_t HRESULT;

#define E_ACCESSDENIED 0x80070005
#define E_FAIL 0x80004005
#define E_INVALIDARG 0x80070057
#define E_OUTOFMEMORY 0x8007000E
#define E_POINTER 0x80004003
#define E_UNEXPECTED 0x8000FFFF
#define E_BOUNDS 0x8000000B
#define S_OK 0x0
#define S_FALSE 0x1

#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#define FAILED(hr) (((HRESULT)(hr)) < 0)
#define SCODE_CODE(sc) ((sc) & 0xFFFF)
