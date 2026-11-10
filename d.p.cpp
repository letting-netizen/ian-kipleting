#include <stdio.h>
#include <stdlib.h>

void saveStudent();
void displayStudents();
void addStudent();

int main(){
	printf("---saving first student details---\n");
	saveStudent();
	
	printf("\n---displaying the saved records---\n");
	displayStudents();
	
	printf("\n---adding another student details---\n");
	addStudent();
	
	printf("\n---displaying all records again---\n");
	displayStudents();
	
	return 0;
	
}

void saveStudent(){
	FILE *file = fopen("students.txt","w");
	if (file == NULL){
		printf("error opening file for writing !\n");
		return;
		
	}
	
	char admNum[50];
	char fullName[100];
	char course[100];
	
	printf("Enter Admission Number: ");
	scanf(" %[^\n]",admNum);
	printf("Enter Full Name: ");
	scanf(" %[^\n]",fullName);
	printf("Enter course: ");
	scanf(" %[^\n]",course);
	
	fprintf(file,"Admission No: %s\nName: %s\nCourse: %s\n\n",admNum,fullName,course);
	
	fclose(file);
	printf("student record saved successfully.\n");
}

void displayStudents(){
	FILE *file = fopen("students.txt","r");
	if (file == NULL){
		printf("Error openig file or file does not exist!\n");
		return;
	}
	
	fclose(file);
	
	char ch;
	while ((ch = fgetc(file)) !=EOF) {
		putchar(ch);
	}
	
	void addStudent(){
		FILE *file = fopen("students.txt","a");
		if(file == NULL){
			printf("Error opening file for appending!\n");
			return;
		}
		
		char admNum[50];
		char fullName[100];
		char course[100];
		
		printf("Enter Admission Number: ");
		scanf(" %[^\n]",admNum);
		printf("Enter full Name: ");
		scanf(" %[^\n]", fullName);
		printf("Enter course: ");
		scanf(" %[^\n]",course);
		
		fprint(file, "Admission No: %s\nName: %s\nCourse: %s\n\n",admNum, fullName, course);
		
		fclose(file);
		printf("Student record added successfully.\n");
		
	}