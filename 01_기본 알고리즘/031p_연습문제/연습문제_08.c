#include <stdio.h>

int main(void)
{
    int n, sum;
    int i;
    puts("1���� n������ ���� ���մϴ�.");
    printf("n�� ��: "); scanf("%d", &n);

    sum = ((1 + n) / (double) 2) * n;
    printf("1���� n������ ���� %d. \n", sum);
    return 0;
}