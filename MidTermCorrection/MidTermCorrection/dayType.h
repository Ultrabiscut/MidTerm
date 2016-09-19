#ifndef _DAYTYPE_
#define _DAYTYPE_

#include <iostream>
using namespace std;

class dayType
{
private:
	int day;

public:
	void setDay(int dayNum);
	void print();
	string getDay();
	string getNext();
	string getPrev();
	string addDay(int numDays);

	//contstructos
	dayType();
	dayType(int dayNum);
	~dayType();

};

#endif