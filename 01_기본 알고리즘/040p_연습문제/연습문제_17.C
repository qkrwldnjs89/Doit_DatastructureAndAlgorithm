#include <stdio.h>

void spira(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
            putchar(' ');
        for (j = 0; j < 2 * i - 1; j++)
            putchar('*');
        for (j = 0; j < n - i; j++)
            putchar(' ');
        putchar('\n'); 
    }
}

int main(void)
{
    int n;
    puts("n단의 피라미드를 출력합니다.");
    printf("몇 단? "); scanf("%d", &n);
    spira(n);
    return 0;
}