#include<iostream>
using namespace std;
void main()
{
	int score[10] = { 10,20,30 };
	char str[10] = { 's','t','r','i','n','g' };//문자배열의 이름,배열명,시작 주소를 출력하라고 할때 \0이 나올때까지 모두 출력함

	cout << score << endl;
	for (int i = 0; i < 10; i++)
		cout << score[i] << endl;
	cout << str << endl;//문자 배열일때는 하나의 배열전체가 더 중요한 의미를 가짐
										//문자배열을 출력할때는 문자열 안의 모든 글자를 다 출력하기로 약속
}
