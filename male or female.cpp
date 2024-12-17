#include <stdio.h>

int main() {
    float amount, bill;
    char gender;
    printf("Enter the total bill amount: Rs. ");
    scanf("%f", &amount);
    
    printf("Enter your gender (M & m for Male, F & f for Female): ");
    scanf(" %c", &gender);
    bill = amount - (amount * 0.05);
    
    if (gender == 'F' || gender == 'f') {
        if (amount > 5000) {
            bill = bill - (bill * 0.10);
        }
    }
    
    printf("The  bill after applying discounts is: Rs. %.2f\n", bill);
    
    return 0;
}

