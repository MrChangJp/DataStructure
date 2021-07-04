#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20
#define ELEMTYPES int

typedef struct Que{
	ELEMTYPES* Q;
	int tag[2];
}Que;

void IniQQue(Que* q);
void AddRearQQue(Que* q, ELEMTYPES e);
void DelFrontQQue(Que* q);


