//finding f from c(temp)

#include<stdio.h>
float celsiusToFarenheit(float celsius)
{
  return(celsius *9.0/5.0)+32;	
}
int main()
{
	float celsius,farenheit;
	printf("Enter temperature in celsius:");
	scanf("%f",&celsius);
	
	farenheit=celsiusToFahrenheit(celsius);
	printf("Temperature in Farenheit:%.2f\n",farenheit);
	return 0;
}







