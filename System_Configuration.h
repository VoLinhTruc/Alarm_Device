#ifndef SYSTEM_CONFIGURATION_H
#define SYSTEM_CONFIGURATION_H

//-----------------------------------
class Change_Password
{
  public:
    String current_password;
    String new_password;
    String verified_password;
};
//-----------------------------------

//-----------------------------------------------------
class Change_Device_ID
{
  public:
    String device_ID;
};
//-----------------------------------------------------

//---------------------------------------
class Change_Date_And_Time
{
  public:
    uint16_t yyyy;
    uint16_t mm;
    uint16_t dd;
    uint16_t hh;
    uint16_t mimi;
    uint16_t ss;
};
//---------------------------------------

//-----------------------------------------------------------
class Change_NTP_Server_Setting
{
  public:
    bool enable;
    String server;
    uint16_t time_zone;
};
//-----------------------------------------------------------

//---------------------------------------------------------------------------------
class LAN_Configuration
{
  public:
    bool dynamic_IP_check;
    String IP_address;
    String gateway;
    String subnet_mask;
    String DNS;
};
//---------------------------------------------------------------------------------

//---------------------------------------------------------
typedef enum
{
  
}Auto_Health_Check_Day;

class Auto_Health_Check
{
  public:
    bool enable;
    Auto_Health_Check_Day auto_health_check_day;
    uint16_t hh;
    uint16_t mm;
};
//---------------------------------------------------------

//-------------------------------------------------------------------------------
class Cellular_Network_Connection
{
  public:
    String sim_card_pin; //sim's password
};
//-------------------------------------------------------------------------------


//----------------------------------
typedef enum
{
  
}Report_Format;

class Data_Access
{
  public:
    String APN;
    String username;
    String password;
    bool HTTP_publishing;
    String server;
    uint16_t port;
    String req_uri;
    uint16_t interval;
    Report_Format report_format;
};
//----------------------------------

//-------------------------------------------------------------
class Reporting
{
  public:
    bool enable;
    bool TLS;
    String server;
    uint16_t port;
    String from_addr;
    String username;
    String password;
};
//-------------------------------------------------------------

//----------------------------------------------------------------------------------
class Send_SMS_To_Mobie_Phone
{
  public:
    String destination;
    String message;
};

typedef enum
{
  //NONE, // this macro has define in IO_Configuration.h
  UNLIMITED,
  ONE_TIME,
  TWO_TIME,
  THREE_TIME,
  FOUR_TIME
}Repeat_SMS_On_Alarm_State;

class SMS_Setting
{
  public:
    Send_SMS_To_Mobie_Phone send_sms_to_mobie_phone;
    Repeat_SMS_On_Alarm_State repeat_sms_on_alarm_state;
    uint16_t sms_repeat_interval;
    bool send_sms_when_status_returns_to_normal;
};
//----------------------------------------------------------------------------------


//------------------------------------------
class System_Configuration
{
  public:
    Change_Password change_password;
    Change_Device_ID change_device_ID;
    Change_Date_And_Time change_date_and_time;
    Change_NTP_Server_Setting change_NTP_server_setting;
    LAN_Configuration LAN_configuration;
    Auto_Health_Check auto_health_check;
    Cellular_Network_Connection cellular_network_connection;
    Data_Access data_access;
    Reporting reporting;
    SMS_Setting SMS_setting;
};
//------------------------------------------
#endif
