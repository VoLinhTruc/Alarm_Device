#ifndef IO_CONFIGURATION_H
#define IO_CONFIGURATION_H

#include "Arduino.h"
#include "Data.h"

//-----------------------------------------
class Operation_Contacts
{
  public:
    bool contact_select[NUM_OF_CONTACTS];
    bool select_all_contact;
    bool disable_sms_email;
};
//-----------------------------------------


//-------------------------------------------------------------------
typedef enum
{
  NONE,
  OPEN,
  CLOSE
}Alarm_State;

class Operation_Contacts;

class Digital_Input_Element
{
  public:
    String input_description;
    String open_status;
    uint32_t delay_close_to_open;
    String close_status;
    uint32_t delay_open_to_close;
    Alarm_State alarm_state;
    Operation_Contacts operation_contacts;
};

class Digital_Input
{
  public:
    Digital_Input_Element element[NUM_OF_DIGITAL_INPUT];
};
//-------------------------------------------------------------------


//------------------------------------------------------
class Low_Alarm
{
  public:
    bool alarm_enable;
    int32_t alarm_value;
};

class High_Alarm
{
  public:
    bool alarm_enable;
    int32_t alarm_value;
};

class Operation_Contacts;

class Analog_Input_Element
{
  public:
    String description;
    String unit;
    int32_t engineering_value_at_4mA;
    int32_t engineering_value_at_20mA;
    int32_t hysteresis_in_engineering_unit;
    int32_t offset_value;
    Low_Alarm low_alarm;
    High_Alarm high_alarm;
    Operation_Contacts operation_contacts;
};

class Analog_Input
{
  public:
    Analog_Input_Element element[NUM_OF_ANALOG_INPUT];
};
//------------------------------------------------------


//------------------------------------------------------------------
typedef enum
{
  ON,
  PULSATING,
  DELAY_ON,
  ONE_SHOT
}Output_Type;

class Pulsating
{
  public:
    uint32_t on_period;
    uint32_t off_period;
};

class Digital_Output_Element
{
  public:
    String description;
    bool enable_logic;
    bool remote_override;
    String logic_expession;
    Output_Type output_type;
    Pulsating pulsating;
    uint32_t delay_on;
    uint32_t one_shot_on;
};

class Digital_Output
{
  public:
    Digital_Output_Element element[NUM_OF_DIGITAL_OUTPUT];
};
//------------------------------------------------------------------


//------------------------------------
class IO_Configuration
{
  public:
    Digital_Input digital_input;
    Analog_Input analog_input;
    Digital_Output digital_output;
};
//------------------------------------

#endif
