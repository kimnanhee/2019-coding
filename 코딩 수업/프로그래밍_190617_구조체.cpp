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
	} kim; // 구조체를 정의하는 동시에 변수 선언  
	
	strcpy(kim.name, "sang hyung"); // 오른쪽에 있는 값을 왼쪽에 복사  
	
	kim.age = 20;
	kim.height = 181.4;
	
	printf("이름 : %s, 나이 : %d, 키 : %.2f", kim.name, kim.age, kim.height);
}
*/


/*
struct nan // 구조체 정의  
{
	char name[10];
	int age;
	float height;
};
int main()
{
	struct nan kim; // 구조체 변수 선언  
	
	strcpy(kim.name, "sang hyung");   
	kim.age = 20;
	kim.height = 181.4; // 점으로 구조체 멤버에 접근하여 값 할당  
	
	printf("이름 : %s, 나이 : %d", kim.name, kim.age);
}
*/

/*
struct nannan // 구조체 정의  
{
	char name[10];
	int age;
	float height;
};
int main()
{
	struct nannan staff[] = 
	{
		{"난희", 16, 165},
		{"민영", 18, 155},
		{"초연", 17, 163},
		{"하연", 17, 159}
	};
	
	printf("이름:%s, 나이:%d", staff[3].name, staff[3].age);
	
	return 0;
 } 
*/

/*
struct human // 구조체 정의  
{
	char name[10];
	int age;
	float height;
};
int main()
{
	struct human kim = {"김난희", 16, 165.4};
	struct human *p = &kim;
	
	printf("이름 : %s\n", (*p).name); 
	printf("이름 : %s\n", p->name); // 둘이 같은 표현이다. 
}
*/


/*
struct shuman
{
	char name[10];
	int age;
	float height;
}; // 저자 정보  
struct sbook
{
	char title[20];
	int page;
	struct shuman author;
}; // 책 정보 
int main()
{
	struct sbook api = 
	{
		"C정복", 2100, {"김상형", 48, 178} // 구조체 안에 구조체  
	};
	printf("저자 = %s\n", api.author.name); // api안의 authot안의 name
	printf("장 = %d\n", api.page); 
}
*/

/*
struct shuman
{
	char name[10];
	int age;
	float height;
}; 
void outhuman(struct shuman some) // 함수의 인수로 구조체를 받을 수 있다. 
{
	printf("이름 : %s, 나이 : %d", some.name, some.age);
}
int main()
{
	struct shuman kim = {"김상형", 41, 182};
	outhuman(kim); 
} 
*/

struct shuman
{
	char name[10];
	int age;
	float height;
}; 
void outhuman(struct shuman *some) // 함수의 인수로 구조체를 받을 수 있다. 
{
	printf("함수 전 - 이름 : %s, 나이 : %d\n", some->name, some->age);
	some->age = 35; // 구조체의 값을 바꿀 수 있다.  
}
int main()
{
	struct shuman kim = {"김상형", 41, 182};
	outhuman(&kim); 
	printf("함수 후 - 이름 : %s, 나이 : %d", kim.name, kim.age);

} 













