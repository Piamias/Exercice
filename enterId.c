#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void id(Perso player[], int i)
{
	printf("\nplayer[%d] enter your first name\n", (i + 1));
	scanf("%s", player[i].fname);
	printf("\nPlayer[%d] enter your last name\n", (i + 1));
	scanf("%s", player[i].lname);
	printf("\nPlayer[%d] enter your nationnality\n",(i + 1));
	scanf("%s", player[i].nat);
	printf("\nPlayer[%d] enter your age\n",(i + 1));
	scanf("%d", &player[i].age);
	printf("\nPlayer [%d] enter your sexe\n",(i + 1));
	scanf("%s", player[i].sex);
}
