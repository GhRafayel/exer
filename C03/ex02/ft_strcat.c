#include <stdio.h>

char *ft_strcat(char *dest, char *src) {
    char *dest_start = dest;

    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (dest_start);
}
/*
int main() {
    char dest[50] = "Hello";
    char src[] = "World";
    
    printf("Before strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After strcat: %s\n", dest);

    return (0);
}
*/
