#include <stdio.h>

int main(void) {
  int idade, peso_doador;
 
  
  printf("Digite sua idade: ");
  scanf("%d",&idade);
  printf("Digite seu peso: ");
  scanf("%d",&peso_doador);
 

  if (idade < 16 || idade > 69)

    printf("Peso ou idade incompatíveis, infelizmente você não poderá participar da doacão de sangue");
    
  
        
 else 
    
  if ( idade <= 69 && peso_doador >= 50 )
       printf("Peso e idade compatíveis, você poderá participar da doação de sangue");
else

     if (peso_doador < 50)
       printf(" Peso ou idade incompatíveis, infelizmente você não poderá participar da doação de sangue ");
    

  
}