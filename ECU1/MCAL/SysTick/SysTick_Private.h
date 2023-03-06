#ifndef MCAL_SYSTICK_PRIVATE_H_
#define MCAL_SYSTICK_PRIVATE_H_

#define STCTRL_REG               *(volatile u32*)0xE000E010
#define STRELOAD_REG             *(volatile u32*)0xE000E014
#define STCURRENT_REG            *(volatile u32*)0xE000E018

#define COUNT_BIT                16
#define CLK_SRC_BIT              2
#define INTEN_BIT                1
#define ENABLE_BIT               0


















#endif