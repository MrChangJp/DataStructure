#include "topic7.h"

test7(){
	QQue q;
	InitQQue(&q);
	AddQQue(&q,1);
	AddQQue(&q, 12);
	AddQQue(&q, 13);
	AddQQue(&q, 14);
	AddQQue(&q, 15);
	DelQQue(&q);
	DelQQue(&q);
	DelQQue(&q);
	DelQQue(&q);
	DelQQue(&q);
	printf("Is Empty : %d\n",EmptyQueue(&q));
	printf("Is FULL : %d\n", FullyQueue(&q));
	

}

//int main(){
//	test7();
//	return 0;
//}