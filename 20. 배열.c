//sizeof�� �Ἥ �迭 ũ�� Ȱ���ϱ�

/*

int arr1[5] = {1, 2, 3, 4, 5}; 
int i;

for(i=0; i<5; i++)
	printf("%3d",  arr1[i]); // ����ϱ� �� ������ 3����Ѵ�.
	// �迭�� 5�� ��Ҹ� �����.
	// ���ڱ� arr1�� ũ�Ⱑ Ŀ���� �迭 ��Ұ� �������ٸ� 
	
int arr2[10] = {5, 6, 7, 8, 9, 1, 2, 3, 4, 5};

for(i=0; i<sizeof(arr2)/sizeof(int); i++) // int���� �ϳ��� 4�̹Ƿ�  
	printf("%3d", arr2[i]);
	
//for ������ �� �̽ļ� 
int arr2_size = sizeof(arr2)/sizeof(int);

printf("\n\narr2's size = %d\n", arr2_size);
for(i=0; i<arr2_size; i++)
	printf("%3d", arr[i]);

*/
	
// arr2_size ������ arr2�� ũ�� ���� �־��ش�
// for������ i �ε��� ���� 0���� arr2_size�� ������
// �����Ͽ� arr2�� ��Ҹ� ��� ����Ѵ�.

// �迭�� �ּҰ� 0���� �����ϴ� ������
//  �޸� �ּҰ� 0���� �����ϴ� ������ ������ ����

// ���ڹ迭����� 
 
#include <stdio.h>

int main()
{
	char str1[5] = "fire";
	char str2[4] = {'b', 'i', 'g', '\0'};
	
	printf("%c\n", str1[3]); // e���  
	printf("%c\n", str2[2]); // g���  
	
	printf("%s\n", str1); // ��ü ���  
	printf("%s\n", str2);
	
	int i;
	for(i=0; i<sizeof(str2); i++);
	 
	printf("\n");
	
	for(i=0; i<str2[i]!=NULL; i++) 
	// str2[i]�� NULL�� �ƴϸ� ����� �ϰ�, NULL�̸� ����� �����.  
		printf("%c", str2[i]);
		
	return 0;
}
