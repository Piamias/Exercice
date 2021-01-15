#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int identification3tries(char array1[],char array2[])
{
	char yourid[100];
	char yourpwd[100];
	int i;

	i = 0;
	while (i < 3)
	{
		printf("Enter your id\n");
		scanf("%s", yourid);
		printf("Enter your pwd\n");
		scanf("%s", yourpwd);
		if (strcmp(array1, yourid) == 0 && strcmp(array2, yourpwd) == 0)
		{
			i = 5;
		}
		else
		{
			int b;

			b = 2 - i;	
			printf("Wrong id or pwd\n%d more attempt\n\n",b);
			i++;
		}
	}
	return i;
}

