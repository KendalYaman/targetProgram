#include <stdio.h>
#include <stdlib.h>

int main()
{
	/**
		FORKEND EST NECESSAIRE pour que le FORK puisse continuer
	**/
	//system("fork");
	

	int age = 0;
	
	
	printf("Hello, world! Quel age as tu ?\n");
	scanf("%d",&age);

	if (age >= 18)
	{
		char name[20];

		printf("Comment tu t'appelles ?\n");
		scanf("%s",name);


		printf("Tu t'appelles %s et tu as %d ans\n",name, age );
		return 1;
	}
	printf("Tu as %d ans\n", age );

	//system("pause"); //Cette partie permet de mettre en pause le syteme pour voir le resultat des entrées.
	//system("forkend");
	return 0;
}