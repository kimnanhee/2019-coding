#include <stdio.h>
#include <math.h> 
#define SWAP(a, b) { int tmp=a; a=b; b=tmp; }
int main()
{
	int N, i, j, z, k;
	int arr[100], prr[100];
	
	printf("정렬할 자료의 개수 : ");
	scanf("%d", &N);
	
	printf("\n자료 : ");
	for(i=1; i<=N; i++)
		scanf("%d", &arr[i]); 
		
	for(z=N; z>=1; z--) { // N번만큼 루트 삭제 실행
		for(i=1; i<=z; i++) { // 트리의 높이만큼 반복 
			for(j=1; j<=z/2; j++) { // 자식 노드가 있는 노드만 힙정렬
				if(z%2==0 && j==z/2) { // 자식이 1개만 있을 경우 
					if(arr[j]>arr[j*2]) 
						SWAP(arr[j], arr[j*2]);
				}
				else {
					if(arr[j*2]>arr[j*2+1]) { // 오른쪽 자식 노드가 작을 경우 
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
		printf("\n%d번째", N-z+1);
		for(k=1; k<=z; k++)
			printf(" %d", arr[k]);
			
		prr[N-z+1]=arr[1]; // prr[1~N]까지 루트 노드 값 삽입 
		arr[1]=arr[z];
	}
	printf("\n");
	for(i=1; i<=N; i++)
		printf("%d ", prr[i]);
	return 0;
}
