#include <stdio.h>

int main(){
    int a, b;
    char operator;
    printf("Enter the first integer A: ");
    scanf("%d", &a);
    printf("Enter the first integer B: ");
    scanf("%d", &b);
    
    printf("Which operation would you like to perform among '+', '-', '*', '/': ");
    getchar();
    scanf("%c", &operator);

    switch (operator){
        case '+':
        printf("A + B is: %d", a + b);
        break;
        case '-':
        printf("A - B is: %d", a - b);
        break;
        case '*':
        printf("A * B is: %d", a * b);
        break;
        case '/':
        if (b == 0){
            printf("A / B is not defined.");
            break;
        } else {
            printf("A / B is: %f", (float)a / b);
            break;
        }
        default:
        printf("Invalid operator selected.");
        break;
    }
}