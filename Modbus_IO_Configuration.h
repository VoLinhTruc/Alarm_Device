#ifndef MODBUS_IO_CONFIGURATION_H
#define MODBUS_IO_CONFIGURATION_H

#include "Arduino.h"
#include "Data.h"

//---------------------------------------------------------------------------
//typedef enum
//{
//  NONE, //this macro has declared in "IO_Configuration.h"
//  OPEN, //this macro has declared in "IO_Configuration.h"
//  CLOSE //this macro has declared in "IO_Configuration.h"
//}Alarm_State; //this type has declared in "IO_Configuration.h"

class Operation_Contacts;

class Modbus_Digital_Input_Channel
{
  public:
    String ID;
    String device;
    String tag;
    String open_status;
    String close_status;
    Alarm_State alarm_state;
    Operation_Contacts operation_contacts;
};
//---------------------------------------------------------------------------


//---------------------------------------------------
class Scale_Offset
{
  public:
    bool enable;
    uint32_t scale;
    int32_t offset;
};

class Low_Alarm; //this class has declared in "IO_Configuration.h"

class High_Alarm; //this class has declared in "IO_Configuration.h"

class Operation_Contacts; //this class has declared in "IO_Configuration.h"

class Modbus_Register
{
  public:
    String ID;
    String device;
    String tag_name;
    String unit_mask;
    Scale_Offset scale_offset;
    int32_t hysteresis;
    Low_Alarm low_alarm;
    High_Alarm high_alarm;
    Operation_Contacts operation_contacts;
};
//---------------------------------------------------

//--------------------------------------
//typedef enum
//{
//  ON,
//  PULSATING,
//  DELAY_ON,
//  ONE_SHOT
//}Output_Type; //this type has declared in "IO_Configuration.h"

class Pulsating; //this class has declared in "IO_Configuration.h"

class Modbus_Digital_Output_Channel
{
  public:
    String ID;
    String device;
    String tag;
    bool enable_logic;
    bool remote_override;
    String logic_expression;
    Output_Type output_type;
    Pulsating pulsating;
    uint32_t delay_on;
    uint32_t one_shot_one;
};
//--------------------------------------

//-----------------------------------------------------------------------
class Modbus_IO_Configuration
{
  public:
    Modbus_Digital_Input_Channel modbus_digital_input_channel;
    Modbus_Register modbus_register;
    Modbus_Digital_Output_Channel modbus_digital_output_channel;
};
//-----------------------------------------------------------------------

#endif
