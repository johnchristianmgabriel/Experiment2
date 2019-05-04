#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	double demandcharge , consumptioncharge , time , meterreadings , latecharge, result;
	
	demandcharge = 35;
	consumptioncharge = 1.10;
	latecharge = 20;
	
	cout << "Hello, this Program can calculate your Water Bills.\n";
	cout << "Please Give The Neccessary Informaion so That Your Water Bill Can Be Calculated.\n";
	
	cout << "How Long Have You Been Using The Water Providing Companys Services.\n";
	cin >> time;

cout << "According To Your Meter Readings, How Many Gallons Did You Use Within Last Month And Recently:";
	cin >> meterreadings;

	if (time > 30)
    {
		result= demandcharge + (consumptioncharge * meterreadings) + latecharge;
    } 
	else
	{
		result= demandcharge + (consumptioncharge * meterreadings);
	}
	
	cout << "Your Total Bill Is: " << result << endl;
	
	cout << "Thank You For Using This Program For Your Water Bill Calculating Needs." << endl;
	
	_getch();
	
	return 0;
	
	
}
