#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  printf("Tamanho do char na memoria = %lu byte(s)\n", sizeof(char));
  printf("Tamanho do int na memoria = %lu byte(s)\n", sizeof(int));
  printf("Tamanho do float na memoria = %lu byte(s)\n", sizeof(float));
  printf("Tamanho do double na memoria = %lu byte(s)\n", sizeof(double));
  printf("Tamanho do void na memoria = %lu byte(s)\n", sizeof(void));

  printf("A faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);  
  printf("A faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf("A faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX);
  printf("A faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);

  char bla = 'A';
  printf("Valor de bla: %c\n", bla);
  int age = 20;
  printf("Valor de age: %i\n", age);
  float value = 8.6f;
  printf("Value %f\n", value);
  double pi = 3.14156294;
  printf("Value %.10f\n", pi);

  const float PI = 3.14;
  printf("Valor da constante PI: %f\n", PI);
  
  printf("Tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("Tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("Tamanho do long double na memoria = %lu byte(s)\n", sizeof(long double));
  
  return 0;
}