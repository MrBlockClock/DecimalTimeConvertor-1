// Decimal Clock Convertor
// Created 11/7/2020

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
  string timeValues;
  double decimal_Minutes=0;

  //VERIFIED CORRECT!
  cout << "\nDecimal Minutes: ";
  getline (cin,timeValues);
  stringstream(timeValues)>> decimal_Minutes ;
    double decimal_hour = decimal_Minutes / 60;
    int hours = (floor (decimal_Minutes)) / 60 ;
    double minutesRemaining = decimal_hour - hours;
    int minutes = (minutesRemaining * 100) *.60;
    double secondsRemaining = minutes - minutesRemaining ;

 // stringstream(timeValues)>> decimal_minutes;

    cout << "\nTime in Hours : " << hours << " Hours " << minutes << " Minutes " << secondsRemaining << " Seconds " ;

  return 0;
}