// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define _CRT_SECURE_NO_WARNINGS   // Nicht ständig z.B. scanf() "anmeckern",
                                  // auch falls additional Security
                                  // Development Lifecycle (SDL) checks
                                  // aktiviert sein sollten /sdl .
#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <locale.h>               // wegen setlocale()

// TODO: reference additional headers your program requires here

#include <stdlib.h>
#include <iostream>
using namespace std;
#include <string>
#include <time.h>

#include "CLostrommel.h"
#include "CKarte.h"