#include <stdio.h>

int main(void)
{
    int row, cal;
    int i, j;
    
    puts("���簢���� ����մϴ�.");
    printf("����: "); scanf("%d", &row);
    printf("�ʺ�: "); scanf("%d", &cal);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cal; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    return 0;
}