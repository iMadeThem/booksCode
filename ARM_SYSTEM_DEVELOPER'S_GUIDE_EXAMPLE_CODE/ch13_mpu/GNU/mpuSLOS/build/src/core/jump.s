@  ____________________________________________________________________
@ 
@  Copyright (c) 2002, Andrew N. Sloss, Chris Wright and Dominic Symes
@  All rights reserved.
@  ____________________________________________________________________
@ 
@  NON-COMMERCIAL USE License
@  
@  Redistribution and use in source and binary forms, with or without 
@  modification, are permitted provided that the following conditions 
@  are met: 
@  
@  1. For NON-COMMERCIAL USE only.
@ 
@  2. Redistributions of source code must retain the above copyright 
@     notice, this list of conditions and the following disclaimer. 
@ 
@  3. Redistributions in binary form must reproduce the above 
@     copyright notice, this list of conditions and the following 
@     disclaimer in the documentation and/or other materials provided 
@     with the distribution. 
@ 
@  4. All advertising materials mentioning features or use of this 
@     software must display the following acknowledgement:
@ 
@     This product includes software developed by Andrew N. Sloss,
@     Chris Wright and Dominic Symes. 
@ 
@   THIS SOFTWARE IS PROVIDED BY THE CONTRIBUTORS ``AS IS'' AND ANY 
@   EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
@   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
@   PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE CONTRIBUTORS BE 
@   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, 
@   OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
@   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES@ LOSS OF USE, DATA, 
@   OR PROFITS@ OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
@   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR 
@   TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
@   OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
@   OF SUCH DAMAGE. 
@ 
@  If you have questions about this license or would like a different
@  license please email :
@ 
@ 	andrew@sloss.net
@ 
@ 
@ ****************************************************************************
@ * Simple Little Operating System - SLOS
@ ****************************************************************************

@ *****************************************************************************
@ * 
@ * Module      : jump.s
@ * Description : jumps into the first task
@ * OS          : mpuSLOS 0.03
@ * History     :
@ *
@ * 14th July 2002 Andrew N. Sloss
@ * - added a new jump mechanism
@ *
@ *****************************************************************************

     .text 
     .code 32
     .align 0
     .global     jumpToTask1

@ -- JumpToTask1 --------------------------------------------------------------
@
@ Description : sets the SPSR to User Mode and enables IRQ's 
@ Parameters  : r0 - address on task1
@ Return      : never
@ Notes       : this routine is required for MPU version of the
@               code.
@

jumpToTask1:
     MSR     SPSR_c,#0x50
     MOVS    pc,r0
     .end
