#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
  int i = 0;
  int j = 0;
  int temp;
  while (i < size)
  {
    while (j < size)
    {
      if(tab[i] > tab[i + 1]){
        temp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = temp;
      }
      j++;
    }
    i++;
    j = 0;
  }
  
}
int main(void) {
    int ary[6] = {5,4,3,2,1,0};
    int num = 6;
    int i = 0;

    ft_sort_int_tab(ary, num);

    while (i < num) {
        printf("%d ", ary[i]);
        i++;
    }

    return 0;
}