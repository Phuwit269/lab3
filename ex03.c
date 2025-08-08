#include <stdio.h>

int main() {

    int num1 ;
    printf("Enter a number: ");
    scanf("%d",&num1) ; 

    switch(num1){
        case 1 ... 100 :
            switch(num1%2){
                case 0 : printf("%d is even",num1);
                break ;
                case 1 : printf("%d is odd",num1);
                break ;
            }
        break ;
        default : printf("%d is out of range",num1);
    }
    
    printf("\n");
    return 0 ;
}