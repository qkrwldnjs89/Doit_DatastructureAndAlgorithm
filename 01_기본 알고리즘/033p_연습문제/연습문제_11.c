#include <stdio.h>

int main(void)
{
    int n;
    int m = 10, digit = 1;
    
    puts("n�� �ڸ����� ���մϴ�.");
    do
    {
        printf("���� ���� n�� ��: "); scanf("%d", &n);
    } while ( n <= 0 );
    
    while (n / m != 0)
    {
        digit++;
        m *= 10;
    }
    
    printf("%d�� %d�ڸ��Դϴ�. \n", n, digit);
    return 0;
}