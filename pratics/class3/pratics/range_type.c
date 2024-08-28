#include<limits.h>
#include<float.h>
#include<stdio.h>

int main(){
  printf("A faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf("A faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX);
  printf("A faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);


  return 0;
}