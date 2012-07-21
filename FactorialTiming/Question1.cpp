#include <iostream>
#include "Factorial.h"
#include "timer.h"

using namespace std;

int main ()
{
	unsigned int n;
	unsigned long long int rec_fact, it_fact;
	timer time;

	while(true){

	cout << "Input an integer number: ";
	cin >> n;

	//First we call the recursive function
	//And compute the elapsed time

	time.StartTimer();
	rec_fact = Factorial::recursive(n);	
	double rec_time = time.GetTime();

	cout << "The result of the recursive factorial function is: " << endl 
		<< rec_fact << endl << "It took: " << rec_time << " nanoseconds to compute"<<endl<<endl;

	//Calling the iterative factorial function
	//and compute elapsed time

	time.StartTimer();
	it_fact = Factorial::iterative(n);
	double it_time = time.GetTime();

	cout << "The result of the iterative factorial function is: " << endl 
		<< it_fact << endl << "It took: " << it_time << " nanoseconds seconds to compute"<<endl<<endl;

	cout<<"The cost of a multiplication is: ";
	timer::StartTimer();
	int texample = 3*7;
	cout << timer::GetTime()<<" microseconds" << endl << endl;
	
	}


	system("PAUSE");


	return 0;
}