#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int i;

    // Calculate the length of dest
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    // Calculate the length of src
    while (src[src_len] != '\0') {
        src_len++;
    }

    // If size is less than or equal to dest_len, return size + src_len
    if (size <= dest_len) {
        return size + src_len;
    }

    // Append src to dest
    i = 0;
    while (src[i] != '\0' && dest_len + i < size - 1) {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Null-terminate the result
    dest[dest_len + i] = '\0';

    return dest_len + src_len;
}

/*
int main() {
    char dest[20] = "Hello";
    char src[] = "World";
    unsigned int size = 15;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("After strlcat: %s\n", dest);
    printf("Total length: %u\n", result);

    return 0;
}*/
