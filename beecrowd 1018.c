#include <stdio.h>

int main() {

  int N,original;
  scanf("%d", &N);
  original = N;

  int hundred = N/100;
  N = N%100;
  int fifty = N/50;
  N = N%50;
  int twenty = N/20;
  N = N%20;
  int ten = N/10;
  N = N%10;
  int five = N/5;
  N = N%5;
  int two = N/2;
  N = N%2;
  int one = N/1;

  printf("%d\n", original);
  printf("%d nota(s) de R$ 100,00\n",hundred);
  printf("%d nota(s) de R$ 50,00\n",fifty);
  printf("%d nota(s) de R$ 20,00\n",twenty);
  printf("%d nota(s) de R$ 10,00\n",ten);
  printf("%d nota(s) de R$ 5,00\n",five);
  printf("%d nota(s) de R$ 2,00\n",two);
  printf("%d nota(s) de R$ 1,00\n", one);
  return 0;
}
