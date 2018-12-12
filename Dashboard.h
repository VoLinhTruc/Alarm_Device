#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "Arduino.h"
#include "DateTime.h"
#include "Data.h"



//---------------------------------------------------
class Onboard_IO_Element
{
  public:
    String ID;
    String description;
    int32_t value_state;
    String alarm_control;
};

class Onboard_IO
{
  public:
    Onboard_IO_Element element[NUM_OF_IO];
};

//---------------------------------------------------


//---------------------------------------------
typedef enum
{
  QUESTION_MARK, 
  PAUSE, 
  PLAY
}Device_State;
class External_Device_Element
{
  public:
    String ID;
    Device_State device_state;
    String device;
    String tag_name;
    int32_t value_state;
    String alarm_cotrol;
};

class External_Device
{
  public:
    uint16_t num_of_external_device;
    External_Device_Element* element;
};
//----------------------------------------------


//---------------------------------------------------
typedef enum
{
  
}Event_Log_Type;
class Event_Log_Element
{
  DateTime date_time;
  Event_Log_Type type;
  String message;
};

class Event_Log
{
  public:
    uint16_t num_of_event_log;
    Event_Log_Element* element;
};
//---------------------------------------------------



//-----------------------------------
typedef enum
{
  
}Sms_Log_Type;
class Sms_Log_Element
{
  DateTime date_time;
  Sms_Log_Type type;
  String message;
};

class Sms_Log
{
  public:
    uint16_t num_of_sms_log;
    Sms_Log_Element* element;
};
//-----------------------------------




//-------------------------------------------
class Dashboard
{
  Onboard_IO onboard_IO;
  External_Device external_device;
  Event_Log event_log;
  Sms_Log sms_log;
};
//-------------------------------------------

#endif
