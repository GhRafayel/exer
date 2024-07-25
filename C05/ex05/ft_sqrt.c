#include <stdio.h>

int ft_sqrt(int nb)
{
  int low;
  int high;

  high = nb;
  low = 0;

  while(low <= high)
  {
    int mid = (low + high) / 2;
    int square = mid * mid;
    
    if(square == nb)
    {
      return mid;
    }
    else if( square < nb )
    {
      low = mid + 1;
    }
    else 
    {
      high = mid - 1;
    }
  }
  return 0;
}
/*
int main(){
  int nb = 7;
  printf("%d\n",ft_sqrt (nb));

  return 0;
}
*/