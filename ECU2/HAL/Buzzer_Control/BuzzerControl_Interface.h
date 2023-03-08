#ifndef HAL_Buzzer_CONTROL_INTERFACE_H_
#define HAL_Buzzer_CONTROL_INTERFACE_H_

/*----------------------------Includes-----------------------------------*/
#include <STD.h>

/*----------------------------Typesdefs-----------------------------------*/
typedef enum
{
    Enabled = 1,   
    Disabled = 0 

} Buzzer_Status;



/*----------------------------Functions_Prototypes-----------------------------------*/


void H_BuzzerControl_Void_BuzzerControlInit(void);
Buzzer_Status H_BuzzerControl_BuzzerStatus_BuzzerOn(Light_Switch);
Buzzer_Status H_BuzzerControl_BuzzerStatus_BuzzerOff(Light_Switch);


#endif