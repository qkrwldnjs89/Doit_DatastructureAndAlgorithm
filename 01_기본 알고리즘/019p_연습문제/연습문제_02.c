#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	min = (b < min) ? b : min;
	min = (c < min) ? c : min;
	
	return min;
}

int main(void)
{
	int a, b, c;
	printf("�� ���� �Է�: "); scanf("%d %d %d", &a, &b, &c);
	printf("���� ���� ���� %d �Դϴ�. \n", min3(a, b, c));
		
	return 0;
} 
