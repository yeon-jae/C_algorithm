#include <iostream>		
using namespace std;

#define element int
const int MAX_SIZE = 1000;

class Stack {
public:
	char mystack[MAX_SIZE];
	int top = -1;

	//STACK() { top = -1; }

	bool is_stack_empty() {
		return (top == -1);
	}
	bool is_stack_full() {
		return (top == MAX_SIZE - 1);
	}
	void push(char data) {
		if (is_stack_full()) {
			cout << "ERROR: Stack FULL" << endl;
			return;		//exit
		}
		else {
			mystack[++top] = data;		//Stack[top++]=data; 둘이 다름
		}
	}
	char pop() {
		if (is_stack_empty()) {
			cout << "ERROR: Stack EMPTY" << endl;
			return -1; //exit();
		}
		return mystack[top--];
	}
	char peek() {
		if (is_stack_empty()) {
			cout << "ERROR: Stack EMPTY" << endl;
			exit(-1);
		}
		else {
			return mystack[top];
		}
	}
	void print_stack() {
		cout << "STACK STATUS " << endl;
		for (int i = top; i >= 0; i--)
			cout << mystack[i] << endl;
	}
};

char post_fix_expr[1000];
int p_index = 0;

char* postfix(char expr[]) {
	Stack MyStack;
	//convert to postfix *가정 소괄호만, 사칙연산, 피연산자는 한 자리
	for (int i = 0; i < strlen(expr); i++)
	{
		if (expr[i] == '(')		//1.왼쪽 괄호면
		{
			continue;
		}
		else if (expr[i] == '+' || expr[i] == '*' || expr[i] == '-' || expr[i] == '/')	//2.연산자이면
		{
			MyStack.push(expr[i]);
		}
		else if (expr[i] == ')')	//3.오른쪽 괄호면
		{
			post_fix_expr[p_index++] = MyStack.pop();
		}
		else if (expr[i] == '  ')// cf) 비었을 경우
		{
			continue;
		}
		else {
			post_fix_expr[p_index++] = expr[i];		//4. 피연산자면
		}
	}
	post_fix_expr[p_index] = '\0';

	return post_fix_expr;

};

int calculate(char postfix[]) {
	Stack MyStack;
	for (int i = 0; i < strlen(postfix); i++)
	{
		//연산자면 pop후 계산, 계산 결과는 다시 스택에 push
		if (postfix[i] == '+') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 + opr2);
		}
		else if (postfix[i] == '*') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 * opr2);
		}
		else if (postfix[i] == '-') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 - opr2);
		}
		else if (postfix[i] == '/') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 / opr2);
		}
		else if (postfix[i] >= '0' && postfix[i] <= '9') {//피연산자면 Stack 에 push
			MyStack.push(postfix[i] - '0');		//***문자를 숫자로 변환하는 기초적인 방법
		}

		//최종결과는 스택에 남아있는 값을 pop하여 반환

		return MyStack.pop();


	}
}

void main() {
	char string[100];
	cout << "중위 표기 수식을 입력하세요 : ";
	cin.getline(string, 100);
	char* post_expr = postfix(string);
	cout << string << "=" << post_expr << "=" << calculate(post_expr) << endl;
}




