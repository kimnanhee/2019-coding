#include <stdio.h>
#include <math.h> 
#define SWAP(a, b) { int tmp=a; a=b; b=tmp; }
int main()
{
	int N, i, j, z, k;
	int arr[100], prr[100];
	
	printf("������ �ڷ��� ���� : ");
	scanf("%d", &N);
	
	printf("\n�ڷ� : ");
	for(i=1; i<=N; i++)
		scanf("%d", &arr[i]); 
		
	for(z=N; z>=1; z--) { // N����ŭ ��Ʈ ���� ����
		for(i=1; i<=z; i++) { // Ʈ���� ���̸�ŭ �ݺ� 
			for(j=1; j<=z/2; j++) { // �ڽ� ��尡 �ִ� ��常 ������
				if(z%2==0 && j==z/2) { // �ڽ��� 1���� ���� ��� 
					if(arr[j]>arr[j*2]) 
						SWAP(arr[j], arr[j*2]);
				}
				else {
					if(arr[j*2]>arr[j*2+1]) { // ������ �ڽ� ��尡 ���� ��� 
						if(arr[j]>arr[j*2+1]) 
							SWAP(arr[j], arr[j*2+1]);
					}
					else {
						if(arr[j]>arr[j*2]) 
							SWAP(arr[j], arr[j*2]);
					}
				}
			}
		}
		printf("\n%d��°", N-z+1);
		for(k=1; k<=z; k++)
			printf(" %d", arr[k]);
			
		prr[N-z+1]=arr[1]; // prr[1~N]���� ��Ʈ ��� �� ���� 
		arr[1]=arr[z];
	}
	printf("\n");
	for(i=1; i<=N; i++)
		printf("%d ", prr[i]);
	return 0;
}
