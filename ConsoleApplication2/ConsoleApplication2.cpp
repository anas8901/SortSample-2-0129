#include <iostream>
using namespace std;
int main()
{
	int a = 100, b = 80, c = 120;
	int high = 0; 
	int low = a;
	if (a>high)
	{
		high = a;
	}

	if (b > high)
	{
		high = b;
	}

	if (c > high)
	{
		high = c;
	}

	cout << "The highest number is ==> " << high << endl;

	if (a < low)
	{
		low = a;
	}
	if (b < low)
	{
		low = b;
	}

	if (c < low)
	{
		low = c;
	}
	cout << "The lowest number is ==> " << low << endl;
}