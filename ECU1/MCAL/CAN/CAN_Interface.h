#ifndef HAL_SPEED_SENSOR_INTERFACE_H_
#define HAL_SPEED_SENSOR_INTERFACE_H_

/*----------------------------Includes-----------------------------------*/
#include <STD.h>

/*----------------------------Typesdefs-----------------------------------*/
typedef enum
{
    CAN_Disabled = 0,         
    CAN_READY = 1,         
    CAN_SENDING = 2,     
    CAN_PENDING = 3, 
    CAN_RECIEVING = 4 

} CAN_Status;

typedef struct
{
    u32 Prescaler; 
    u32 Mode; 
    u32 TimeSegment; 

} CAN_Init;


/*----------------------------Functions_Prototypes-----------------------------------*/
CAN_Status M_CAN_CAN_Status_CANInit(CAN_Init*);
CAN_Status M_CAN_CAN_Status_CANDeInit(CAN_Init*);

u32 CANBitRateSet (u32 ui32Base, u32 ui32SourceClock, u32 ui32BitRate)
void CANBitTimingGet (u32 ui32Base, tCANBitClkParms *psClkParms)
void CANBitTimingSet (u32 ui32Base, tCANBitClkParms *psClkParms)
void CANDisable (u32 ui32Base)
void CANEnable (u32 ui32Base)
void CANInit (u32 ui32Base)
void CANIntClear (u32 ui32Base, u32 ui32IntClr)
void CANIntDisable (u32 ui32Base, u32 ui32IntFlags)
void CANIntEnable (u32 ui32Base, u32 ui32IntFlags)
void CANIntRegister (u32 ui32Base, void (*pfnHandler)(void))
u32 CANIntStatus (u32 ui32Base, tCANIntStsReg eIntStsReg)
void CANIntUnregister (u32 ui32Base)
void CANMessageClear (u32 ui32Base, u32 ui32ObjID)
void CANMessageSet (u32 ui32Base, u32 ui32ObjID, tCANMsgObject*psMsgObject, tMsgObjType eMsgType)
u32 CANStatusGet (u32 ui32Base, tCANStsReg eStatusReg)


#endif