#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c,ab,greatest;
    scanf("%d %d %d", &a, &b, &c );
    ab=(a+b+abs(a-b))/2;
    greatest=(c+ab+abs(ab-c))/2;
    printf("%d eh o maior\n", greatest );

    return 0;
}
