#include "topic8.h"

test9(){
	Que q;
	IniQQue(&q);
	AddRearQQue(&q, 1);
	AddRearQQue(&q, 12);
	AddRearQQue(&q, 13);
	AddRearQQue(&q, 14);
	AddRearQQue(&q, 15);
	DelFrontQQue(&q);
	DelFrontQQue(&q);
	DelFrontQQue(&q);
	DelFrontQQue(&q);
	DelFrontQQue(&q);
	


}

int main(){
	test9();
	return 0;
}