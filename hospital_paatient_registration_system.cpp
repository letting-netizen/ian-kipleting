#include <stdio.h>

int main()
{
    // 1. Define the Patient structure
    struct Patient
    {
        int patientID;
        char name[50];
        int age;
        float temperature;
        int daysAdmitted;
    };

    // 2. Declare a structure variable
    struct Patient p;

    float totalCost;

    // Input patient details
    printf("Enter Patient ID: ");
    scanf("%d", &p.patientID);

    printf("Enter Patient Name: ");
    scanf(" %49[^\n]", p.name);

    printf("Enter Patient Age: ");
    scanf("%d", &p.age);

    printf("Enter Patient Temperature: ");
    scanf("%f", &p.temperature);

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &p.daysAdmitted);

    // 3. Calculate accommodation cost
    totalCost = p.daysAdmitted * 2500;

    // 4. Display patient details and calculated cost
    printf("\n===== PATIENT DETAILS =====\n");

    printf("Patient ID: %d\n", p.patientID);
    printf("Patient Name: %s\n", p.name);
    printf("Age: %d years\n", p.age);
    printf("Temperature: %.2f\n", p.temperature);
    printf("Days Admitted: %d\n", p.daysAdmitted);

    printf("Accommodation Cost: KSh %.2f\n", totalCost);

    return 0;
}