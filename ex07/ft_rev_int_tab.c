#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size) {
    int i;
    int temp;

    i = 0;
    while (i < size / 2) {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}

int main(void) {
    int ary[6] = {33,1,1,1,1,8};
    int num = 6;
    int i = 0;

    ft_rev_int_tab(ary, num);

    while (i < num) {
        printf("%d ", ary[i]);
        i++;
    }

    return 0;
}
