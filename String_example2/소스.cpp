#include<iostream>
using namespace std;
void main()
{
	char str[] = "This is my world";
	char* ptr;
	ptr = str;
	*(ptr + 4) = '\0';//*(str+4)==str[4]==ptr[4]==*(ptr+4)
	cout << str << endl;
	cout << ptr << endl;
 }