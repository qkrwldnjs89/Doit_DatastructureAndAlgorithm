#include <stdio.h>

int main(void)
{
    int a, b;
    puts("b - a �� ���մϴ�.");
    do
    {
        puts("b �� a ���� ū ���� �Է��ϼ���.");
        printf("a�� ��: "); scanf("%d", &a);
        printf("b�� ��: "); scanf("%d", &b);
    } while ( b <= a );
    printf("b - a �� %d �Դϴ�. \n", b - a);
    
    return 0;
}