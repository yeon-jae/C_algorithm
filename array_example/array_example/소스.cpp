#include<iostream>
using namespace std;
void main()
//�л����� �𸦶� ��� ���ϴ°�, �迭�� ũ�⸦ �ƿ� ũ�� ���� ex) array[100000];
{
	int* score;
	int num;

	cout << "�л�����?";
	cin >> num;
	//int score[num]; = ������ �ȵ�, ��������� ��׷��� �̰ɷ� ����
	score = new int[num]; //int ptr[num]�� ȿ���� ����



	for (int i = 0; i < num; i++)
		cin >> score[i];//*(score+i)
	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += score[i];
	double av = (double)sum / num;
	cout << "�����" << av << endl;


 }