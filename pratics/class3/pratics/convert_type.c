#include<stdio.h>

int main(){
  char character = 255;
  int integer = character;

  float float_number = integer;
  double double_number = integer;

  double_number = 256.1234567;
  float_number = (float) double_number;
  int int_converted = (int) float_number;
  
  printf("caractere = %i\n", character);
  printf("inteiro = %i\n", integer);
  printf("flutuante = %.7f\n", float_number);
  printf("duplo = %.7f\n", double_number);

}