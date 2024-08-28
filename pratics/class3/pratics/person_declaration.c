#include<stdio.h>
#include <string.h> 

struct person{
  int mat;
  char name[50];
  short int age; 
  float weight;
  char sex;
};

void print_person(struct person p) {
    printf("Matricula: %d\n", p.mat);
    printf("Nome: %s\n", p.name);
    printf("Idade: %d\n", p.age);
    printf("Peso: %.2f\n", p.weight);
    if(p.sex == 'M' || p.sex == 'F') {
        printf("Sexo: %c\n", p.sex);
    } else{
      printf("invalid sex\n");
    }
    
}

int main(){
  struct person person1;
  person1.mat = 12345678;
  strcpy(person1.name, "Luan"); 
  person1.age = 20;
  person1.weight = 60.5;
  char sex = 'M';

  print_person(person1);
}
