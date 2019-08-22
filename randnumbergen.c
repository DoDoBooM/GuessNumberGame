#include "randnumbergen.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
static unsigned int number;
static unsigned int guesscount;
void gennumber()
{
	number = rand();
	while(number > 100)
		number /= 10;
	guesscount = 0;
	printf("Random Number Generated.\n");
}

bool guess(unsigned int guess)
{
	guesscount++;
	if(guess < number)
	{
		printf("%u is less than the random number.\n", guess);
		return false;
	}
	else if(guess > number)
	{
		printf("%u is greater than the random number.\n", guess);
		return false;
	}
	else
	{
		printf("Bingo! After %d guesses you guessed the random number is %u\n", guesscount, number);
		return true;
	}
}

unsigned int getnumber()
{
	return number;
}