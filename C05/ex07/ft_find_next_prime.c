#include <stdio.h>

int ft_is_prime(int nb)
{
  if (nb <= 1) {
        return 0;
    }
    if (nb == 2) {
        return 1;
    }
    if (nb % 2 == 0) {
        return 0;
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

int ft_find_next_prime(int nb){
  int result = nb + 1;
  if( ft_is_prime(result) == 1) {
    return result;
  }
  return ft_find_next_prime( result );
}

/*
int main(){
  int value = 2;
  printf("result %d", ft_find_next_prime(value));
  return 0;
}
*/