#include <stdio.h>

void func1();
int func2(int a, int b, int c);
void func3();
int h, m, s; // �������� ����  

int main()
{
    int num; // �������� ���� main�Լ� �������� ��� ����   
    func1(); // �Լ�1 ȣ��  
    printf("��: %d, ��: %d, ��: %d\n", h,m,s); 
    num = h+m+s;
    printf("��+��+�� : %d\n",num);
    func3(); // �Լ�3 ȣ��  
    printf("�Է��� �ð��� �ʷ� �ٲٸ� : %d\n",func2(h,m,s));
    return 0; // 0�� ��ȯ�ϰ� ����  
}
void func1() // ��ȯ���� ���� �Լ�  
{
    printf("���� �ð��� �Է��ϼ��� : (��, ��, ��)\n");
    func3(); // �Լ�3 ȣ��  
    scanf("%d%d%d",&h,&m,&s); //  ���������� �Է¹��� ���� ����  
    func3(); // �Լ�3 ȣ��  
}
int func2(int a, int b, int c) //  ������ ��ȯ���� �ִ� �Լ�, ���� �Լ��� �Ѱ��ش�.  
{
    int second; // �������� second����  
    second = a*60*60 + b*60 + c; // �ʸ� ���ؼ� second�� ����  
    return second; // second�� ���� ��ȯ  
}
void func3()
{
    printf("- - - - - - - - - - - - - - - - - - -\n"); // 
}
