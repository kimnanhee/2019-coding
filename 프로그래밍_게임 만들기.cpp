#include <stdio.h>
#include <conio.h>
#include <windows.h>
//#include <cursor.h>
#include <time.h>

#define ESC 27
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define putchxy(x, y, c) {gotoxy(x, y); putch(c);} // 문자 하나만 출력  
#define putsxy(x, y, c) {gotoxy(x, y); puts(c);} // 다 출력  

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))
#define delay(n) Sleep(n)
#define clrscr() system("cls")
#define gotoxy(x,y) { COORD Cur = {x, y}; \
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);}
#define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); }

char arStage[18][21] = {
    "####################",
    "####################",
    "####################",
    "#####   ############",
    "#####O  ############",
    "#####  O############",
    "###  O O ###########",
    "### # ## ###########",
    "#   # ## #####  ..##",
    "# O  O   @      ..##",
    "##### ### # ##  ..##",
    "#####     ##########",
    "####################",
    "####################",
    "####################",
    "####################",
    "####################",
    "####################"
}; // 스테이지  

char ns[18][21]; // 복사한 스테이지  
int nx, ny; // 사용자의 위치를 저장   

int main()
{
	int ch; // 키보드로 입력받은 키값을 저장하는 변수  
	int x, y; // x, y 위치 좌표를 표현  
	int dx, dy; 
	BOOL bEND;
	
	showcursor(FALSE);
	
	memcpy(ns, arStage, sizeof(ns)); // 메모리 카피 (복사할 곳, 복사할 내용, 크기) 
	
	for(y=0; y<18; y++)
	{
		for(x=0; x<21; x++)
		// 사용자의 위치를 찾는다 
		{
			if(ns[y][x]=='@')
			{
				nx = x;
				ny = y;
				ns[y][x] = ' ';
			} 
		}
	} 
	clrscr();
	putsxy(45, 2, "SOKOBAN");
	putsxy(45, 4, "ESC : 게임종료");
	
	// 게임 진행 루프 
	for(;;) // 화면을 그린다.  
	{
		for(y=0; y<18; y++)
		{
			putsxy(0, y, ns[y]); 
		}
		putchxy(nx, ny, '@');
	} 
	
	ch = getch();
	if(ch==0xE0 || ch==0)
	{
		ch = getch();
	}
	
}




