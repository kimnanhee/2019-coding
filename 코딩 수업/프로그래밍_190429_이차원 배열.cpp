// 이차원 배열 
// 자료형 배열이름[새로크기][가로크기] = {{값, 값, 값}, {값, 값, 값}};

#include <stdio.h>

/*
int main()
// 이차원 배열의 크기 계산  
{
	int arr[3][4] = {0}; // 이차원 배열을 모두 0이초로 초기화  
	
	printf("%d\n", sizeof(arr)); // 48바이트 : 4바이트 크기의 요소가 12개 
	
	// 행의 요소를 구하려면 가로 한 줄의 크기를 구한뒤 요소의 크기로 나누면 된다. 
	int col = sizeof(arr[0]) / sizeof(int);
	printf("%d\n", col);
	
	// 열의 요소 개수는 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눈다.
	int row = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", row); 
}
*/


/*
int main()
// 이차원 배열의 값을 출력  
{
	int i, j;
	
	int arr1[2][3] = {{2, 4, 8}, {3, 6, 0}};
	
	int col = sizeof(arr1[0]) / sizeof(int); // 열의 개수  
	int row = sizeof(arr1) / sizeof(arr1[0]); // 행의 개수  
	
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
// 이차원 배열의 값을 거꾸로 출력  
{
	int i, j;
	
	int arr1[2][3] = {{2, 4, 8}, {3, 6, 0}};
	
	int col = sizeof(arr1[0]) / sizeof(int); // 열의 개수  
	int row = sizeof(arr1) / sizeof(arr1[0]); // 행의 개수  
	
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
// 다음 행열에서 주대각선 값만 출력하기  
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
// 행과 열을 전치해서 출력 => 전치 행열  
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
// 	배열로 문자열 출력하기   
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

//문자열 입력받을 때는 &표시를 뺀다. 
o
/*
int main()
// scanf로 문자열을 입력 받도록 변경  
{
	char s1[5];
	scanf("%s", s1);
	printf("%s", s1);
}
*/



int main()
// scanf를 이용하여 공백이 있는 문자열 출력하기  
{
	char s2[100];
	
	printf("문자열을 입력하시오!\n");
	
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
