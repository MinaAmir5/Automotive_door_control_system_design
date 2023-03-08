#ifndef HAL_LIGHTS_CONTROL_INTERFACE_H_
#define HAL_LIGHTS_CONTROL_INTERFACE_H_

/*----------------------------Includes-----------------------------------*/
#include <STD.h>

/*----------------------------Typesdefs-----------------------------------*/
typedef enum
{
    Right_Light_On = 0,  
    Left_Light_On = 1, 
    Both_Light_On = 2   

} Light_Switch;

typedef enum
{
    Switch_Success = 1,    
    Switch_Fail = 0 

} Switch_Status;

/*----------------------------Functions_Prototypes-----------------------------------*/


void H_LightsControl_Void_LightsControlInit(void);
Switch_Status H_LightsControl_SwitchStatus_LightOn(Light_Switch);
Switch_Status H_LightsControl_SwitchStatus_LightOff(Light_Switch);


#endif