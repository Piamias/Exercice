#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main()
{
	Perso player[2];
	int i;

	i = 0;
	while (i < 2)
	{
		id(player, i);
		i++;
	}
	i = 0;
	while (i < 2)
	{	
	printf("\nPlayer %d = \n%s\n%s\n%s\n%d\n%s\n",(i+1), player[i].fname, player[i].lname, player[i].nat, player[i].age, player[i].sex);
	i++;
	}
}
