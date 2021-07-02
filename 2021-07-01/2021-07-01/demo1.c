#include "stack.h"

test2(){

	SLink ls;
	InitLStack(&ls);
	PushL(&ls,1);
	PushL(&ls, 2);
	PushL(&ls, 3);
	PushL(&ls, 4);
	PushL(&ls, 5);
	PopL(&ls);
	PopL(&ls);

	ELEMTYPE s;
	GetLTop(&ls, &s);
	printf("%d\n", s);

}



test1(){

	SList ls;
	InitStack(&ls);
	Push(&ls,1);
	Push(&ls, 2);
	Push(&ls, 3);
	Push(&ls, 4);
	Pop(&ls);
	Pop(&ls);

	PrintStack(&ls);
	ELEMTYPE s;
	GetTop(&ls,&s);
	printf("%d\n",s);


}

int main(){
	test2();
	return 0;
}