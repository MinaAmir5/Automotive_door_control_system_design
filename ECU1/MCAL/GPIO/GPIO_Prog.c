#include "GPIO_Interface.h"
#include "GPIO_Private.h"

void M_GPIO_Void_SetPinDirection(u8 Copy_U8_Num , u8 Copy_U8_State )
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
	switch(Copy_U8_State)
			{
			case GPIO_INPUT :
				switch(Local_U8_Port)
				{
				case 1: CLR_BIT(GPIOA_DIR_REG,Local_U8_Pin); break;
				case 2: CLR_BIT(GPIOB_DIR_REG,Local_U8_Pin); break;
				case 3: CLR_BIT(GPIOC_DIR_REG,Local_U8_Pin); break;
				case 4: CLR_BIT(GPIOD_DIR_REG,Local_U8_Pin); break;
				case 5: CLR_BIT(GPIOE_DIR_REG,Local_U8_Pin); break;
				case 6: CLR_BIT(GPIOF_DIR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
			case GPIO_OUTPUT:
				switch(Local_U8_Port)
				{
				case 1: SET_BIT(GPIOA_DIR_REG,Local_U8_Pin); break;
				case 2: SET_BIT(GPIOB_DIR_REG,Local_U8_Pin); break;
				case 3: SET_BIT(GPIOC_DIR_REG,Local_U8_Pin); break;
				case 4: SET_BIT(GPIOD_DIR_REG,Local_U8_Pin); break;
				case 5: SET_BIT(GPIOE_DIR_REG,Local_U8_Pin); break;
				case 6: SET_BIT(GPIOF_DIR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
				default:                                break;
			}
}
void M_GPIO_Void_SetPinValue(u8 Copy_U8_Num , u8 Copy_U8_State )
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
	switch(Copy_U8_State)
			{
			case GPIO_LOW :
				switch(Local_U8_Port)
				{
				case 1: CLR_BIT(GPIOA_DATA_REG,Local_U8_Pin); break;
				case 2: CLR_BIT(GPIOB_DATA_REG,Local_U8_Pin); break;
				case 3: CLR_BIT(GPIOC_DATA_REG,Local_U8_Pin); break;
				case 4: CLR_BIT(GPIOD_DATA_REG,Local_U8_Pin); break;
				case 5: CLR_BIT(GPIOE_DATA_REG,Local_U8_Pin); break;
				case 6: CLR_BIT(GPIOF_DATA_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
			case GPIO_HIGH:
				switch(Local_U8_Port)
				{
				case 1: SET_BIT(GPIOA_DATA_REG,Local_U8_Pin); break;
				case 2: SET_BIT(GPIOB_DATA_REG,Local_U8_Pin); break;
				case 3: SET_BIT(GPIOC_DATA_REG,Local_U8_Pin); break;
				case 4: SET_BIT(GPIOD_DATA_REG,Local_U8_Pin); break;
				case 5: SET_BIT(GPIOE_DATA_REG,Local_U8_Pin); break;
				case 6: SET_BIT(GPIOF_DATA_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
				default:                                break;
			}
}

u8 M_GPIO_U8_GetPinValue(u8 Copy_U8_Num)
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
	u8 Local_U8_Reading = 0;
				switch(Local_U8_Port)
				{
				case 1: Local_U8_Reading = GET_BIT(GPIOA_DATA_REG,Local_U8_Pin); break;
				case 2: Local_U8_Reading = GET_BIT(GPIOB_DATA_REG,Local_U8_Pin); break;
				case 3: Local_U8_Reading = GET_BIT(GPIOC_DATA_REG,Local_U8_Pin); break;
				case 4: Local_U8_Reading = GET_BIT(GPIOD_DATA_REG,Local_U8_Pin); break;
				case 5: Local_U8_Reading = GET_BIT(GPIOE_DATA_REG,Local_U8_Pin); break;
				case 6: Local_U8_Reading = GET_BIT(GPIOF_DATA_REG,Local_U8_Pin); break;
				default:                                break;
				}
				return Local_U8_Reading;
}

void M_GPIO_Void_SetPinDigital(u8 Copy_U8_Num , u8 Copy_U8_State )
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
		switch(Copy_U8_State)
			{
			case GPIO_DISABLE :
				switch(Local_U8_Port)
				{
				case 1: CLR_BIT(GPIOA_DEN_REG,Local_U8_Pin); break;
				case 2: CLR_BIT(GPIOB_DEN_REG,Local_U8_Pin); break;
				case 3: CLR_BIT(GPIOC_DEN_REG,Local_U8_Pin); break;
				case 4: CLR_BIT(GPIOD_DEN_REG,Local_U8_Pin); break;
				case 5: CLR_BIT(GPIOE_DEN_REG,Local_U8_Pin); break;
				case 6: CLR_BIT(GPIOF_DEN_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
			case GPIO_ENABLE:
				switch(Local_U8_Port)
				{
				case 1: SET_BIT(GPIOA_DEN_REG,Local_U8_Pin); break;
				case 2: SET_BIT(GPIOB_DEN_REG,Local_U8_Pin); break;
				case 3: SET_BIT(GPIOC_DEN_REG,Local_U8_Pin); break;
				case 4: SET_BIT(GPIOD_DEN_REG,Local_U8_Pin); break;
				case 5: SET_BIT(GPIOE_DEN_REG,Local_U8_Pin); break;
				case 6: SET_BIT(GPIOF_DEN_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
				default:                                break;
			}
}
void M_GPIO_Void_SetAlterFunc(u8 Copy_U8_Num,u8 Copy_U8_State )
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
			switch(Copy_U8_State)
			{
			case GPIO_DISABLE :
				switch(Local_U8_Port)
				{
				case 1: CLR_BIT(GPIOA_AFSEL_REG,Local_U8_Pin); break;
				case 2: CLR_BIT(GPIOB_AFSEL_REG,Local_U8_Pin); break;
				case 3: CLR_BIT(GPIOC_AFSEL_REG,Local_U8_Pin); break;
				case 4: CLR_BIT(GPIOD_AFSEL_REG,Local_U8_Pin); break;
				case 5: CLR_BIT(GPIOE_AFSEL_REG,Local_U8_Pin); break;
				case 6: CLR_BIT(GPIOF_AFSEL_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
			case GPIO_ENABLE:
				switch(Local_U8_Port)
				{
				case 1: SET_BIT(GPIOA_AFSEL_REG,Local_U8_Pin); break;
				case 2: SET_BIT(GPIOB_AFSEL_REG,Local_U8_Pin); break;
				case 3: SET_BIT(GPIOC_AFSEL_REG,Local_U8_Pin); break;
				case 4: SET_BIT(GPIOD_AFSEL_REG,Local_U8_Pin); break;
				case 5: SET_BIT(GPIOE_AFSEL_REG,Local_U8_Pin); break;
				case 6: SET_BIT(GPIOF_AFSEL_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
				default:                                break;
			}
}
void M_GPIO_Void_EnableODR(u8 Copy_U8_Num,u8 Copy_U8_State )
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
				switch(Copy_U8_State)
			{
			case GPIO_DISABLE :
				switch(Local_U8_Port)
				{
				case 1: CLR_BIT(GPIOA_ODR_REG,Local_U8_Pin); break;
				case 2: CLR_BIT(GPIOB_ODR_REG,Local_U8_Pin); break;
				case 3: CLR_BIT(GPIOC_ODR_REG,Local_U8_Pin); break;
				case 4: CLR_BIT(GPIOD_ODR_REG,Local_U8_Pin); break;
				case 5: CLR_BIT(GPIOE_ODR_REG,Local_U8_Pin); break;
				case 6: CLR_BIT(GPIOF_ODR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
			case GPIO_ENABLE:
				switch(Local_U8_Port)
				{
				case 1: SET_BIT(GPIOA_ODR_REG,Local_U8_Pin); break;
				case 2: SET_BIT(GPIOB_ODR_REG,Local_U8_Pin); break;
				case 3: SET_BIT(GPIOC_ODR_REG,Local_U8_Pin); break;
				case 4: SET_BIT(GPIOD_ODR_REG,Local_U8_Pin); break;
				case 5: SET_BIT(GPIOE_ODR_REG,Local_U8_Pin); break;
				case 6: SET_BIT(GPIOF_ODR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
				default:                                break;
			}
}
void M_GPIO_Void_EnablePUR(u8 Copy_U8_Num,u8 Copy_U8_State )
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
	switch(Copy_U8_State)
			{
			case GPIO_DISABLE :
				switch(Local_U8_Port)
				{
				case 1: CLR_BIT(GPIOA_PUR_REG,Local_U8_Pin); break;
				case 2: CLR_BIT(GPIOB_PUR_REG,Local_U8_Pin); break;
				case 3: CLR_BIT(GPIOC_PUR_REG,Local_U8_Pin); break;
				case 4: CLR_BIT(GPIOD_PUR_REG,Local_U8_Pin); break;
				case 5: CLR_BIT(GPIOE_PUR_REG,Local_U8_Pin); break;
				case 6: CLR_BIT(GPIOF_PUR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
			case GPIO_ENABLE:
				switch(Local_U8_Port)
				{
				case 1: SET_BIT(GPIOA_PUR_REG,Local_U8_Pin); break;
				case 2: SET_BIT(GPIOB_PUR_REG,Local_U8_Pin); break;
				case 3: SET_BIT(GPIOC_PUR_REG,Local_U8_Pin); break;
				case 4: SET_BIT(GPIOD_PUR_REG,Local_U8_Pin); break;
				case 5: SET_BIT(GPIOE_PUR_REG,Local_U8_Pin); break;
				case 6: SET_BIT(GPIOF_PUR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
				default:                                break;
			}
}
void M_GPIO_Void_EnablePDR(u8 Copy_U8_Num,u8 Copy_U8_State )
{
	u8 Local_U8_Pin  = Copy_U8_Num % 10;
	u8 Local_U8_Port = Copy_U8_Num / 10;
		switch(Copy_U8_State)
			{
			case GPIO_DISABLE :
				switch(Local_U8_Port)
				{
				case 1: CLR_BIT(GPIOA_PDR_REG,Local_U8_Pin); break;
				case 2: CLR_BIT(GPIOB_PDR_REG,Local_U8_Pin); break;
				case 3: CLR_BIT(GPIOC_PDR_REG,Local_U8_Pin); break;
				case 4: CLR_BIT(GPIOD_PDR_REG,Local_U8_Pin); break;
				case 5: CLR_BIT(GPIOE_PDR_REG,Local_U8_Pin); break;
				case 6: CLR_BIT(GPIOF_PDR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
			case GPIO_ENABLE:
				switch(Local_U8_Port)
				{
				case 1: SET_BIT(GPIOA_PDR_REG,Local_U8_Pin); break;
				case 2: SET_BIT(GPIOB_PDR_REG,Local_U8_Pin); break;
				case 3: SET_BIT(GPIOC_PDR_REG,Local_U8_Pin); break;
				case 4: SET_BIT(GPIOD_PDR_REG,Local_U8_Pin); break;
				case 5: SET_BIT(GPIOE_PDR_REG,Local_U8_Pin); break;
				case 6: SET_BIT(GPIOF_PDR_REG,Local_U8_Pin); break;
				default:                                break;
				}
				break;
				default:                                break;
			}
}
