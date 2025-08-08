#include <stdio.h>

int main() {

    float h,r,V ;
     
    printf("Enter cone hight: ");
    scanf("%f",&h) ;
    printf("Enter cone base radius: ");
    scanf("%f",&r) ;
    V = (3.14/3)*(r*r)*(h);
    printf("Cone volume = %.1f \n",V);

    if (V>260){
        printf("This cone is perfect for Supun project!");
    }
    else{
        printf("this cone is not fit for this project");
    }

    printf("\n");
    return 0 ;
}