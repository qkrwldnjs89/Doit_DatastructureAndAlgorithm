#include <stdio.h>

int main(void)
{
    int i, j, n;
    
    puts("���� �̵ �ﰢ�� ���");
    do
    {
        printf("�� ��?"); scanf("%d", &n);
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