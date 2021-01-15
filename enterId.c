#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void id(Perso player[], int i)
{
	printf("\nEnter your first name\n");
	scanf("%s", player[i].fname);
	printf("\nEnter your last name\n");
	scanf("%s", player[i].lname);
	printf("\nEnter your nationnality\n");
	scanf("%s", player[i].nat);
	printf("\nEnter your age\n");
	scanf("%d", &player[i].age);
	printf("\nEnter your sexe\n");
	scanf("%s", player[i].sex);
}
