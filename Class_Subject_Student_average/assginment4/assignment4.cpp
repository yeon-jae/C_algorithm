#include <iostream>
using namespace std;
int main() {
	int score[3][3][10] =
	{ { {90,60,80,50,30,91,66,88,58,80} ,{100,80,100,60,70,95,69,99,55,88},{10,90,88,66,71,90,60,90,50,80} }
	,{{55,60,65,80,90,96,64,85,93,67},{55,68,97,87,58,62,82,53,75,43},{55,45,67,89,91,63,90,50,76,94}},
	 {{ 68,79,75,53,65,45,87,81,72,85},{59,69,78,81,91,55,64,74,96,56},{90,40,59,67,34,75,85,56,84,65} } };
	cout << "1�� ���� " << endl; //1�� ���� 
	double subject_average[3];
	for (int group = 0; group < 3; group++) {
		for (int subj = 0; subj < 3; subj++) {
			int sum = 0;
			for (int student = 0; student < 10; student++) {
				sum += score[group][subj][student];
				subject_average[subj] = (double)sum / 10;
			}
			if(subj==0)
				cout<<group+1<<"���� ���� ���: "<< subject_average[subj] << endl;
			else if(subj==1)
				cout << group + 1 << "���� ���� ���: " << subject_average[subj] << endl;
			else if(subj==2)
				cout << group + 1 << "���� ���� ���: " << subject_average[subj] << endl;
			/*cout << "\n" << group + 1 << "����  ����(����,����,���� ����) ��� :" << subject_average[subj] << endl;*/
		}
		cout << endl;
	} //2�� ���� ���� ��ü ���
	cout << "\n" << "2�� ����" << endl;
	for (int subj = 0; subj < 3; subj++) {
		int sum = 0;
		for (int group = 0; group < 3; group++) 
			for (int student = 0; student < 10; student++) 
				sum += score[group][subj][student];
				double average = (double)sum / 30;

				cout << "���� ��ü ���(����, ����, ���� ���� ):  " << average << endl;
	}
}
