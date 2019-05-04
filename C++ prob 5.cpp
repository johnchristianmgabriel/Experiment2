#include <iostream>

using namespace std;
int main()
{
	int counter;
	cout << "counting 1 to 10 then skip count by two till 30 is reached" << endl;
	for(counter=1;counter<=30;counter++)
	{
		if (counter==10)
		{
			counter + 2;
			continue;
		}
		cout << counter << endl;
	}
	return 0;
}
