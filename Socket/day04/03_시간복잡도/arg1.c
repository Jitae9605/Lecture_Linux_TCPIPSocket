#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int sum = 0;
	scanf("%d", &n);

	int nD = n / 2;
	int nP = n % 2;

	for(int i = nP; i < (nD+nP); i++)
	{
		sum += i;
		sum += n--;
	}

	sum += nD + nP;

	printf("%d\n",sum);

	return 0;
}
