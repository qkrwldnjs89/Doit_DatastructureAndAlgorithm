#include <stdio.h>

int sumof(int a, int b)
{
    int sum = (b < a) ? ( (a + b) / (double)2 ) * (a - b + 1) : ( (a + b) / (double)2 ) * (b - a + 1);
    return sum;
}

int main(void)
{
    int a, b;
    puts("a �� b �� ������ �� ������ ��� ������ ���� ���մϴ�.");
    printf("a�� ��: "); scanf("%d", &a);
    printf("b�� ��: "); scanf("%d", &b);
    printf("a �� b �� ������ �� ������ ��� ������ ���� %d. \n", sumof(a, b));
    return 0;
}