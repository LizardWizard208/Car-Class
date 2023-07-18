/**********************************************************************
*  +-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+-+-+
*  |A|r|m|i|n|a|s| |G|r|i|n|c|e|v|i|c|i|u|s|
*  +-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+-+-+
* 
* CSC-240-001
* Date: 06/25/23
*
* Assignment: Car Class 
* 
* Description: To make a program where it calls upon class car to find the year and the model of the car. It then accelerates car 5 times and brakes car 5 times.
*
***********************************************************************/

#include <iostream>
#include <string>

using namespace std;
//class for Car 
class Car
{private:
 int year;
 string make;
 int speed;

 public:
// Constructior 
 Car(int y, string m)
 {
    year = y;
    make = m;
    speed = 0;
 }


 // Accessor
 int accessorYear()
 {
    return year;
 }

 string accessorMake()
 {
    return make;
 }

 int accessorSpeed()
 {
    return speed;
 }


 // accelerate
 void accelerate()
 {
 for (int i = 0; i < 5; ++i)
 { 
      speed += 5; 
   cout << "Current Speed of car: " << speed << endl; 
 }
 }


 //brake
 void brake()
 {
 for (int i = 0; i < 5; ++i)
 { 
   speed -= 5; 
   cout << "Current Speed of car: " << speed << endl; 
 }
 }
};


int main()
{
 
 int year;
 string make;
 Car car1(year, make);

 // asks the year of car
 cout << " Type in year of the car"<< endl; 
 cin >> year;
 // asks the make of car
 cout << " Type in make of the car"<< endl;
 cin >> make;

 //car accelrates 5 times and brakes 5 times
 car1.accelerate();
 cout << endl; 
 car1.brake();

    return 0;
}