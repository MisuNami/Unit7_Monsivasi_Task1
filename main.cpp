//Unit7_Monsivais_Task1 Dr T STRUCTS 
// 2-24-20 repl.it c++ 11
#include <iostream>
using namespace std;
//declare STRUCTS above int main

struct timeOfDay
{
short Hour;
short Minute;
short Second;
};

struct appDate
{
short dayOfMonth;
short month;
int year;
};

struct Event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //save space here for our toString() override
};

int main() 

{
 timeOfDay t;// declare instance of the struct
 t.Hour = 7; // put data in the strict
 t.Minute = 11;
 t.Second = 17;
cout << "\nCurrent time: " << endl;//print data in the struct
cout << t.Hour << ":" <<t.Minute <<":" << t.Second << endl;
 
 appDate d;
 d.dayOfMonth = 14;
 d.month = 1;
 d.year = 1991;
 cout << "Current year: " << endl;
 cout <<d.dayOfMonth <<"/" << d.month << "/" << d.year << endl;

 Event eOne;
 eOne.eventName = "Chris's Birthday Party!!";
 eOne.isUrgent = true;
 //set the event date
 eOne.eventDate.dayOfMonth = 24; // instance.memberStruct.memberVariable
 eOne.eventDate.month =2 ;
 eOne.eventDate.year = 2020;
 eOne.eventTime = t; //use that form "t" to populate eOne.eventTime
 cout << "\nElements in the event eOne: " << endl;

 cout<<"Event Name: " << eOne.eventName << endl;

string status = "";
eOne.isUrgent= true;
status = (eOne.isUrgent) ? "yes" : "no";
cout << "Is the event urgent: " << status << endl;

cout << "\nDay: " << eOne.eventDate.month << "/" << eOne.eventDate.dayOfMonth << "/" <<eOne.eventDate.year;

cout <<"\nTime: "<< eOne.eventTime.Hour << ":" <<eOne.eventTime.Minute << ":" << eOne.eventTime.Second;

 
 
 
 
 
 
 
 return 0;
}

