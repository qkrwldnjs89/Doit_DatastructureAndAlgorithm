#include <stdio.h>

int main(void)
{
    int no;
    printf("���ڸ� ������ �Է��ϼ��� \n");
    do
    {
        printf("���� "); scanf("%d", &no);
    } while (no < 10 || no > 99); // !(no >= 10 && no <= 99) �� ��ġ ���� by ��𸣰� ��Ģ
    printf("���� no�� ���� %d. \n", no);
    return 0;
}