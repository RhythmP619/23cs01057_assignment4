#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n < 100 || n > 999){
        printf("Incorrect input.\n");
        return 0;
    }
    int sum = 0, temp = n;
    int divisor = 10;
    while (n){
        sum += (n % divisor)*(n % divisor)*(n % divisor);
     
        n /= 10;
    }
    if (sum == temp){
        printf("%d is an armstrong number.\n", temp);
        printf("%d", n);
    } else {
        printf("%d is not an armstrong number.\n", temp);
        printf("%d", n);
    }
}