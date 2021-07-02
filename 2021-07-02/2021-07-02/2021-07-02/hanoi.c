#include <stdio.h>
static int count = 0;

void Move(char a,char c){

	printf("µÚ%d²½ÒÆ¶¯:%c -> %c\n\n",++count,a,c);

}

void Hanoi(int n,char a,char b,char c){

	if (n == 1) Move(a,c);
	else{
		Hanoi(n - 1, a, c, b);
		Move(a, c);
		Hanoi(n - 1, b, a, c);
	}
	


}

int main(){
	
	Hanoi(7,'a','b','c');
	return 0;
}