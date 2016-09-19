#include "dayType.h"

//setDay function
void dayType::setDay(int dayNum)
{
	//validate that dayNum is a valid number
	if (dayNum > 6 || dayNum < 0)
		dayNum = 0;

	//store the param passed in into the day member variable
	day = dayNum;
}

//print the day name
void  dayType::print()
{
	switch (day)
	{
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "INVLAID CASE ENTERED!" << endl;
		break;
	}
}

//return the stored day's name
string dayType::getDay()
{
	switch (day)
	{
	case 0:
		return "Sunday";
		break;
	case 1:
		return "Monday";
		break;
	case 2:
		return "Tuesday";
		break;
	case 3:
		return "Wednesday";
		break;
	case 4:
		return "Thursday";
		break;
	case 5:
		return "Friday";
		break;
	case 6:
		return "Saturday";
		break;
	default:
		return "INVLAID CASE ENTERED!";
		break;
	}
}


string dayType::getNext()
{
	switch (day)
	{
	case 0:
		return "Monday";
		break;
	case 1:
		return "Tuesday";
		break;
	case 2:
		return "Wednesday";
		break;
	case 3:
		return "Thursday";
		break;
	case 4:
		return "Friday";
		break;
	case 5:
		return "Saturday";
		break;
	case 6:
		return "Sunday";
		break;
	default:
		return "INVLAID CASE ENTERED!";
		break;
	}
}


string dayType::getPrev()
{
	switch (day)
	{
	case 0:
		return "Saturday";
		break;
	case 1:
		return "Sunday";
		break;
	case 2:
		return "Monday";
		break;
	case 3:
		return "Tuesday";
		break;
	case 4:
		return "Wednesday";
		break;
	case 5:
		return "Thursday";
		break;
	case 6:
		return "Friday";
		break;
	default:
		return "INVLAID CASE ENTERED!";
		break;
	}
}


string dayType::addDay(int numDays)
{
	//declare temporary storage
	int temp;

	//add numDays to day and store in temp
	temp = day + numDays;

	while (temp > 6)
	{
		temp = temp - 7;
	}

	switch (temp)
	{
	case 0:
		return "Sunday";
		break;
	case 1:
		return "Monday";
		break;
	case 2:
		return "Tuesday";
		break;
	case 3:
		return "Wednesday";
		break;
	case 4:
		return "Thursday";
		break;
	case 5:
		return "Friday";
		break;
	case 6:
		return "Saturday";
		break;
	default:
		return "INVLAID CASE ENTERED!";
		break;
	}
}


dayType::dayType()
{
	//set day to a default value 
	day = 0;
}


dayType::dayType(int dayNum)
{
	//pass along the dayNum value to the setDay function
	setDay(dayNum);
}


dayType::~dayType()
{

}

