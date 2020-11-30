#include <stdio.h>
#include <iostream>

int main(void)
{
    int a, b;
    char c;

    printf("Please enter two integers and a character:\n");
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (c == 'S') {
        printf("Result: %d", a + b);
    }
    if (c == 'M') {
        printf("Result: %d", a * b);
    }

    return 0;
}


