///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2009 James Devlin
//
// DISCLAIMER OF WARRANTY
//
// This source code is provided "as is" and without warranties as to performance
// or merchantability. The author and/or distributors of this source code may 
// have made statements about this source code. Any such statements do not 
// constitute warranties and shall not be relied on by the user in deciding 
// whether to use this source code.
//
// This source code is provided without any express or implied warranties 
// whatsoever. Because of the diversity of conditions and hardware under which
// this source code may be used, no warranty of fitness for a particular purpose
// is offered. The user is advised to test the source code thoroughly before 
// relying on it. The user must assume the entire risk of using the source code.
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#ifdef _DEBUG
	#define ASSERT(x) {if(!(x)) _asm{int 0x03}}
	#define VERIFY(x) {if(!(x)) _asm{int 0x03}}
#else
	#define ASSERT(x)
	#define VERIFY(x) x
#endif

void _trace(TCHAR *fmt, ...);
#define TRACE _trace

