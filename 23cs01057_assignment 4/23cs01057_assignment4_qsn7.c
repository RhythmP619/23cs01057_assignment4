#include <stdio.h>

int main(){
    printf("Enter the age: ");
    int age; scanf("%d", &age);

    if (age >= 60){
        printf("Ticket price: 40\n");
    } else if (age >= 13){
        printf("Ticket price: 50\n");
    } else if (age >= 5){
        printf("Ticket price: 20\n");
    } else {
        printf("Ticket price: FREE\n");
    }
}