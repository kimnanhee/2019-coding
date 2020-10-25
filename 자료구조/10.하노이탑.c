#include <stdio.h>
#include <time.h>
clock_t start, end;
long long int memo[200] = {0, 1, 3, 7};

long long int fibo(int n)
{
	if(n == 1) return 1;
	return fibo(n-1) + 1 + fibo(n-1);
}

void hanoi(int n, char sc, char mc, char dc)
{
	if(n==0) return;
	hanoi(n-1, sc, dc, mc);
	printf("Disk %d : %c to %c\n", n, sc, dc);
	hanoi(n-1, mc, sc, dc);
}
long long int hanoi3(int n)
{
	if(memo[n]) return memo[n];
	else return memo[n]=2*hanoi3(n-1)+1;
}
int main()
{
	int n;
	scanf("%d", &n);
	
	start = clock();
//	printf("%d", fibo(n));
//	hanoi(n, 'A', 'B', 'C');
	printf("%lld", hanoi3(n));
	end = clock();
	
	printf("\nvoiTime : %f", (double)(end-start)/1000);
	return 0;
}
