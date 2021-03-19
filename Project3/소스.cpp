#include<iostream>
using namespace std;
int main()
{
    cout << "숫자를 입력해주세요: ";
    int a = 0;
    cin >> a;
    
    for (int i = 0; i < a; i++) {
        for (int j = a - 1; j > i; j--) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < a; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for (int j = 2 *a - 1; j > 2 * i; j--) {
            printf("*");
        }
        printf("\n");
    }

}