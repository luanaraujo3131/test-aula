#include<stdio.h>

int main(){
  long int isbn = 1574848956321;
  int page_numbers = 352;
  float price = 80.50;
  int publication_data = 1985;

  printf("ISBN %ld\n", isbn);
  printf("Num. páginas: %d\n", page_numbers);
  printf("Preço: R$ %.2f\n", price);
  printf("Ano de publicação: %d\n", publication_data);
  
  return 0;
}