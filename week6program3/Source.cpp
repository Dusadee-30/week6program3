#include<Stdio.h>
int main()
{
	int n;
	printf("please enter your number : ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			if (i == 1 || i == n) {
				printf("*");
			}
			else
			{
				if (j == 1 || j == n)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}