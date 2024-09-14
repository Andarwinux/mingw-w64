/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#include <_mingw.h>

extern unsigned int* __MINGW_IMP_SYMBOL(_winver);

unsigned int* __cdecl __p__winver(void);
unsigned int* __cdecl __p__winver(void)
{
    return __MINGW_IMP_SYMBOL(_winver);
}
unsigned int* (__cdecl *__MINGW_IMP_SYMBOL(__p__winver))(void) = __p__winver;
