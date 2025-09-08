#include <stdio.h>

int main() {

    int product[2],unit[2];
    double price[2],total[2];
    double pay;
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%d %d %lf",&product[i],&unit[i],&price[i]);
        total[i]=unit[i]*price[i];

    }
    pay=total[0]+total[1];
    printf("VALOR A PAGAR: R$ %.2lf\n",pay);

    return 0;
}
