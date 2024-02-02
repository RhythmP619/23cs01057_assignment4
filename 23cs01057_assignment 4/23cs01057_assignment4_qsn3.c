#include <stdio.h>
int main(){
    int bal, score;
    printf("Enter the credit score: ");
    scanf("%d", &score);
    printf("Enter the current balance: ");
    scanf("%d", &bal);

    int interest;
    if (score > 750){
        interest = (10*bal) / 100;
    } else if (score > 600){
        interest = (12*bal / 100);
    } else {
        interest = (15*bal / 100);
    }
    printf("Interest is %d.\n", interest);
    
}