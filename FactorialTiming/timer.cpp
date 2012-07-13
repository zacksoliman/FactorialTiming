#include "timer.h"
#include<iostream>


timer::timer(void)
{
	if(!QueryPerformanceFrequency(&Lint))
		std::cout<<"QueryPerformanceFrequency failed"<<std::endl;

	freq = (double)(Lint.QuadPart)/1000000000;	//get number of clock ticks per nanoseconds
}


timer::~timer(void)
{
}

void timer::StartTimer(void)
{
	QueryPerformanceCounter(&Lint);
	start_time = Lint.QuadPart;
}

double timer::GetTime(void)
{
	QueryPerformanceCounter(&Lint);

	return (((double)(Lint.QuadPart - start_time))/freq);
}