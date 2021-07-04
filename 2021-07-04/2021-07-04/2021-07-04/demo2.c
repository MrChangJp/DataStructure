#include "topic6.h"


test6(){

	QueLList ls;
	InitLList(&ls);
	AddQue(&ls , 1);
	AddQue(&ls, 12);
	AddQue(&ls, 13);
	AddQue(&ls, 14);
	AddQue(&ls, 15);
	AddQue(&ls, 16);
	DelQue(&ls);
	DelQue(&ls);
	DelQue(&ls);
	DelQue(&ls);
	ClearQue(&ls);
	printf("Is Not NULL : %d\n", EmptyQue(&ls));
}		   

//main(){
//	test6();
//}