#include <stdio.h>

int ft_atoi(char *str) {
    int result = 0;
    int sign = 1;

     while (*str < 33 || *str > 126) {
        str++;
    }
    while (*str == '+' || *str == '-') {
        if (*str == '-') {
            sign = -sign;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return (result * sign);
}

// // Testing the function
// int main() {
//     char test_str1[] = "   ---+--+1234ab567";
//     char test_str2[] = "   +42";
//     char test_str3[] = "   -42";
//     char test_str4[] = "   \t\v\f\r\n  12345";
    
//     printf("Result 1: %d\n", ft_atoi(test_str1)); // Should print -1234
//     printf("Result 2: %d\n", ft_atoi(test_str2)); // Should print 42
//     printf("Result 3: %d\n", ft_atoi(test_str3)); // Should print -42
//     printf("Result 4: %d\n", ft_atoi(test_str4)); // Should print 12345

//     return 0;
// }
