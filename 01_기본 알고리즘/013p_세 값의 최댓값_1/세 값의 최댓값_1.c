#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;
	
	printf("a�� �Է��ϼ���: "); scanf("%d", &a);
	printf("b�� �Է��ϼ���: "); scanf("%d", &b);
	printf("c�� �Է��ϼ���: "); scanf("%d", &c);
	
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	
	printf("�ִ��� %d �Դϴ�. \n", max);
	return 0;
}
