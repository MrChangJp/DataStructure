#define _CRT_SECURE_NO_WARNINGS
#include "topic1.h"

int IsHuiwen(char str[20]){

	SList sl;
	InitListT(&sl);
	int len = strlen(str);
	int i = 0;
	for (; i < len / 2; i++){
		ListPushT(&sl, str[i]);
	}

	if (len % 2){
		i++;
	}

	while (!EmptyList(&sl)){
		ELEMTYPE tmp = ListPopTs(&sl);

		if (tmp != str[i]) return 0;
		else i++;

	}

	return 1;

}

test1(){

	int n = IsHuiwen("abcefgdgfecba");
	if (n){
		puts("是回数");
	}
	else{
		puts("不是回数");
	}

}

void InputStack(){

	SList ls;
	InitListT(&ls);
	int num = 0;
	while (!FullList(&ls)){
		puts("请输入正数数列:");
		scanf("%d", &num);
		if (num == -1){
			if (EmptyList(&ls)){
				puts("栈空，不能再出栈！");
			}
else
			printf("Pop Val : %d\n", ListPopTs(&ls));
		}
		else{
			ListPushT(&ls, num);
		}

	}
	puts("栈满！退出程序！");
}

test2(){

	InputStack();

}

char* swapString(float num1){
	char* ch[10] = {'\0'};
	sprintf(ch,"%.2f",num1);
	return ch;
}

void CountFunc(char * str){
	SChar chars;
	InitListTs(&chars);
	SList nums;
	InitListT(&nums);


	char arr[30] = { ' ' };
	char* i = NULL;
	
	for (i = strtok(str, " "); i != "$"; i = strtok(NULL, " ")){
		
		

		if (i == '+' || i == '-' || i == '*' || i == '/'){
			/*if (EmptyList(&chars)){
				ListPushT(&chars, (int)i);
			}else{
				char c = (char)GetTop(&chars);
				if (c == '*' || c == '/'){
					int num1 = 
				}
			}*/

			ListPushT(&chars, i);

		}
		else{
			char* c = GetTop(&chars);
			if (c != NULL){
				int num1 = (int)ListPopTs(&nums);
				if (c == '*' ){
					
					int val = num1 * (int)i;
					ListPushT(&nums,val);
				}
				else if ( c == '/'){
					float val = num1 / (int)i;
					val += num1 % (int)i;
					ListPushT(&nums, swapString(val));
				}
			}
			
			ListPushT(&nums, i);
			
		}

		while (nums.top - nums.base != 1){

			char c = (char)ListPopTs(&chars);
			int num1 = (int)ListPopTs(&nums);
			int num2 = (int)ListPopTs(&nums);
			if (c == '+'){
				int val = num1 + num2;
				ListPushT(&nums, (char*)val);
			}
			else if(c == '-'){
				int val = num1 - num2;
				ListPushT(&nums, (char*)val);
			}

		}

		printf("最终结果：%f", GetTop(&nums));
	}
}

test3(){
	
	char str[30] = { ' ' };
	gets(str);
	CountFunc(str);




}



//
//int main(){
//	test3();
//	return 0;
//}