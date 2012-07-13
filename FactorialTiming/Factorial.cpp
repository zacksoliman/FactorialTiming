#include "Factorial.h"


Factorial::Factorial(void)
{
}


Factorial::~Factorial(void)
{
}

unsigned long long int Factorial::recursive(unsigned int n)
{
	if (n == 0)
		return 1;
	
	return n * recursive(n-1);
 
}

unsigned long long int Factorial::iterative(unsigned int n)
{

	unsigned long long int result = 1;

	for (int i = 1; i<=n; i++)
		result *= i;

	return result;
}