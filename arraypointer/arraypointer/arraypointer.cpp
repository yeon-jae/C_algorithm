#include <iostream>
using namespace std;
void main()
{
	int score[3][4] = { {10,20,30,40},{100,110,120,130},
		{200,210,220,230} };
	int(* ptr)[4];//ptr�� ����Ű�� ����  4��¥�� ���� �迭,ptr�� ���� ����

	ptr = score;

	cout << score << " : "<<&score << " : " << &score[0][0] << endl;
	//3���� �� ������ ��, 2���� �迭�� ���� �ּҸ� ����Ŵ
	cout << score[0] << " : " <<score[1] << " : " << score[2] << endl;
	cout << &score[0] << " : " << &score[1] << " : " << &score[2] << endl;
	//2,3��° ����� ��ġ��
	cout << score[0][0] << " : " << score[0][1] << " : " << score[0][2] << " : "<<score[0][3]<<endl;
	cout << *score[0]<< " : " << *score[1] << " : " << *score[2] << endl;
	cout << *(score[0]+1) << " : " << *(score[1] + 2) << " : " << *(score[2] + 3) << endl;


	
}