#include <stdio.h>

int main() {

    int X;
    scanf("%d",&X);
    int count = 0;
    while(count < 6){
        if(X % 2 != 0){
            printf("%d\n",X);
            count++;
        }
        X++;
    }

    return 0;
}
