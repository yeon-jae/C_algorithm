#include <iostream>
using namespace std;
void main()
{
	int score[3][4] = { {10,20,30,40},{100,110,120,130},
		{200,210,220,230} };
	int(* ptr)[4];//ptr이 가리키는 것이  4개짜리 정수 배열,ptr에 대한 선언

	ptr = score;

	cout << score << " : "<<&score << " : " << &score[0][0] << endl;
	//3개가 다 동일한 값, 2차원 배열의 시작 주소를 가리킴
	cout << score[0] << " : " <<score[1] << " : " << score[2] << endl;
	cout << &score[0] << " : " << &score[1] << " : " << &score[2] << endl;
	//2,3번째 출력이 일치함
	cout << score[0][0] << " : " << score[0][1] << " : " << score[0][2] << " : "<<score[0][3]<<endl;
	cout << *score[0]<< " : " << *score[1] << " : " << *score[2] << endl;
	cout << *(score[0]+1) << " : " << *(score[1] + 2) << " : " << *(score[2] + 3) << endl;


	
}