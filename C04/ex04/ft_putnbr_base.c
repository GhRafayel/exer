#include <unistd.h>

int is_base_valid(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (base[i] != '\0') 
    {
        if (base[i] < 33 || base[i] > 126)
        {
            return 0;
        }
        j = i + 1;
        while (base[j] != '\0') 
        {
            if (base[i] == base[j]) 
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return (i > 1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    unsigned int base_len;
    unsigned int num;

    if (!is_base_valid(base)) {
        return;
    }
    base_len = 0;
    while (base[base_len]) {
        base_len++;
    }
    if (nbr < 0) {
        ft_putchar('-');
        num = -nbr;
    } else {
        num = nbr;
    }
    if (num >= base_len) {
        ft_putnbr_base(num / base_len, base);
    }
    ft_putchar(base[num % base_len]);
}
/*
int main() {
    int number = 225;

    char base8[] = "poneyvif";
    char base10[] = "0123456789";
    char base16[] = "0123456789ABCDEF";
   

    ft_putnbr_base(number, base16);
    return 0;
}*/
