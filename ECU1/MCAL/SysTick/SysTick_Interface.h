#ifndef MCAL_SYSTICK_INTERFACE_H_
#define MCAL_SYSTICK_INTERFACE_H_

#include "STD.h"
#include "BitMath.h"

#define PRESCALUR      1
#define SYSTEM_CLOCK  16

void M_SysTick_Void_SysTickInit(u32);
void M_SysTick_Void_SetCallBack(void(*)(void));
void SysTick_Handler(void);




#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
