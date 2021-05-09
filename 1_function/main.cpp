/**************************************************************************** **
 * Copyright (C) 2001-2020 Inhand Networks, Inc.
 **************************************************************************** **/

/* ************************************************************************** **
 *     MODULE NAME            : system
 *     LANGUAGE               : C++
 *     TARGET ENVIRONMENT     : Any
 *     FILE NAME              : main.cpp
 *     FIRST CREATION DATE    : 2021/05/09
 * --------------------------------------------------------------------------
 *     Version                : 1.0
 *     Author                 : EExuke
 *     Last Change            : 2021/05/09
 *     FILE DESCRIPTION       :
** ************************************************************************** */

#include <iostream>

#include "function.h"
#include "/home/xuke/bin/dbg.h"

using namespace std;

/****************************************************************************
 *  Function Name : main
 *  Description   : The Main Function.
 *  Input(s)      : argc - The numbers of input value.
 *                : argv - The pointer to input specific parameters.
 *  Output(s)     : NULL
 *  Returns       : 0
 ****************************************************************************/
int main(int argc, const char *argv[])
{
	my_debug_msg("===>test 2-1:");
	float fR = 4.5;
	float fPerimeter = 0;
	fPerimeter = GetPerimeter(fR);
	printf("when r=%f, Perimeter=%f\n", fR, fPerimeter);

    return 0;
}

