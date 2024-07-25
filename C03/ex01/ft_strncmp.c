#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i = 0;

    while (i < n && s1[i] && s2[i]) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    if (i < n) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
    }
    return 0;
}

/*
int main() {
    char str1[] = "HelloWorld";
    char str2[] = "HelloThere";
    unsigned int n = 5;
    int result;

    result = ft_strncmp(str1, str2, n);

    if(result == 0) {
        printf("The first %u characters of both strings are equal.\n", n);
    } else if(result > 0) {
        printf("The first %u characters of str1 are greater than str2.\n", n);
    } else {
        printf("The first %u characters of str1 are less than str2.\n", n);
    }

    return 0;
}
*/
