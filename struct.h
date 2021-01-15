#include <stdio.h>
#include <stdlib.h>

typedef	struct Perso Perso;
struct Perso
{
	char fname[100];
	char lname[100];
	char nat[100];
	
	int age;
	char sex[100];
};

void id(Perso player[], int i);
int identification3tries(char array1[],char array2[]);

