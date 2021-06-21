#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#define row  4
#define column 4
#define len (((1+row-1)*(row-1))/2+ column)
//对称矩阵压缩（包括对角线）、三角矩阵压缩
test1(){
	int arr[4][4] = { 
						{ 1, 0, 0, 0 },
						{ 2, 3, 0, 0 },
						{ 4,5,6,0 },
						{6,7,8,9 }
					};
	
	int contractionArr[len+1] = { 0 };
	contractionArr[len] = 0;
	int index = 0;
	int i = 0;
	int j = 0;
	for (; i < row; i++){
		for (j=0; j <= i; j++){
			contractionArr[index++] = arr[i][j];
		}
	}
	//获得元素
	int x = 2;
	int y = 2;

	if (x >= 0 && x <= row && y >= 0 && y <= column){
		int val = -1;
		if (y>x) val = contractionArr[len];
		int index = ((1 + (x - 1))*(x - 1)) / 2 + y;
		val = contractionArr[index-1];
		printf("%d\n", val);
	}



}

//三角矩阵，三角在上面
test3(){

	int arr[4][4] = {
		{ 1, 2, 3, 4 },
		{ 0, 3, 4, 5 },
		{ 0, 0, 5, 6 },
		{ 0, 0, 0, 7 }
	};

	int contractionArr[len + 1] = { 0 };
	contractionArr[len] = 0;
	int index = 0;
	int i = 0;
	int j = 0;
	for (; i < row; i++){
		for (j = i; j < column; j++){
			contractionArr[index++] = arr[i][j];
		}
	}

	//获得元素
	int x = 2;
	int y = 2;

	if (x >= 1 && x <= row && y >= 1 && y <= column){
		int val = -1;
		if (y<x) val = contractionArr[len];
		else{
			int indexs = ((row+(row-(x-1)+1))*(x-1)) / 2 + y - x+1;
			int val = 0;
			val = contractionArr[indexs-1];
			printf("%d\n", val);
		}

		
	}



}

int GetColumn(int* arr){

	int columns = 0;
	while (arr[columns++]);
	return columns;
}

int GetRow(int** arr){
	int rows = 0;
	while (arr[rows++][0]);
	return rows;
}

//对角矩阵
test4(){
	int arr[][6] = {
					{ 8, 2, 3, 0, 0, 0 },
					{ 4, 2, 0, 3, 0, 0 },
					{ 5, 7, 7, 6, 8, 0 },
					{ 0, 9, 6, 9, 1, 5 },
					{ 0, 0, 6, 1, 4, 2 },
					{ 0, 0, 0, 2, 8, 3 } 
					};
	int n = 6;
	int rows = GetRow(arr);
	int columns = GetRow(*arr);
	int columnsLen = n - rows;

	int lens =  (n - 1 + n - rows + 1) + n;

	int** str = (int**)malloc(sizeof(sizeof(int))*(columnsLen*n));

	int i = -columns;

	while (i < rows){
		int trueRowIndex = i + 2;
		int trueColumnIndex = columns;
		while (trueColumnIndex < n){
			str[trueRowIndex++][trueColumnIndex++] = arr[trueRowIndex][trueColumnIndex];
		}


		i++;




		


	}



}
main(){
	test4();
}