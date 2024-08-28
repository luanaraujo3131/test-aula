#include<stdio.h>

int main(){
  long int population = 780000000L;
  printf("A população mundial é %ld pessoas.\n", population);

  const short int HOUR_IN_SECOND = 3600;
  printf("Uma hora tem %d segundos.\n", HOUR_IN_SECOND);

  long double MAX_PRECISION = 3.14159265358979323846L;
  printf("Máximo de precisão %Lf.\n", MAX_PRECISION);
}