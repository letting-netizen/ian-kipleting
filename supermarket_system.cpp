
#include <stdio.h>

// 1. Define the Product structure
struct Product {
    int productCode;
    char productName[50];
    float unitPrice;
    int quantity;
};

int main() {
    // 2. Declare a structure variable
    struct Product p;
    float totalStockValue;

    // Input product details
    printf("Enter Product Code: ");
    scanf("%d", &p.productCode);

    printf("Enter Product Name: ");
    scanf(" %49[^\n]", p.productName);

    printf("Enter Unit Price: ");
    scanf("%f", &p.unitPrice);

    printf("Enter Quantity in Stock: ");
    scanf("%d", &p.quantity);

    // 3. Calculate total stock value
    totalStockValue = p.unitPrice * p.quantity;

    // 4. Display product details
    printf("\n===== PRODUCT DETAILS =====\n");
    printf("Product Code: %d\n", p.productCode);
    printf("Product Name: %s\n", p.productName);
    printf("Unit Price: %.2f\n", p.unitPrice);
    printf("Quantity in Stock: %d\n", p.quantity);

    printf("Total Stock Value: %.2f\n", totalStockValue);

    return 0;
}