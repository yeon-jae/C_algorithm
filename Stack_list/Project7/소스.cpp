#include <iostream>
using namespace std;

//���� ����Ʈ�� �̿��� ������ �⺻ �Լ� ����, ��� ���� �׽�Ʈ
#define element int

class Node {
public:
	element data;
	Node* link;
};

Node* SP = NULL; //stack pointer



bool is_stack_empty() {
	return (SP == NULL);
}

void push(element data) {
	//���ο� ��带 ù ���� �߰�
	Node* new_node = new Node;
	new_node->data = data;
	//new_node->link = NULL;

	new_node->link = SP;
	SP = new_node;
}

element pop() {
	if (is_stack_empty()) {
		cout << "ERROR: Stack EMPTY" << endl;
		return -1; //exit();
	}
	else {
		element item = SP->data;
		SP = SP->link;
		return item;
	}
}

element peek() {
	if (is_stack_empty()) {
		cout << "ERROR: Stack EMPTY" << endl;
		return -1; //exit();
	}
	else {
		return SP->data;
	}
}

void print_stack() {
	cout << "STACK STATUS" << endl;
	if (is_stack_empty()) return;
	else {
		for (Node* ptr = SP; ptr != NULL; ptr = ptr->link)
			cout << ptr->data << endl;
	}
}



void main() {
	//pop();    errorȮ��
	push(10);
	push(20);
	push(30);
	print_stack();
	pop();
	pop();
	print_stack();
	push(40);
	push(50);
	pop();
	push(60);

	print_stack();
}
