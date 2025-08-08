#include <stdio.h>

int main() {

    int num1 ;
    printf("Enter a number: ");
    scanf("%d",&num1) ; 

    if((0<=num1)&&(num1<=100)) {
        if ((num1 % 2) == 0){
            printf("%d is even",num1) ;
        }
        else if ((num1 % 2) == 1){
            printf("%d is odd",num1) ;
        }
    }
    else if ((num1<0) && (num1>100)){
        printf("%d is out of range",num1);
    }
    printf("\n");
    return 0 ;
}