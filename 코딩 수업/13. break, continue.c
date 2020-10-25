/*
for, while, do-while과 같은 구조나
switch-case 구조에서 실행 중 break 명령문을 만나면 
'자신을 포한하고 있는 루프' 빠져나간다.


루프를 빠져나가는 것 뿐만 아니라
아예 루프 안에서 프로그램을 종료시키고 싶을때는
return 0; 


for(i=0; i<n; i++)
	if(i==1)
		break;
if조건을 만족하면 for문을 빠져나감
break문은 루프를 빠져나가는 거지
if문을 빠져나가는 것이 아님


for(i=0; i<10; i++)
	for(j=0; j<10; j++)
		if(j==1)
			break; 
if조건을 만족하면 for문을 빠져나감


continue
for, while, do-while와 같은 루프 구조의 실행문에서
continue명령문을 만나면 
그 이후의 문장들을 검사하지 않고 루프 조건 검사 지점으로 간다. 
*/

#include <stdio.h>

/*
int main()
{
	int i, sum=0;
	
	for(i=0; i<10; i++)
	{
		if(i%2==0)
			continue;
		sum += i;
	}
	printf("sum = %d", sum);
	
	return 0;
}
*/

/*
int main()
{
	int i=0, sum=0;
	
	while(i<10)
	{
		if(i==5) continue;
		printf("i == %d\n", i);
		sum+=i;
		i++;
	}
	printf("sum = %d", sum);
	
	return 0;
} 
while에서는 인덱스 값을 올려주는 명령문을 따로 써야 하기 때문에
continue를 쓸때 무한루프가 되지않도록 조심해야 한다.
*/

/*
int main()
{
	int i=1;
	
	while(i<5)
	{
		i++;
		if(i==3)
//			break;
			continue;
		printf("%d check!\n", i);
	}
	printf("finish");
	
	return 0;
 } 
*/
 
 int main()
 {
 	int a;
 	
 	while(1)
 	{
		printf("a의 값을 입력하시오.");
		
		scanf("%d", &a);
		
		switch(a)
		{
			case 1: printf("1\n");
				break;
				
			case 3: printf("3\n");
				continue;
				
			default: printf("0\n");
		}
	}
 }
// switch와 continue문은 상관이 없다. 
 
 
 
 
