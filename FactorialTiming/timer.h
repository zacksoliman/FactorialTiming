#pragma once

#include<windows.h>
class timer


{
public:
	timer(void);
	virtual ~timer(void);

	static void StartTimer(void);
	static double GetTime(void);

private:

	static LARGE_INTEGER Lint;
	static double freq;
	static long long start_time;
};

