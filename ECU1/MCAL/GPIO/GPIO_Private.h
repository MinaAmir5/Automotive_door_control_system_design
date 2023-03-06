#ifndef MCAL_GPIO_PRIVATE_H_
#define MCAL_GPIO_PRIVATE_H_

#define GPIOA_DATA_REG 	   *(volatile u32 *) 0x400043FC
#define GPIOA_DIR_REG 		 *(volatile u32 *) 0x40004400
#define GPIOA_AFSEL_REG 	 *(volatile u32 *) 0x40004420
#define GPIOA_ODR_REG 		 *(volatile u32 *) 0x4000450C
#define GPIOA_PUR_REG 		 *(volatile u32 *) 0x40004510
#define GPIOA_PDR_REG 		 *(volatile u32 *) 0x40004514
#define GPIOA_DEN_REG 		 *(volatile u32 *) 0x4000451C

#define GPIOB_DATA_REG     *(volatile u32 *) 0x400053FC
#define GPIOB_DIR_REG      *(volatile u32 *) 0x40005400
#define GPIOB_AFSEL_REG    *(volatile u32 *) 0x40005420
#define GPIOB_ODR_REG      *(volatile u32 *) 0x4000550C
#define GPIOB_PUR_REG      *(volatile u32 *) 0x40005510
#define GPIOB_PDR_REG      *(volatile u32 *) 0x40005514
#define GPIOB_DEN_REG      *(volatile u32 *) 0x4000551C

#define GPIOC_DATA_REG     *(volatile u32 *) 0x400063FC
#define GPIOC_DIR_REG      *(volatile u32 *) 0x40006400
#define GPIOC_AFSEL_REG    *(volatile u32 *) 0x40006420
#define GPIOC_ODR_REG      *(volatile u32 *) 0x4000650C
#define GPIOC_PUR_REG      *(volatile u32 *) 0x40006510
#define GPIOC_PDR_REG      *(volatile u32 *) 0x40006514
#define GPIOC_DEN_REG      *(volatile u32 *) 0x4000651C

#define GPIOD_DATA_REG     *(volatile u32 *) 0x400073FC
#define GPIOD_DIR_REG      *(volatile u32 *) 0x40007400
#define GPIOD_AFSEL_REG    *(volatile u32 *) 0x40007420
#define GPIOD_ODR_REG      *(volatile u32 *) 0x4000750C
#define GPIOD_PUR_REG      *(volatile u32 *) 0x40007510
#define GPIOD_PDR_REG      *(volatile u32 *) 0x40007514
#define GPIOD_DEN_REG      *(volatile u32 *) 0x4000751C

#define GPIOE_DATA_REG     *(volatile u32 *) 0x400243FC
#define GPIOE_DIR_REG      *(volatile u32 *) 0x40024400
#define GPIOE_AFSEL_REG    *(volatile u32 *) 0x40024420
#define GPIOE_ODR_REG      *(volatile u32 *) 0x4002450C
#define GPIOE_PUR_REG      *(volatile u32 *) 0x40024510
#define GPIOE_PDR_REG      *(volatile u32 *) 0x40024514
#define GPIOE_DEN_REG      *(volatile u32 *) 0x4002451C

#define GPIOF_DATA_REG     *(volatile u32 *) 0x400253FC
#define GPIOF_DIR_REG      *(volatile u32 *) 0x40025400
#define GPIOF_AFSEL_REG    *(volatile u32 *) 0x40025420
#define GPIOF_ODR_REG      *(volatile u32 *) 0x4002550C
#define GPIOF_PUR_REG      *(volatile u32 *) 0x40025510
#define GPIOF_PDR_REG      *(volatile u32 *) 0x40025514
#define GPIOF_DEN_REG      *(volatile u32 *) 0x4002551C

#endif