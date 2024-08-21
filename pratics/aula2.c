#include<stdio.h>

int main(){
  printf("any text\n");

  //%i para número inteiros
  printf("%i\n", 10);
  printf("%i %i\n", 10, 20);
  printf("%5i\n", 110);  //5 digitos são preenchidos com espaços vazios, fica assim:  110(2 espaços vazios e 110, que são 3 digitos, completando os 5)
  
  //%f para números floats
  printf("%f\n", 10.51423);
  printf("%4.f\n", 15.2366598);
  printf("%10.2f\n", 10.5888);

  //imprime um caractere 
  printf("%c\n", 'A');

  //um string
  printf("%s\n", "Bom dia"); //em C não temos String, apenas char
  
  return 0;
}