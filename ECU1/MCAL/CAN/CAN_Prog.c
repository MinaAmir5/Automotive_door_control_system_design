#include "SysTick_Interface.h"
#include "SysTick_Private.h"

void (*SysTick_CallBack) (void);



void M_SysTick_Void_SysTickInit(u32 Copy_U32_DesiredTime)
{
	__asm  ("    CPSIE  I\n");
	
	f32 Local_U32_TickTime   = PRESCALUR / SYSTEM_CLOCK;       /* result will be in micro second */
	f32 Local_U32_TotalTicks = (Copy_U32_DesiredTime * 1000) / Local_U32_TickTime;
	STRELOAD_REG=Local_U32_TotalTicks+1;
	SET_BIT(STCTRL_REG,CLK_SRC_BIT);
	SET_BIT(STCTRL_REG,INTEN_BIT);
	SET_BIT(STCTRL_REG,ENABLE_BIT);
}

void M_SysTick_Void_SetCallBack(void(*Copy_Ptr)(void))
{
		SysTick_CallBack = Copy_Ptr;

}
void SysTick_Handler(void)
{
		SysTick_CallBack();
}
