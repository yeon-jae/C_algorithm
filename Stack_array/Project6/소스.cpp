#include <iostream>
using namespace std;

//객체 선언 방식 스택의 기본 함수 구현, 몇가지 간이 테스트
#define element int

const int MAX_SIZE = 1000;	

class Stack {
public:
	element MyStack[MAX_SIZE];
	int top;

	Stack() {
		top = -1;
	}

	bool is_stack_empty() {
		return (top == -1); 				
	}
	
	bool is_stack_full() {
		return (top == MAX_SIZE - 1);				
	}

	void push(element data) {
		if (is_stack_full()) {
			cout << "ERROR: Stack FULL" << endl;
			return;
			}
	else {
			MyStack[++top] = data; //Stack[top++]=data; 둘이 다름
			}
	}

	element pop() {
		if (is_stack_empty()) {
			cout << "ERROR: Stack EMPTY" << endl;
			return -1; //exit();
		}
		return MyStack[top--];
	}

	element peek() {
		if (is_stack_empty()) {
			cout << "ERROR: Stack EMPTY" << endl;
			return -1;
		}
		else {
			return MyStack[top];
		}
	}

	void print_stack() {
		cout << "STACK STATUS (top = " << top << ")" << endl;
		if (is_stack_empty()) return;
		else {
			for (int i = top; i >= 0; i--)
				cout << MyStack[i] << endl;
		}
	}
};


void main() {

	Stack MyST;
	MyST.push(10);
	MyST.push(20);
	MyST.push(30);
	MyST.pop();
	MyST.pop();

	MyST.push(40);
	MyST.	push(50);
	MyST.pop();
	MyST.push(60);

	MyST.print_stack();
}
