#include <iostream>
#include <conio.h>
//Simple Interst
using namespace std;

int main()
{
	double principle,rate,time;
	cout<<"Enter The Principle Amount:";
	cin>>principle;
	cout<<"Enter The Rate Of Interest: %";
	cin>>rate;
	cout<<"Enter The time: years";
	cin>>time;
	
	double result=(principle*rate*time)/100;
	cout<<"The Simple interest amount is:"<<result;
	getch();
	return 0;
}
