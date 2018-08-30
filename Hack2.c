/**
* Author: Ujwal Ghatamaneni
* Date: August 29, 2018
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define Earth = 6371
#define pi = 3.1415

int main(int argc, char const *argv[]) {
  //Initalize variables
  float longitudeA, latitudeA, longitudeB, latitudeB, rad, deg, distance, delta;

  //Prompt and collect information from user
  printf("Please enter the Longitude of location A:\n");
  scanf("%f\n", &LongitudeA);
  LongitudeA = rad(LongitudeA);
  printf("Please enter the Latitude of location A:\n");
  scanf("%f\n", &LatitudeA);
  LatitudeB = rad(LatitudeA);
  printf("Please enter the Longitude of location B:\n");
  scanf("%f\n", &LongitudeB);
  LongitudeB = rad(LongitudeB)
  printf("Please enter the Latitude of location B:\n");
  scanf("%f\n", &LatitudeB);
  LatitudeB = rad(LatitudeB);

  //Process collected data
  delta = LongitudeB-LongitudeA;

  distance = arccos(sin(LatitudeA) sin(LatitudeB) + cos(LatitudeA) cos(LatitudeB) cos(delta)) · Earth

  //RESULT DISPLAY
  printf("Location Distance\n", );
  printf("================================\n", );
  printf("Origin:      (%f, %f)\n", LongitudeA, LatitudeA);
  printf("Destination: (%f, %f)\n", LongitudeB, LatitudeB);
  printf("Air distance is %f kms\n", distance);

  return 0;
}

float rad(float deg){
  float rad;

  radians = (deg/180)*pi;

  return(rad);
}
