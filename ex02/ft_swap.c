#include <unistd.h>

void ft_swap(int *a, int *b)
{
  int value = *a;
   *a = *b;
   *b = value;
}