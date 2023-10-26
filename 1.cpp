#include <stdio.h>

int main() {

  int a, t;
  float luas;

  printf("10: ");
  scanf("%d",&a);
  printf("15: ");
  scanf("%d",&t);

  luas = 0.5*a*t;

  printf("Luas segitiga adalah %2.f\n", luas);
}