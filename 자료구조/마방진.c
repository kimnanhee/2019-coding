#include <stdio.h>
// ¸¶¹æÁø 
int main() 
{
	int i, j, x, y, n, a[30][30] = {0};
	
	printf("Enter : ");
	scanf("%d", &n);
	
	x = 1, y = (n + 1) / 2;

	for (i = 1; i <= n * n; i++) 
	{
		a[x][y] = i;

		if (i % n == 0)
			x++;
		else 
		{
			x--;
			y++;
			if (x == 0) x = n;
			if (y == n + 1) y = 1;
		}
	}
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
			printf("%5d", a[i][j]);
		printf("\n");
	}
}
