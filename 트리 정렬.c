// 트리모양 정렬 
#include <stdio.h>
#define SWAP(a, b) { int tmp=a; a=b; b=tmp; }
int arr[100], prr[100];
int main()
{
	int t, copyt, i, j, z, k;
	printf("입력하실 자료의 개수를 입력해주세요 : ");
	scanf("%d", &t);
	copyt=t;
	printf("\n자료를 하나씩 입력해주세요 : ");
	for(i=1; i<=t; i++) 
		scanf("%d", &arr[i]); 
	
	for(z=t; z>=1; z--) { // t번만큼 루트 삭제 실행 
		for(i=1; i<=z; i++) { // 정렬 
			if(i%2==1) {
				for(j=1; j<=z/2; j++)
					if(arr[j]>(arr[j*2]>arr[j*2+1] ? arr[j*2+1]:arr[j*2])) SWAP(arr[j], (arr[j*2]>arr[j*2+1] ? arr[j*2+1]:arr[j*2]));
			}
			else {
				for(j=1; j<=z/2; j++)
					if(arr[j]>arr[j*2]) SWAP(arr[j], arr[j*2]);
			}
		}
		printf("\n%d번째", t-z+1);
		for(k=1; k<=z; k++)
			printf(" %d", arr[k]);
			
		prr[t-z+1]=arr[1]; // prr[1~t]까지 루트 노드 값 삽입 
		arr[1]=arr[z];
	}
	
	printf("\n");
	for(i=1; i<=copyt; i++) 
		printf("%d ", prr[i]);
	return 0;
}
