#include <stdio.h>

void nrpira(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        int printedNum = (i + 1) % 10;
        for (j = 0; j < i; j++)
            putchar(' ');
        for (j = 0; j < 2 * (n - i) - 1; j++)
            printf("%d", printedNum);
        for (j = 0; j < i; j++)
            putchar(' ');
        putchar('\n');
    }
}

int main(void)
{
    int n;
    puts("n단의 숫자 피라미드를 출력합니다.");
    printf("몇 단? "); scanf("%d", &n);
    nrpira(n);
    return 0;
}