#include<iostream>
using namespace std;
int main()
{
	double num = 10;
	double sum = 0;
	int arr[10] = { 90, 100, 95, 60, 70, 50, 20, 100, 98, 100 };
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	double average = sum / num;
	cout << sum << endl;
	cout << average << endl;
	return 0;
}