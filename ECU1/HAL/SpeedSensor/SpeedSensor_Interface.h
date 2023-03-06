#ifndef SPEED_SENSOR_INTERFACE_H_
#define SPEED_SENSOR_INTERFACE_H_

/*----------------------------Includes-----------------------------------*/
#include <STD.h>

/*----------------------------Typesdefs-----------------------------------*/
typedef enum
{
    Car_Moving = 1,
    Car_Stopped = 0

} Car_Status;


/*----------------------------Functions_Prototypes-----------------------------------*/


void H_SpeedSensor_Void_SpeedSensorInit(void);
Car_Status H_SpeedSensor_Void_GetCarStatus(void);


#endif