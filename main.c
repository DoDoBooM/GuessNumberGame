#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include "randnumbergen.h"
int main(int argc, char* argv[])
{
	unsigned int number;
	bool guessed = false;
	srand((unsigned int)time(NULL));
	printf("Enter Y to play guess a number! N to Quit!\n");
	while(getchar() == 'Y')
	{
		gennumber();
		printf("Enter your guess! Q to quit.\n");
		while(scanf("%u", &number) == 1)
		{
			if(guess(number))
			{
				guessed = true;
				while(getchar() != '\n')
					continue;
				printf("Enter Y to play guess a number!\n");
				break;
			}
			else
			{
				printf("Enter your guess! Q to quit.\n");
				guessed = false;
			}
		}
		if(!guessed)
		{
			printf("The random number is %d.\n", getnumber());
		}

	}
	printf("Bye\n");
	return 0;
}