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
	printf("floor(3.14) = %.2f\n", floor(3.14)); // �ݳ���  
	printf("ceil(3.14) = %.2f\n", ceil(3.14)); // �ݿø�  
	printf("floor(-3.14) = %.2f\n", floor(-3.14));
	printf("ceil(-3.14) = %.2f\n", ceil(-3.14));
	
	return 0;
}
*/

/*
double banollim(double a, int b)
{	
	a=a*pow(10, b); // pow �Լ��� 10�� b�� �������� �����ش�.  
	a=a+0.5; // a�� ���� 0.5�� ���Ѵ�.  
	a=floor(a); // a�� �ݳ��� 
	
	return a/pow(10, b); // a�� ���� ���� ������ ���� ���� ��ȯ 
}
int main()
{
	double x=123.456789; 
	int i; 
	for(i=-2; i<6; i++)
		printf("%f������ %d�ڸ��� �ݿø� = %f\n\n", x, i, banollim(x, i)); 
	
	return 0; 
}
*/

/*
int main()
{
	time_t now;
	
	time(&now);
	printf("���� �ð��� %s�Դϴ�.\n", ctime(&now)); 
	
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
	
	printf("��¥ : %s, �ð� : %s\n", Date, Time);
	
	return 0;
}
*/

/*
int main()
{
	clock_t t1, t2;
	t1=clock();
	for(int i=0; i<1000; i++)
		printf("%d��° ��\n", i);
		
	t2=clock();
	double worktime=(t2-t1) / (double)CLOCKS_PER_SEC;
	printf("%f�� �ɸ�\n", worktime);
	
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





