#include <stdio.h>

int ft_is_prime(int nb)
{
  if(nb == 2){
    return (1);
  }
  if(nb > 2 && nb % 2 != 0){
    int index = 3;
    while(index < nb){
      if(nb % index == 0){
        return 0;
      }
      index+=2;
    }
      return 1;
  }
   
  return 0;
}
/*
int main(){
  int value = 0;
  printf("result %d", ft_is_prime(value));
  return 0;
}
*/