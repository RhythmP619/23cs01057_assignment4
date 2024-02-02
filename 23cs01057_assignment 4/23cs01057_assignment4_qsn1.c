#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    switch (n%2){
        case 0:
            printf("Number is even.\n");
        case 1:
            printf("The number is odd.\n");
    }
}