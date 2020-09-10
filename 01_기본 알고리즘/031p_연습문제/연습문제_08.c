#include <stdio.h>

int main(void)
{
    int n, sum;
    int i;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: "); scanf("%d", &n);

    sum = ((1 + n) / (double) 2) * n;
    printf("1부터 n까지의 합은 %d. \n", sum);
    return 0;
}