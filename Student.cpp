#include "Student.h"
#include <iostream>
#include <csrting>
using namespace std;


void student::assignDetails(int stuId,char Sname[])
{
  studentId = stuId;
  strcpy(name,Sname);
  
}
int student::display()
{
  cout<<"student ID : "<<studentId<<endl;
  cout<<"Student Name : "<<name<<endl;
}
