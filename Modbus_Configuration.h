#ifndef MODBUS_CONFIGURATION_H
#define MODBUS_CONFIGURATION_H

#include "Arduino.h"
#include "Data.h"

typedef enum
{
  //NONE, //this macro has declared in "IO_Configuration.h"
  ODD = 1,
  EVEN = 2
}Parity;


//---------------------------------------------------
class Modbus_Setting
{
  public:
    bool enable;
    uint32_t baud_rate;
    Parity parity;
    uint8_t data_bits;
    uint8_t stop_bits;
};
//---------------------------------------------------


//-------------------------------------------------------------------
typedef enum
{
  RTU,
  TCP
}Modbus_Type;

typedef enum
{
  BIT,
  UNSIGNED_INT_16BIT
}Tag_Type;

class Tag_Element
{
  public:
    String ID;
    String name;
    uint32_t tag_address;
    Tag_Type tag_type;
    uint16_t raw_value;
    bool parameterize;
};

class Tag
{
  public:
    uint16_t num_of_tag_element;
    Tag_Element* tag_element;
};

class Modbus_Device_Element
{
  public:
    String device_name;
    uint8_t device_ID;
    Modbus_Type modbus_type;
    uint32_t baud_rate;
    Parity parity;
    uint8_t data;
    uint8_t stop;
    uint32_t timeput;
    bool polled;
    uint32_t interval;
    Tag tag;
};

class Modbus_Device
{
  public:
    uint16_t num_of_modbus_device;
    Modbus_Device_Element* element;
};
//-------------------------------------------------------------------

//--------------------------------------
class Modbus_Configuration
{
  public:
    Modbus_Setting modbus_setting;
    Modbus_Device modbus_device;
};
//--------------------------------------

#endif
