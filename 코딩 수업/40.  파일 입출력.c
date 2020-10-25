/*
[파일 입출력]

파일 입풀력의 기본 과정

1. 파일 포인터 선언 
format : FILE *변수이름;

2. fopen()함수로 파일 열기(스트림을 생성)
format : 변수이름 = fopen("파일이름", "open made"); 
이 떄 파일은 작성한 C언어 프로그램과 같은 폴더에 있어야 한다. 
그렇지 않으면 절대경로를 지정해주어야 한다.  

3. 파일 처리 함수로 파일의 내용을 읽거나 파일에 내용을 쓰기
 fputc(), fgetc()
 
4. fclose()함수로 파일 닫기
format : fclose(파일이름) 
*/


#include <stdio.h>

/*
int main()
{
	FILE *fp;
	fp = fopen("a.txt", "w");
	
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	
	fclose(fp); // 이 파일이 있던 곳에 abc가 저장된 a.txt파일이 만들어졌다.  
	
	char s[20];
	fp = fopen("a.txt", "r");
	fgets(s, 20, fp);
	
	printf("file contect : %s", s); // abc가 출력된다.  
	
	return 0;
}
*/

int main()
{
	FILE *fp;
	
	char st[20];
	fp = fopen("mission.txt", "r");
	fgets(st, 20, fp);
	
	printf("미션 : %s", st);
	
	return 0; 
}

/*
[파일 입출력 모드]

r - 읽기 모드
파일의 처음부터 읽기(파일이 없을 경우 -> 에러)

w - 쓰기 모드
파일의 처음부터 쓰기, 기존에 내용이 있으면 내용이 지워진다.
파일이 없으면 생성

a - 추가 모드
기존의 파일 끝에 쓰기

r+, w+, a+
+기호가 들어가면 읽기와 쓰기가 모두 가능한 모드로 파일을 오픈 
*/
