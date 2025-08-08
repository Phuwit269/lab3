#include <stdio.h>

int main() {
    char calG,phyG,comG ;
    int cal,phy,com ;
    float gcal,gphy,gcom,gpa ;
    printf("Calculus score: ");
    scanf("%d",&cal);
    printf("Physic score: ");
    scanf("%d",&phy);
    printf("compro score: ");
    scanf("%d",&com);
    printf("\n");
    ///////////cal////////
    if(cal>=80){
        calG = 'A';
    }
    else if((80>cal)&&(cal>=70)){
        calG = 'B';
    }
    else if((70>cal)&&(cal>=60)){
        calG = 'C';
    }
    else if((60>cal)&&(cal>=50)){
        calG = 'D';
    }
    else if(50>cal){
        calG = 'F';
    }
    switch(calG) {
        case 'A': gcal = 4.00 ;
        break;
        case 'B': gcal = 3.00 ;
        break;
        case 'C': gcal = 2.00 ;
        break;
        case 'D': gcal = 1.00 ;
        break;
        case 'F': gcal = 0.00 ;
        break;
    }
    ///////////////phy//////////
    if(phy>=80){
        phyG = 'A';
    }
    else if((80>phy)&&(phy>=70)){
        phyG = 'B';
    }
    else if((70>phy)&&(phy>=60)){
        phyG = 'C';
    }
    else if((60>phy)&&(phy>=50)){
        phyG = 'D';
    }
    else if(50>phy){
        phyG = 'F';
    }
    switch(phyG) {
        case 'A': gphy = 4.00 ;
        break;
        case 'B': gphy = 3.00 ;
        break;
        case 'C': gphy = 2.00 ;
        break;
        case 'D': gphy = 1.00 ;
        break;
        case 'F': gphy = 0.00 ;
        break;
    }
    ////////////com/////////
        if(com>=80){
        comG = 'A';
    }
    else if((80>com)&&(com>=70)){
        comG = 'B';
    }
    else if((70>com)&&(com>=60)){
        comG = 'C';
    }
    else if((60>com)&&(com>=50)){
        comG = 'D';
    }
    else if(50>com){
        comG = 'F';
    }
    switch(comG) {
        case 'A': gcom = 4.00 ;
        break;
        case 'B': gcom = 3.00 ;
        break;
        case 'C': gcom = 2.00 ;
        break;
        case 'D': gcom = 1.00 ;
        break;
        case 'F': gcom = 0.00 ;
        break;
    }
    printf("Subject     Score     Grade     Grade\n");
    printf("--------------------------------------\n");
    printf("Cal%11d%9c%12.1f \n",cal,calG,gcal);
    printf("Physics%7d%9c%12.1f \n",phy,phyG,gphy);
    printf("compro%8d%9c%12.1f \n\n",com,comG,gcom);
    gpa = (gcal+gphy+gcom)/3 ;
    printf("GPA : %.1f",gpa);
    printf("\n");
    return 0 ;
}