#include <stdio.h>
#include <stdlib.h>

 //function to write the first employees details
 void writeEmployee()
 {
 	FILE *fp;
 	int id;
 	char name[100], department[50];
 	
 	fp = fopen("employee.txt","w");
 	
 	if (fp == NULL)
	 {
	 
        printf("Error opening file!\n");
        return;
	 }
	 
	 printf("Enter employee ID: ");
	 scanf("%d",&id);
	 
	 printf("Enter employee full name: ");
	 scanf(" %[^\n]",name);
	 
	 printf("Enter department: ");
	 scanf(" %[^\n]",department);
	 
	 fprintf(fp,"Employee ID: %d\n",id);
	 fprintf(fp,"Full name: %s\n",name);
	 fprintf(fp,"Department: %s\n\n",department);
	 
	 fclose(fp);
	 
	 printf("\nEmployee record saved successfully!\n");
 }
 
 //function to read and display employee records
 void readEmployee()
 {
     FILE *fp;
	 int ch;
	 
	 fp = fopen("employee.txt","r");
	 
	 if (fp == NULL)  
	 {
	 	printf("Error opening file!\n");
	 	return;
	 }
	 
	 printf("\n---EMPLOYEE RECORDS ---\n");
	 
	 // Read and display one character at time
	 while ((ch = fgetc(fp)) !=EOF)
     {
	    putchar(ch);
	 }
	 
	 fclose(fp);
 }
 
  //function to append another employees details
  void appendingEmployee()
  {
  	FILE *fp;
  	int id;
  	char name[100],department[50];
  	
  	fp = fopen("employees.txt","a");
  	
  	if (fp == NULL)
	  {
	    printf("Error opening file!\n");
	    return;
	    
	  }
	  
	  printf("\nEnter new employee ID: ");
	  scanf("%d",&id);
	  
	  printf("Enter new employee full name: ");
	  scanf(" %[^\n]",name);
	  
	  printf("Enter new employee department: ");
	  scanf(" %[^\n]",department);
	  
	  fprintf(fp,"employee ID: %d\n",id);
	  fprintf(fp,"full name: %s\n",name);
	  fprintf(fp,"Department: %s\n\n",department);
	  
	  fclose(fp);
	  
	  printf("\nNew employee record added successfully!\n");
  }
  
  //main function
  int main()
  {
	  //save the first employee
	  writeEmployee();
	  
	  //Display the first employee
	  readEmployee();
	  
	  //Add another employee records
	  readEmployee();
	  
	  return 0;
  }
  