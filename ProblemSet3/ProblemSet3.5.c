#include<stdio.h> 
int main() { 
   int year = 2020; 
   int month = 2; 
   int day = 6; 
   int precipitation = 50; 
   float hiTemp = 44.1;
   float loTemp = 32.1;
   printf("\tWeather on %i/%i/%i:\n \tHigh: %0.1f˚F, Low: %0.1f˚F\n \tChances of rain: %i%%\n", month, day, year, hiTemp, loTemp, precipitation); 
   return 0; }