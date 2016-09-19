#include <iostream>
#include <string>
#include "dayType.h"
using namespace std;




int main()
{
	//declared an object of type dayType
	dayType myDay;

	//set the day to Wednesday
	myDay.setDay(3);

	//call on getDay
	cout << "Current day: " << myDay.getDay() << endl << endl;

	//call on getNext
	cout << "Next day: " << myDay.getNext() << endl << endl;

	//call on getPrev
	cout << "Prev day: " << myDay.getPrev() << endl << endl;

	//call on addDays
	cout << "13 days from now: " << myDay.addDay(13) << endl << endl;
	cout << "4 days from now: " << myDay.addDay(4) << endl << endl;
	cout << "8 days from now: " << myDay.addDay(8) << endl << endl;



	return 0;
}