#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main()
{		
	Perso player[5];
	int i;

	i = 0;
	while (i < 5)
	{
		id(player, i);
		i++;
	}
	i = 0;
	while (i < 5)
	{	
	printf("\nPlayer %d = \nFirst name = %s\nLast name = %s\nNationality = %s\nAge = %d\nSexe = %s\n",(i+1), player[i].fname, player[i].lname, player[i].nat, player[i].age, player[i].sex);
	i++;
	}
}
