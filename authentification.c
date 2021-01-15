#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main()
{
	char id[100];
	char pwd[100];

	printf("Enter an id\n");
	scanf("%s", id);
	printf("Enter an pwd\n");
	scanf("%s", pwd);
	if (identification3tries(id, pwd) == 5)
	{
		printf("Access unlock\n");
	}	
	else
	{
		printf("Account lock\n");
	}
}


