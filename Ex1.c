#include <stdio.h>

int main() {
    int num1, num2, cal ;
    printf("Enter num 1 : ");
    scanf("%d",&num1);
    printf("Enter num 2 : ");
    scanf("%d",&num2);
    printf("Calculator Menu :\n");
    printf("    1.+\n");
    printf("    2.-\n");
    printf("    3.*\n");
    printf("    4./\n");
    printf("    5.%% \n");
    printf("Choose menu: ");
    scanf("%d",&cal);
    printf("ANS : ");

    if(cal==1) {
        printf("num1+num2 = %d",num1+num2);
    }
    else if (cal==2){
        printf("num1-num2 = %d",num1-num2);
    }
    else if (cal==3){
        printf("num1*num2 = %d",num1*num2);
    }
    else if (cal==4){
        printf("num1/num2 = %d",num1/num2);
    }
    else if (cal==5){
        printf("num1%%num2 = %d",num1%num2);
    }
    printf("\n");
    return 0 ;
}