#include <stdio.h>

int ft_strlen(char *str)
{
    unsigned int index = 0;
    while (*str){
      index++;
      str++;
    }
    return (index);
}
/*
int main(){
  char *str = "hello world";
  int a = ft_strlen(str);
  printf("%d\n", a);
  return 0;
}
*/