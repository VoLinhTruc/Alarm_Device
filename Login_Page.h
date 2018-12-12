#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include "Arduino.h"
#include "Data.h"

//----------------------------------------
class Login_Form
{

  public:
    String device_series_number;
    String device_ID;
    String username;
    String password;
};
//----------------------------------------


//-----------------------------
class Login_Page
{
  public:
    Login_Form login_form;
};
//-----------------------------


#endif
