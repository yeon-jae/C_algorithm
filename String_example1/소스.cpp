#include<iostream>
using namespace std;
void main()
{
	int score[10] = { 10,20,30 };
	char str[10] = { 's','t','r','i','n','g' };//���ڹ迭�� �̸�,�迭��,���� �ּҸ� ����϶�� �Ҷ� \0�� ���ö����� ��� �����

	cout << score << endl;
	for (int i = 0; i < 10; i++)
		cout << score[i] << endl;
	cout << str << endl;//���� �迭�϶��� �ϳ��� �迭��ü�� �� �߿��� �ǹ̸� ����
										//���ڹ迭�� ����Ҷ��� ���ڿ� ���� ��� ���ڸ� �� ����ϱ�� ���
}
