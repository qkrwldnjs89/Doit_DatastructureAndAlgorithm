#include <stdio.h>

void triangleLB(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleLU(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleRU(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < i)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }
}

void triangleRB(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n; j++)
        {
            if (i > j)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }
}

int main(void)
{
    while (1)
    {
        int option, n;
        puts("�����ﰢ�� ��� �ɼ�");
        printf("1. ���ʾƷ� ���� \n\
2. ���� �� ���� \n\
3. ������ �� ���� \n\
4. ������ �Ʒ� ���� \n\
5. ���α׷� ���� \n\
�ɼ� ����: "); 
        scanf("%d", &option);

        if (option == 1)
        {
            printf("�� ��? "); scanf("%d", &n);
            triangleLB(n);
        }
        else if (option == 2)
        {
            printf("�� ��? "); scanf("%d", &n);
            triangleLU(n);
        }
        else if (option == 3)
        {
            printf("�� ��? "); scanf("%d", &n);
            triangleRU(n);
        }
        else if (option == 4)
        {
            printf("�� ��? "); scanf("%d", &n);
            triangleRB(n);
        }
        else if (option == 5)
        {
            puts("���α׷� ����");
            return 0;
        }
        else
            puts("�ٽ� �Է��ϼ���");
    }
    
    return 0;
}