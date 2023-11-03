#include<iostream>
using namespace std;
void  main()
{
		int score[3][10] = { { 90,60,80,50,30,91,66,88,58,80},{100,80,100,60,70,95,69,99,55,88},
										{10,90,88,66,71,90,60,90,50,80} };

		double subject_average[3];

		for (int subj = 0; subj < 3; subj++){
				int sum = 0;
				for (int student = 0; student < 10; student++)
						sum += score[subj][student];
				subject_average[subj] = (double)sum / 10;
		cout << "°ú¸ñº° Æò±Õ" <<subject_average[subj]<< endl;
	}

	double personal_average[10];

	for (int student = 0; student < 10; student++) {
			int sum = 0;
			for (int subj = 0; subj < 3; subj++)
				sum += score[subj][student];
			personal_average[student] = (double)sum / 3;	
	cout << "°³ÀÎº° Æò±Õ" << personal_average[student] << endl;
	}
		

}