#pragma once
class Factorial
{
public:
	Factorial(void);
	~Factorial(void);

	static unsigned long long int recursive(unsigned int n);
	static unsigned long long int iterative(unsigned int n);
};

