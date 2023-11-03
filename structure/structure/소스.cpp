#include<iostream>
using namespace std;
void main()
{
	struct employ {
		char name[20];
		int year;
		int salary;
	};
	struct employ kim, jung, park;
	struct employ* ptr;

	kim = { "kim",2010,3000 };
	jung = { "jung",2011,2500 };
	park = { "park",2009,3400 };
	ptr = &kim;
	cout << kim.name<<":"<<kim.year << endl;
	cout << ptr->name << ":" << ptr->year << endl;//포인터,구조체가 나와야함
	cout << (*ptr).name << ":" << (*ptr).year << endl;
}