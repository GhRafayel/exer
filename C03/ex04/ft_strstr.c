#include <stdio.h>

char *ft_strstr(char *str, char *to_find) {
    char *p1 = str;
    char *p2;
    char *p1_advance = str;

    if (*to_find == '\0') {
        return str;
    }

    while (*p1_advance) {
        p1_advance++;
    }

    for (; *str; str++) {
        p1 = str;
        p2 = to_find;

        while (*p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return str;
        }
    }

    return NULL;
}

/*
int main() {
    char str[] = "HelloWorld";
    char to_find[] = "World";
    
    char *result = ft_strstr(str, to_find);
    
    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found.\n");
    }

    return 0;
}
*/