#include <stdio.h>
#include <conio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	
	return max;
}

int main(void)
{
	while (1)
	{
		char option;
		
		printf("�Է��Ϸ��� (y, Y) �׸��η��� (n, N) �� �Է�: ");
		option = getche();
		if (option == 'n' || option == 'N')
		{
			puts("\n���α׷� ����");
			break;
		}
		else if (option == 'y' || option == 'Y')
		{
			int a, b, c;
			printf("\n�� ������ �Է��ϼ���: "); scanf("%d %d %d", &a, &b, &c);
			printf("���� ū ����: %d \n", max3(a, b, c));
		} 
		else
		{
			printf("�ٽ� �Է��ϼ��� \n");
			continue; 
		}
	}	
	
	return 0;
} 
