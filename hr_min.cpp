#include <iostream>
using namespace std;
int  main()
{
	int time,hour,min;
	cout << "Enter a time in minutes: ";
	cin >> time;
	hour = time/60;
	min = time%60;
	cout<<hour<<" hours "<<min<<" minutes ";
	return 0;
}
