#include <stdio.h>

int main() {
  printf("O tipo 'char' oucpa %lu byte(s) na memoria.\n", sizeof(char));
  printf("O tipo 'int' oucpa %lu byte(s) na memoria.\n", sizeof(int));
  printf("O tipo 'float' oucpa %lu byte(s) na memoria.\n", sizeof(float));
  printf("O tipo 'double' oucpa %lu byte(s) na memoria.\n", sizeof(double));
  printf("O tipo 'void' oucpa %lu byte(s) na memoria.\n", sizeof(void));
  
  return 0;
}
