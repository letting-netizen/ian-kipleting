#include<stdio.h>

int main(){
	float radius,height,volume,surface_area;
	float pi = 3.14159;
	
	//get user inputs
	printf("enter radius: ");
	scanf("%f", &radius);
	
	printf("enter height: ");
	scanf("%f", &height);
	
	//calculate volume and surface area
	volume = pi * radius * radius * height;
	surface_area = (2 * pi * radius * radius) + (2 * pi * radius * height);
	
    //display results
    printf("\nvolume: %f\n", volume);
    printf("surface area: %f\n", surface_area);
    
    return 0;
}