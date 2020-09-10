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
		
		printf("입력하려면 (y, Y) 그만두려면 (n, N) 을 입력: ");
		option = getche();
		if (option == 'n' || option == 'N')
		{
			puts("\n프로그램 종료");
			break;
		}
		else if (option == 'y' || option == 'Y')
		{
			int a, b, c;
			printf("\n세 정수를 입력하세요: "); scanf("%d %d %d", &a, &b, &c);
			printf("가장 큰 수는: %d \n", max3(a, b, c));
		} 
		else
		{
			printf("다시 입력하세요 \n");
			continue; 
		}
	}	
	
	return 0;
} 
