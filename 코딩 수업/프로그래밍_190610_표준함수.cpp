#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))
#define delay(n) Sleep(n)
#define clrscr() system("cls")
#define gotoxy(x,y) { COORD Cur = {x, y}; \
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);}
#define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); }

/*
int main() 
{
	printf("floor(3.14) = %.2f\n", floor(3.14)); // 반내림  
	printf("ceil(3.14) = %.2f\n", ceil(3.14)); // 반올림  
	printf("floor(-3.14) = %.2f\n", floor(-3.14));
	printf("ceil(-3.14) = %.2f\n", ceil(-3.14));
	
	return 0;
}
*/

/*
double banollim(double a, int b)
{	
	a=a*pow(10, b); // pow 함수는 10을 b의 제곱으로 구해준다.  
	a=a+0.5; // a의 값에 0.5를 더한다.  
	a=floor(a); // a를 반내림 
	
	return a/pow(10, b); // a에 전에 곱한 값으로 나눈 값을 반환 
}
int main()
{
	double x=123.456789; 
	int i; 
	for(i=-2; i<6; i++)
		printf("%f에서의 %d자리의 반올림 = %f\n\n", x, i, banollim(x, i)); 
	
	return 0; 
}
*/

/*
int main()
{
	time_t now;
	
	time(&now);
	printf("현재 시간은 %s입니다.\n", ctime(&now)); 
	
	return 0;
}
*/

/*
int main()
{
	char Date[20];
	char Time[20];
	
	_strdate(Date);
	_strtime(Time);
	
	printf("날짜 : %s, 시간 : %s\n", Date, Time);
	
	return 0;
}
*/

/*
int main()
{
	clock_t t1, t2;
	t1=clock();
	for(int i=0; i<1000; i++)
		printf("%d번째 줄\n", i);
		
	t2=clock();
	double worktime=(t2-t1) / (double)CLOCKS_PER_SEC;
	printf("%f초 걸림\n", worktime);
	
	return 0;
}
*/

/*
int main()
{
	srand((unsigned)time(NULL));
	
	for(int i=0; i<5; i++)
		printf("%d\n", rand());
	return 0;
}
*/

/*
int main()
{
	int x=-1, y=-1;
	
	gotoxy(40, 12);
	
	putch('S');
	
	for(double angle=0; kbhit()==0; angle+=10)
	{
		gotoxy(40+x, 12+y); putch(' ');
		
		x=(int)(cos(angle*3.1416/180)*20);
		y=(int)(sin(angle*3.1416/180)*10);
		
		gotoxy(40+x, 12+y);	putch('O');
		
		delay(50);
	}
	return 0;
}
*/

//int main()
//{
//	char str1[10]="abcdefgi";
//	char str2[10]="123456789";
//	
//	strncpy(str2, str1, 3);
//	puts(str2);
//}
int main()
{
	char str1[10]="abcdefgi";
	char str2[10]="123456789";
	
	strncpy(str2+2, str1+3, 3);
	puts(str2);
}





