#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb){
  unsigned int i1 = 0;
  unsigned int i2 = 0;
  while(dest[i1] !=  '\0') i1++;

  while(i2 < nb && src[i2] != '\0'){
    dest[i1] = src[i2];
    i1++;
    i2++;
  }
  dest[i1] = '\0';
  return (dest);
}
/*
int main()
{
  char dest[35] = "hallo world";
  char src[] = "Rafayel Ghazaryan";
  int nb = 7;

  printf("dest %s", ft_strncat(dest,src, nb));

}
*/