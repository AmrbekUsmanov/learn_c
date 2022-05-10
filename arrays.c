#include <stdio.h>

int main() {
    // int test_scores[25];//array size=25 id=test_scores

    // float prices[5] = {3.2, 6.55, 10.49, 1.25, .99};//to`liq elon qilsih
    // int natijalar[5] = {32, 34,5};// qisman e`lon qilish
    // int x[5] = {20, 45, 16, 18, 22};
    // printf("The second element is %d\n", x[1]);/*45*/
    // x[1] = 260;
    // printf("The second element is %d\n", x[1]);/*260*/
    
    // float purchases[3] = {10.99, 14.25, 90.50};
    // float total = 0;
    // int k;
    // // total the purchases
    // for (k=0; k<3; k++) {
    //     total += purchases[k];
    // }

    // printf("Purchses total is %6.2f\n",total);
    // /* Purchases total is 115.74 */

    int a[10];
    int k;
    for ( k = 0; k < 10; k++)
    {
        a[k] = k*10;
    }
    for (int i=0; i<10; i++){
        printf("%d ",a[i]);
    }
    

    return 0;
}