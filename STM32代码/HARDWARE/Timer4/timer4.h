/* Define to prevent recursive inclusion --------------------------------------------------------------------------------*/
#ifndef __TIMER4_H
#define __TIMER4_H

/* Includes -------------------------------------------------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "sys.h"

/* 定义 -----------------------------------------------------------------------------------------------------------------*/

/* 提供给其他C文件调用的函数 --------------------------------------------------------------------------------------------*/
void Timer4_Init(void);       /* TIM4初始化函数      */
void TIM4_IRQHandler(void); /* 定时器4中断服务函数 */

#endif /* __TIMER4_H */

/*****************************************************END OF FILE*********************************************************/	
