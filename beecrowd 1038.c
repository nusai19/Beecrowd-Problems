#include <stdio.h>

int main() {

    int code, quantity;
    scanf("%d %d", &code, &quantity);

    if(code == 1)
    printf("Total: R$ %.2lf\n", quantity * 4.0);
    else if(code == 2)
    printf("Total: R$ %.2lf\n", quantity * 4.5);
    else if(code == 3)
    printf("Total: R$ %.2lf\n", quantity * 5.00);
    else if(code == 4)
    printf("Total: R$ %.2lf\n", quantity * 2.00);
    else if(code == 5)
    printf("Total: R$ %.2lf\n", quantity * 1.50);
    return 0;
}
