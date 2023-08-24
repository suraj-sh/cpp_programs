/* 2. Fahrenheit to Celsius Converter:
   Write a program that converts temperatures from Fahrenheit to Celsius. 
   The program should take the temperature in Fahrenheit as input and output the temperature in Celsius. */

#include<iostream>
using namespace std;

int main(){

   float fahrenheit, celsius;
    
   cout << "Enter temperature in Fahrenheit: ";
   cin >> fahrenheit;

   // farenheit to celsius formula    
   celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    
   cout << "Temperature in Celsius: " << celsius;
    
   return 0;
}
