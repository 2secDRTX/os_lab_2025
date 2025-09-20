#include "swap.h"
#include <stdio.h>

void Swap(char *left, char *right)
	{
		char temp = *right;
		*right=*left;
		*left = temp;
	}