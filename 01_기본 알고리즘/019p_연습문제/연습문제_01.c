#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a;
	max = (b > max) ? b : max;
	max = (c > max) ? c : max;
	max = (d > max) ? d : max;
	
	return max;
}
int main(void)
{
	int a, b, c, d; 
	printf("�� ������ �Է�: "); scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("���� ū ���� %d �Դϴ�. \n", max4(a, b, c, d));
	return 0;
}
