#include <stdio.h>
#include <string.h>

/*
int main()
{
	struct
	{
		char name[10];
		int age;
		float height;
	} kim; // ����ü�� �����ϴ� ���ÿ� ���� ����  
	
	strcpy(kim.name, "sang hyung"); // �����ʿ� �ִ� ���� ���ʿ� ����  
	
	kim.age = 20;
	kim.height = 181.4;
	
	printf("�̸� : %s, ���� : %d, Ű : %.2f", kim.name, kim.age, kim.height);
}
*/


/*
struct nan // ����ü ����  
{
	char name[10];
	int age;
	float height;
};
int main()
{
	struct nan kim; // ����ü ���� ����  
	
	strcpy(kim.name, "sang hyung");   
	kim.age = 20;
	kim.height = 181.4; // ������ ����ü ����� �����Ͽ� �� �Ҵ�  
	
	printf("�̸� : %s, ���� : %d", kim.name, kim.age);
}
*/

/*
struct nannan // ����ü ����  
{
	char name[10];
	int age;
	float height;
};
int main()
{
	struct nannan staff[] = 
	{
		{"����", 16, 165},
		{"�ο�", 18, 155},
		{"�ʿ�", 17, 163},
		{"�Ͽ�", 17, 159}
	};
	
	printf("�̸�:%s, ����:%d", staff[3].name, staff[3].age);
	
	return 0;
 } 
*/

/*
struct human // ����ü ����  
{
	char name[10];
	int age;
	float height;
};
int main()
{
	struct human kim = {"�賭��", 16, 165.4};
	struct human *p = &kim;
	
	printf("�̸� : %s\n", (*p).name); 
	printf("�̸� : %s\n", p->name); // ���� ���� ǥ���̴�. 
}
*/


/*
struct shuman
{
	char name[10];
	int age;
	float height;
}; // ���� ����  
struct sbook
{
	char title[20];
	int page;
	struct shuman author;
}; // å ���� 
int main()
{
	struct sbook api = 
	{
		"C����", 2100, {"�����", 48, 178} // ����ü �ȿ� ����ü  
	};
	printf("���� = %s\n", api.author.name); // api���� authot���� name
	printf("�� = %d\n", api.page); 
}
*/

/*
struct shuman
{
	char name[10];
	int age;
	float height;
}; 
void outhuman(struct shuman some) // �Լ��� �μ��� ����ü�� ���� �� �ִ�. 
{
	printf("�̸� : %s, ���� : %d", some.name, some.age);
}
int main()
{
	struct shuman kim = {"�����", 41, 182};
	outhuman(kim); 
} 
*/

struct shuman
{
	char name[10];
	int age;
	float height;
}; 
void outhuman(struct shuman *some) // �Լ��� �μ��� ����ü�� ���� �� �ִ�. 
{
	printf("�Լ� �� - �̸� : %s, ���� : %d\n", some->name, some->age);
	some->age = 35; // ����ü�� ���� �ٲ� �� �ִ�.  
}
int main()
{
	struct shuman kim = {"�����", 41, 182};
	outhuman(&kim); 
	printf("�Լ� �� - �̸� : %s, ���� : %d", kim.name, kim.age);

} 













