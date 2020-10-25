#include <stdio.h>

/*
int main()
{
	int i; //	i라는 변수 선언  
	
	for (i=0; i<10; i++)
	//	i가 0부터 10까지 값이 1씩 올라간다.
	//	그 동안 명령문이 실행된다.
	//	i++ 외에도 i--와 i+=2와 같은 식이 들어갈 수 있다.
	//	for문을 벗어나기 직전까지의 수를 출력  
	
		printf("Let's go outside!\n");
		
	printf("이것은 i인가 j인가 %d", i);
	
		return 0;
}
*/

/*
int main()
{
	int i = 0;
	while(i<10)
	{
		i++;
		printf("나가자!\n");
	}
	printf("i = %d\n", i);
	
	return 0;
 } 
*/

/*
int main()
{
	int i;
	for("i = 0; i < 10; i++");
		printf("i = %d\n", i);
	//	for문 안의 인덱스 변수가 직접 변경되도록 건드리는 것은 안된다. 
	return 0;
}
*/

int main()
{
	int i;
	
	while(i<10)
	{
		printf("i = %d\n", i);
		i++;
	}
	return 0;
}





