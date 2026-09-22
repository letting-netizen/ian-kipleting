#include<stdio.h>

int main(){
	float height;
	double balance;
	long phone;
	
	//get user inputs
	printf("enter height: ");
	scanf("%f",&height);
	
	printf("enter bank balance: ");
	scanf("%1f", &balance);
	
	printf("enter phone number: ");
	scanf("%1d", &phone);
	
	//display results
	printf("\nheight: %f\n", height);
	printf("bank balance: %1f\n", balance);
	printf("phone number: %1d\n", phone);
	
	return 0;
}