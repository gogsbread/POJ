#include <stdio.h>

int main()
{
  float sum=0.00, add;
  int i;
  for (i=0; i<12; i++) {
    scanf("%f", &add);
    sum += add;
  }
  printf("$%.2f\n", sum/12);
  return 0;
}
