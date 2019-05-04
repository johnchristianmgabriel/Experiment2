#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1, num2;
	string fibonacci,a;
	num1=1;
	num2=2;
	
	cout << "0,1" << endl;
	cout << "to get the 20 next fibonacci numbers, type in fibonacci."<< endl;
	cin >> a;
	if (a = fibonacci)
	{
		cout << "1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946" << endl;
	}
	else
	{
		cout << "Type in fibonacci to get the next 20 numbers"<< endl;
	}
	return 0;
}
