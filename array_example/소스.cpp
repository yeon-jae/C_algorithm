#include<iostream>
using namespace std;
void main()
//학생수를 모를때 평균 구하는것, 배열의 크기를 아예 크게 정함 ex) array[100000];
{
	int* score;
	int num;

	cout << "학생수는?";
	cin >> num;
	//int score[num]; = 변수는 안됨, 상수여야함 →그래서 이걸로 못함
	score = new int[num]; //int ptr[num]의 효과를 얻음



	for (int i = 0; i < num; i++)
		cin >> score[i];//*(score+i)
	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += score[i];
	double av = (double)sum / num;
	cout << "평균은" << av << endl;


 }