#include <stdio.h>

int main(){
    /*int num = 41;
    num += 1;
    if (num == 42){
        printf("You won!");
    }*/
    /*int in_stock = 20;
    if (in_stock)
        printf("ORder received. \n");*/
    
    /*int score = 89;

    if (score >= 90)
        printf("Top 10%%.\n");
    else
        printf("Less than 90.\n");*/
    // ternary operator
    // int y;
    // int x = 3;

    // y = (x>=5) ? 5 : x;//3
    // /*this is equivalent to:
    // if (x>=5)
    //     y=5;
    // else
    //     y=x;
    // */
    // printf("%d",y);
    
    // nested if statement
    /*if (profit > 1000)
        if (clients > 15)
            bonus = 100;
    else
        bonus = 25;*/
    
    //else if statement
    /*int score = 89;
    if (score >= 90)
        printf("%s","Top 10%\n");
    else if (score >= 80)
        printf("%s","Top 20%\n");
    else if (score > 75)
        printf("%s","You passed.\n");
    else
        printf("%s","You did not pass.\n");*/
    
    //switch statement 
    // int num = 3;
    // switch (num){
    //     case 1:
    //         printf("One\n");
    //     break;
    //     case 2:
    //         printf("Two\n");
    //     break;
    //     case 3:
    //         printf("Three\n");
    //     break;
    //     default: // default yozish ixtiyoriy
    //         printf("Not 1, 2, or 3.\n");
    // }

    // ko`p qiymatli
    int num = 3;
    switch(num){
        case 1:
        case 2:
        case 3:
            printf("One, Two, or Three.\n");
        break;
        case 4:
        case 5:
        case 6:
            printf("Four, Five, or Six.\n");
        break;
        default:
            printf("Greater than Six.\n");

    }
    return 0;
}