#include "topic.h"


SqList test10(SqList l1 ,ELEMTYPE e){
	int i = 0;
	int i2 = i;
	while ( i < l1->length)
	{
		if (l1->data == e){
			i++;
			continue;
		}
		i2++;
		i++;
	}
	l1->length = i2;
	
}