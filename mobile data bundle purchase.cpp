#include <stdio.h>

int main(){
	int choice;
	
	//11. Display the menu options
	printf("select data bundle:\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 500 KES\n");
	
	//2. Ask the user to enter thier choice
	printf("Enter your choice (1-4): ");
	scanf("%d",&choice);
	
	// 3&4. Use a switch statement to display selection or error handling
	switch (choice){
		case 1:
			printf("You selected 100MB - cost = 50 KES\n");
			break;
		case 2:
			printf("You selected 500MB - cost = 200LES\n");
			break;
		case 3:
			printf("You selected 1GB - cost = 350KES\n");
			break;
		case 4:
			printf("You selected 2GB - cost = 500KES\n");
			break;
		default:
			printf("Invalid choice\n");
			break;
	}
	
	return 0;
}