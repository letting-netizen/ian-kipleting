#include <stdio.h>

int main(){
	int units;
	float total_bill;
	
	//1. prompt the user for input
	printf("enter water units consumed: ");
    if (scanf("%d", &units) !=1) {
		printf("invalid input.\n");
		return 1;
	}
	
	//2.use if-else statements to calculate the tiered bill
	if (units <= 30) {
		total_bill = units * 20.0;
	}
	else if (units <= 60){
		//first 30 units at 20 KES,remaining units at 25 KES
		total_bill = (30 * 20.0) + ((units - 30) * 25.0);
	}
	else {
		//first 30 units at 20 KES ,next 30 units at 25 KES,remaining at 30 KES
		total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) *30.0);
	}
	
	//3. display the total bill formatted to two decimal places
	printf("total water bill:%.2f KES\n",total_bill);
	
	return 0;
}
		