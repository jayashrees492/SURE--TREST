#include <stdio.h>

int main()
 {
    int temperature;
    int threshold = 30.0;

    printf("Enter the current temperature in degrees Celsius: ");
    scanf("%d", &temperature);

    if (temperature > threshold) 
	{
        printf("Temperature exceeds safe limits.\n");
    } else
	 {
        printf("Temperature is within safe limits.\n");
    }

    return 0;
}

