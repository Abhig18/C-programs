#include <stdio.h> //including standard I/O header file
void main() //the main() function
{
	float c,f; //c for celcius,f for fahrenheit
	printf("Enter temperature in celcius : ");
	scanf("%f",&c); //taking temperature in celcius from the user
	f=(9*c/5)+32; //converting from celcius to fahrenheit
	printf("Temperature in fahrenheit : %.2f",f); //displaying temperature in fahrenheit
}
