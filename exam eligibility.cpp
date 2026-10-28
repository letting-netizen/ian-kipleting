#include <stdio.h>

int main(){
	float attendance;
	float average_marks;
	
	//prompt the user for input
	printf("enter attendance percentage: ");
	scanf("%f",&attendance);
	
	printf("enter average marks: ");
	scanf("%f",&average_marks);
	
	//check eligibility using the logical AND (&&) operator
	if (attendance >= 75.0 && average_marks >= 40.0){
		printf("eligible for final exams.\n");
	}else{
		printf("not eligible.\n");
	}
	
	return 0;
}