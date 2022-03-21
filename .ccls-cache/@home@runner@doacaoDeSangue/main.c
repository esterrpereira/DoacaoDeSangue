#include <stdio.h>

int main(void) {
  int idade, peso_doador;
 
  
  printf("Digite sua idade: ");
  scanf("%d",&idade);
  printf("Digite seu peso: ");
  scanf("%d",&peso_doador);
 

  if (idade < 16 || idade > 70){
        printf("Idade incompatível, infelizmente você não poderá participar da doacão de sangue");
 
    if (idade >= 16 && idade <= 69 )
      printf("Pode doar!");
  }

 else
     if (peso_doador < 50)
       printf(" Peso incompatível, infelizmente você não poderá participar da doação de sangue ");
        
        




  
}