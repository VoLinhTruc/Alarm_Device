#ifndef PHONE_GROUP_H
#define PHONE_GROUP_H

#include "Arduino.h"
#include "Data.h"

//---------------------------------------------
class Operation_Number_Element
{
  String phone_number;
  String email;
  String name;
};

class Operation_Number
{
  Operation_Number_Element element[NUM_OF_PHONE_NUMBER];
};
//---------------------------------------------

//-------------------------------------------------------------------
class Escalation_Number_Element
{
  String phone_number;
  String name;
  uint32_t timer;
};

class Escalation_Number
{
  Escalation_Number_Element element[NUM_OF_ESCALATION_NUMBER];
};
//-------------------------------------------------------------------

//---------------------------------------
class Authorized_Number
{
  String phone_number;
  String name;
};
//---------------------------------------

//------------------------------
class Forwarding_Number
{
  String phone_number;
  String name;
};
//------------------------------



//--------------------------------------------------
class Phone_Group
{
  Operation_Number operation_number;
  Escalation_Number escalation_number;
  Authorized_Number authorized_number;
  Forwarding_Number forwarding_number;
};
//--------------------------------------------------

#endif
