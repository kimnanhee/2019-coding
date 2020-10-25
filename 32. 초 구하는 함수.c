#include <stdio.h>

void func1();
int func2(int a, int b, int c);
void func3();
int h, m, s; // 전역변수 선언  

int main()
{
    int num; // 지역변수 선언 main함수 내에서만 사용 가능   
    func1(); // 함수1 호출  
    printf("시: %d, 분: %d, 초: %d\n", h,m,s); 
    num = h+m+s;
    printf("시+분+초 : %d\n",num);
    func3(); // 함수3 호출  
    printf("입력한 시간을 초로 바꾸면 : %d\n",func2(h,m,s));
    return 0; // 0을 반환하고 종료  
}
void func1() // 반환값이 없는 함수  
{
    printf("현재 시간을 입력하세요 : (시, 분, 초)\n");
    func3(); // 함수3 호출  
    scanf("%d%d%d",&h,&m,&s); //  전역변수에 입력받은 값을 저장  
    func3(); // 함수3 호출  
}
int func2(int a, int b, int c) //  정수형 반환값이 있는 함수, 값을 함수에 넘겨준다.  
{
    int second; // 지역변수 second선언  
    second = a*60*60 + b*60 + c; // 초를 구해서 second에 대입  
    return second; // second의 값을 반환  
}
void func3()
{
    printf("- - - - - - - - - - - - - - - - - - -\n"); // 
}
