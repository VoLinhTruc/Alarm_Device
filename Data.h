#ifndef DATA_H
#define DATA_H

#define NUM_OF_CONTACTS 10
#define NUM_OF_IO 10
#define NUM_OF_DIGITAL_INPUT 10
#define NUM_OF_ANALOG_INPUT 5
#define NUM_OF_DIGITAL_OUTPUT 5
#define NUM_OF_PHONE_NUMBER 10
#define NUM_OF_ESCALATION_NUMBER 5

// thu tu include nay phai dung, neu sai thi chuong rinh se sai
#include "Arduino.h"
#include "ArduinoJson.h"

#include "Login_Page.h"
#include "Dashboard.h"
#include "IO_Configuration.h"
#include "Phone_Group.h"
#include "Modbus_Configuration.h"
#include "Modbus_IO_Configuration.h"
#include "System_Configuration.h"



Login_Page login_page;
Dashboard dashboard;
IO_Configuration IO_configuration;
Phone_Group phone_group;
Modbus_Configuration modbus_configuration;
Modbus_IO_Configuration modbus_IO_configuration;
System_Configuration system_configuration;


void loadLoginPage();
void loadDashboard();
void loadIOConfiguration();
void loadPhoneGroup();
void loadModbusConfiguration();
void loadModbusIOConfiguration();
void loadSystemConfiguration();



void loadLoginPage()
{
  String login_gape_json = \
  "\
    {\
      \"login_form\":\
      \"\
      {\
        \"device_series_number\":\"PB01050944\",\
        \"device_ID\":\"RexC v2.2 [C405.49288E30]\",\
        \"username\":\"BICO\",\
        \"password\":\"12345678\"\
      }\
      \"\
    }\
  ";

  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& root = jsonBuffer.parseObject(login_gape_json);

  String login_form = root[login_form];

  StaticJsonBuffer<200> jsonBuffer1;
  JsonObject& root1 = jsonBuffer1.parseObject(login_form);
  
//  login_page.login_form.device_series_number = root1["device_series_number"];
//  login_page.login_form.device_ID = root1["device_ID"];
//  login_page.login_form.username = root1["username"];
//  login_page.login_form.password = root1["password"];

  String a = root1["device_series_number"];
  String b = root1["device_ID"];
  String c = root1["username"];
  String d = root1["password"];

  login_page.login_form.device_series_number = a;
  login_page.login_form.device_ID = b;
  login_page.login_form.username = c;
  login_page.login_form.password = d;

  Serial.println(login_page.login_form.device_series_number);
  Serial.println(login_page.login_form.device_ID);
  Serial.println(login_page.login_form.username);
  Serial.println(login_page.login_form.password);
}

#endif
