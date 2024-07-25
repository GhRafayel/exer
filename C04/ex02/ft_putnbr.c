#include <unistd.h>

void ft_write(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int nb) {
    if (nb == -2147483648) {
        ft_write('-');
        ft_write('2');
        nb = 147483648;
    }
    
    if (nb < 0) {
        ft_write('-');
        nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    ft_write((nb % 10) + '0');
}
/*
int main() {
    ft_putnbr(12345);   
    return 0;
}
*/
