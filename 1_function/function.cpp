/**************************************************************************** **
 * Copyright (C) 2001-2020 Inhand Networks, Inc.
 **************************************************************************** **/

/* ************************************************************************** **
 *     MODULE NAME            : system
 *     LANGUAGE               : C++
 *     TARGET ENVIRONMENT     : Any
 *     FILE NAME              : function.cpp
 *     FIRST CREATION DATE    : 2021/05/09
 * --------------------------------------------------------------------------
 *     Version                : 1.0
 *     Author                 : EExuke
 *     Last Change            : 2021/05/09
 *     FILE DESCRIPTION       :
** ************************************************************************** */

#include <iostream>

#include "function.h"

using namespace std;

//2-1计算圆周长
float GetPerimeter(float fRadius)
{
	float fPerimeter = 0;

	fPerimeter = 2 * PI * fRadius;

	return fPerimeter;
}

//2-2分段函数
int GetPiecewise(int x)
{
	if (x<0 || x>3000) {
		printf("Error:input arg:x out of domain.");
		return -1;
	}

	if (x <= 1000) {
		return 18000*x;
	} else if(x < 3000) {
		return 18000 + 16000(x-1000) - 50000;
	}
}

