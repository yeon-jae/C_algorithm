#include <iostream>
using namespace std;
//#define SUB_NUM=3
//#define STUDENT_NUM=10

const int CLASS = 3;
const int SUB_NUM = 3;
const int STUDENT_NUM = 10;

void main()
{
	char Name[SUB_NUM][10] = { "����","����","����" };

	int score[CLASS][SUB_NUM][STUDENT_NUM] =
	{ { {90,60,80,50,30,91,66,88,58,80} ,{100,80,100,60,70,95,69,99,55,88},{10,90,88,66,71,90,60,90,50,80} }
	,{{55,60,65,80,90,96,64,85,93,67},{55,68,97,87,58,62,82,53,75,43},{55,45,67,89,91,63,90,50,76,94}},
	 {{ 68,79,75,53,65,45,87,81,72,85},{59,69,78,81,91,55,64,74,96,56},{90,40,59,67,34,75,85,56,84,65} } };
	
//�ݺ�/ ���� ���
	
	for (int cls = 0; cls < CLASS; cls++)
	{
		for (int subj = 0; subj < SUB_NUM; subj++)
		{
			int sum = 0;
			for (int student = 0; student < STUDENT_NUM; student++)
			{
				sum += score[cls][subj][student];
			}
			double average = (double)sum / STUDENT_NUM;//��հ��
			cout << cls + 1 << " �� " << Name[subj] << " ������ ����� " << average << endl;
		}
	}
	
 //���� ��ü ���
	for (int subj = 0; subj < SUB_NUM; subj++) 
	{
		int sum = 0;//�ش� ������ ��ü ���� ��(��� ��, ��� �л� ������ �հ�)
		for (int cls = 0; cls <CLASS; cls++)
			for (int student = 0; student < STUDENT_NUM; student++)
			{
				sum += score[cls][subj][student];
			}
		double average = (double)sum / (CLASS * STUDENT_NUM);

		cout << Name[subj]<<" ������ ����� " << average << endl;
	}
}