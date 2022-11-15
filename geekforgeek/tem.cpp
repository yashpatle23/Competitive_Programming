#include <iostream>
#include <string>
#include<string.h>
using namespace std;

int main() {
   // a string variable named str
   string str = "sdfa";
   //print to the console
   char tem=str[0];
   cout << "I am a string " << str << endl;

   //convert the string str variable to have an int value
   //place the new value in a new variable that holds int values, named num
   if(isdigit(tem)==0) cout<<"true ";
   string s="0";
   int x=stoi(s.c_str());
   x=str.compare("sdfa");
   
   cout<<x;

  
}