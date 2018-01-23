/*
Author: Bryce May
Date: January 22, 2018

Determines refraction angle given an angle of incidence and refraction index, assuming initial refraction index is 1
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
	//set variables b for loop check, angle1 for angle of incidence, n2 for refractive index, and angle2 for angle of refraction
	double b, angle1, n2, angle2;
	b = 0;
	//loops input response until valid angle of incidence is given
	//valid angles are between -90 and 90 degrees
	while(b = 0){
		//prompt for angle of incidence
		printf("Angle of Incidence (in degrees between -90 and 90 degrees): ");
		//scan for a value for angle1
		scanf("&lf", &angle1);
		//if invalid input, displays error message
		if(angle1 >= 90 || angle1 <= -90){
			printf("Invalid Angle of Incidence");
		} else{
			//input valid, change b's value to exit loop
			b = 1;
		}
	}
	b = 0;
	while(b == 0){
		//prompt refractive index
		printf("Refractive Index (greater than zero): ");
		//scan for a value for n2
		scanf("%lf", &n2);
		//if invalid input, displays error message
		if(n2 == 0){
			printf("Invalid Refractive Index");
		} else{
			//input valid, change b's value to exit loop
			b = 1;
		}
	}
	//converts angle1 from degrees into radians
	angle1 = (angle1 * M_PI) / 180;
	//computes angle of refraction
	angle2 = asin(sin(angle1) / n2);
	//displays result
	printf("Angle of Refraction is %f", angle2);
	return 0;
}