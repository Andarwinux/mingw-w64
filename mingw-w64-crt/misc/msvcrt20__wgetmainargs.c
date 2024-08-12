/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#include <internal.h>

/* Define __wgetmainargs() function via msvcrt20.dll __wgetmainargs() function */
_CRTIMP void __cdecl __msvcrt20_wgetmainargs(int *argc, wchar_t ***argv, wchar_t ***envp, int expand_wildcards, int newmode);
int __cdecl __wgetmainargs(int *argc, wchar_t ***argv, wchar_t ***envp, int expand_wildcards, _startupinfo *startup_info)
{
  __msvcrt20_wgetmainargs(argc, argv, envp, expand_wildcards, startup_info->newmode);
  return 0;
}
