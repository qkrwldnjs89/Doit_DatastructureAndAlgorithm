#include <stdio.h>

int main(void)
{
    int i, j, n;
    
    puts("직각 이등변 삼각형 출력");
    do
    {
        printf("몇 단?"); scanf("%d", &n);
    } while (n <= 0);
    
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}