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
#define putchxy(x, y, c) {gotoxy(x, y); putch(c);} // ���� �ϳ��� ���  
#define putsxy(x, y, c) {gotoxy(x, y); puts(c);} // �� ���  

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
}; // ��������  

char ns[18][21]; // ������ ��������  
int nx, ny; // ������� ��ġ�� ����   

int main()
{
	int ch; // Ű����� �Է¹��� Ű���� �����ϴ� ����  
	int x, y; // x, y ��ġ ��ǥ�� ǥ��  
	int dx, dy; 
	BOOL bEND;
	
	showcursor(FALSE);
	
	memcpy(ns, arStage, sizeof(ns)); // �޸� ī�� (������ ��, ������ ����, ũ��) 
	
	for(y=0; y<18; y++)
	{
		for(x=0; x<21; x++)
		// ������� ��ġ�� ã�´� 
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
	putsxy(45, 4, "ESC : ��������");
	
	// ���� ���� ���� 
	for(;;) // ȭ���� �׸���.  
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




