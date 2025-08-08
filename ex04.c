#include <stdio.h>

int main() {


    char name[20], g ;
    float cal, phy, sci, avg ;
    
    printf("Enter your name: ");
    scanf("%s",name) ; 
    printf("Enter your Calculus score: ");
    scanf("%f",&cal) ;
    printf("Enter your Physic score: ");
    scanf("%f",&phy) ;
    printf("Enter your Science score: ");
    scanf("%f",&sci) ;

    avg = (cal+phy+sci)/3 ;
    if(avg>=80){
        g = 'A' ;
    }
    else if((70<=avg)&&(avg<80)){
        g = 'B' ;
    }
    else if((60<=avg)&&(avg<70)){
        g = 'C' ;
    }
    else if((50<=avg)&&(avg<60)){
        g = 'D' ;
    }
    else if(avg<50){
        g = 'F' ;
    }

    printf("%s, your average is %.2f . You got grade %c",name,avg,g);
    printf("\n");
    return 0 ;
}