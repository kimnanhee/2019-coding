// ������ �迭 
// �ڷ��� �迭�̸�[����ũ��][����ũ��] = {{��, ��, ��}, {��, ��, ��}};

#include <stdio.h>

/*
int main()
// ������ �迭�� ũ�� ���  
{
	int arr[3][4] = {0}; // ������ �迭�� ��� 0���ʷ� �ʱ�ȭ  
	
	printf("%d\n", sizeof(arr)); // 48����Ʈ : 4����Ʈ ũ���� ��Ұ� 12�� 
	
	// ���� ��Ҹ� ���Ϸ��� ���� �� ���� ũ�⸦ ���ѵ� ����� ũ��� ������ �ȴ�. 
	int col = sizeof(arr[0]) / sizeof(int);
	printf("%d\n", col);
	
	// ���� ��� ������ �迭�� �����ϴ� ��ü ������ ���� �� ���� ũ��� ������.
	int row = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", row); 
}
*/


/*
int main()
// ������ �迭�� ���� ���  
{
	int i, j;
	
	int arr1[2][3] = {{2, 4, 8}, {3, 6, 0}};
	
	int col = sizeof(arr1[0]) / sizeof(int); // ���� ����  
	int row = sizeof(arr1) / sizeof(arr1[0]); // ���� ����  
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d", arr1[i][j]);
		}
		printf("\n");
	}
	return 0; 
}
*/


/*
int main()
// ������ �迭�� ���� �Ųٷ� ���  
{
	int i, j;
	
	int arr1[2][3] = {{2, 4, 8}, {3, 6, 0}};
	
	int col = sizeof(arr1[0]) / sizeof(int); // ���� ����  
	int row = sizeof(arr1) / sizeof(arr1[0]); // ���� ����  
	
	for(i=row-1; i>=0; i--)
	{
		for(j=col-1; j>=0; j--)
		{
			printf("%d", arr1[i][j]);
		}
		printf("\n");
	}
	return 0; 
}
*/


/*
int main()
// ���� �࿭���� �ִ밢�� ���� ����ϱ�  
{
	int i, j;
	int matrix[5][5] = 
	{{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11, 12, 13, 14, 15},
	{16, 17, 18, 19, 20},
	{21, 22, 23, 24, 25}};
	
	int row = sizeof(matrix) / sizeof(matrix[0]);
			
	for(i=0; i<row; i++)
		printf("%d\t", matrix[i][i]);
	
	return 0;
}
*/


/*
int main()
// ��� ���� ��ġ�ؼ� ��� => ��ġ �࿭  
{
	int i, j;
	int arr[5][5];
	
	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			scanf("%d", &arr[i][j]);
			
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
*/


/*
int main()
// 	�迭�� ���ڿ� ����ϱ�   
{
	char s[10] = "HELLO";
	printf("%s\n", s);
	
	return 0; 
} 
*/


/*
int main()
{
	char s[10] = "HELLO";
	
	printf("%c\n", s[1]);
	printf("%c\n", s[2]);
	printf("%c\n", s[3]);
	
	s[0] = 'A';
	printf("%s", s);
} 
*/

//���ڿ� �Է¹��� ���� &ǥ�ø� ����. 
o
/*
int main()
// scanf�� ���ڿ��� �Է� �޵��� ����  
{
	char s1[5];
	scanf("%s", s1);
	printf("%s", s1);
}
*/



int main()
// scanf�� �̿��Ͽ� ������ �ִ� ���ڿ� ����ϱ�  
{
	char s2[100];
	
	printf("���ڿ��� �Է��Ͻÿ�!\n");
	
	scanf("%[^\n]s", s2);
	printf("%s", s2);
	
	return 0;
}


/*
int main()
{
	char s3[100] = {"Beethoven\n9th\nsymphny"};
	printf("%s\n", s3);
	
	return 0;
}
*/


/*
int main()
{
	int i, j;
	int matrix[6][6] = {0};
	int matrixi, matrixj;
	
	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			scanf("%d", &matrix[i][j]);
			
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(i<5 && j<5)
			printf("%3d", matrix[i][j]);
			
			else printf("  0");
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(i==5) 
			{
				{
					matrixi += matrix[5][j];
				}
				printf("%3d", matrix[5][matrixi]);
			}
			
			
			else if(j==5) 
			{
				{
					matrizj += matrix[i][5];
				}
				printf("%3d", matrix[matrizj][5]);
			}
			
			else printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
*/
