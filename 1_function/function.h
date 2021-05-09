/**************************************************************************** **
 * Copyright (C) 2001-2020 Inhand Networks, Inc.
 **************************************************************************** **/

/* ************************************************************************** **
 *     MODULE NAME            : system
 *     LANGUAGE               : C
 *     TARGET ENVIRONMENT     : Any
 *     FILE NAME              : function.h
 *     FIRST CREATION DATE    : 2021/05/09
 * --------------------------------------------------------------------------
 *     Version                : 1.0
 *     Author                 : EExuke
 *     Last Change            : 2021/05/09
 *     FILE DESCRIPTION       : API exported to external moduels
** ************************************************************************** */
#ifndef _FUNCTION_H_
#define _FUNCTION_H_

/*------------------Macro Definition-------------------------*/
#define PI    3.1415
/*------------------End of Macro Definition------------------*/

/*------------------API Definition---------------------------*/
//2-1圆周长
float GetPerimeter(float fRadius);
//2-2分段函数
int GetPiecewise(int x);
/*------------------End of API Definition--------------------*/

#endif /* End of _FUNCTION_H_ */

