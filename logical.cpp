#include <stdio.h>
#include <iostream>

int main(void)
{
    int a, b;

    printf("enter numbers:\n");
    std::cin >> a;
    std::cin >> b;
    
    if (a >= 5 && b >= 5) {
        printf("Perases to mathima");
    }
    if (a > 10 || a < 0) {
        printf("lathos vathmos a\n");
    }
    if (b > 10 || b < 0) {
        printf("lathos vathmos b\n");
    }
     
    return 0;
}


