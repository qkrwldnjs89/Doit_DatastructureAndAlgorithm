#include <stdio.h>

int main(void)
{
	int n;
	
	printf("������ �Է�: "); scanf("%d", &n);
	
	if (n > 0)
		puts("�� ���� ����Դϴ�.");
	else if (n < 0)
		puts("�� ���� �����Դϴ�.");
	else
		puts("�� ���� 0�Դϴ�.");
	return 0;
}
