#include <stdio.h>

int main() {

    int num,wh;
    float pay,sal;
    scanf("%d%d%f", &num,&wh,&pay);
    sal=wh*pay;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sal);


    return 0;
}
