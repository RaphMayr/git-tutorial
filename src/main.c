#include <stdio.h>
#include <espl_lib.h>

int main()
{	
	char menu;	
	unsigned int input;
	char* output;

	menu = 'y';
	
	printf("Welcome!\n");

	while(menu == 'y')
	{ 
		printf("Please insert a number:");
		scanf("%d", &input);
		
		output = num_to_words(input);
		printf("corresponding Word:%s\n", output);

		printf("Would you like to insert another number ? (y/n):");
		scanf(" %c", &menu);
	}

	printf("Until next time.\n");

}