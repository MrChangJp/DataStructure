#include <stdio.h>
#include <stdlib.h>


/*

n+l 当m=O时
Ack(m,n) =�Ack(m -1, 1) 当m "'F-0,n=O时
Ack(m -1, Ack(m, n -1))当m -ct:-0,n-ct:- 0时

*/

int Ack(int m,int n){

	if (m == 0){
		n = n + 1;
		return n;
	}
	if (m != 0 && n == 0){
		return Ack(m - 1, n);
		
	}
	else 
		Ack(m - 1, Ack(m, n - 1));

}

