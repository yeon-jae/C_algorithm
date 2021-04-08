#include<iostream>
using namespace std;

class Node {
public:    //멤버함수를 외부에서 사용할 수 있도록 함
	int data;
	Node* link;

};

Node* Head = NULL;//헤드 노드는 전역변수, 첫번째 노드를 가리킬 수 있음

void insert_node(Node *new_node,Node *pre)    {	//강의의 A,B,C방식대로
	//A방식
	if (Head == NULL) {	// 공백리스트인 경우
		// new_node->link = NULL; 
		Head = new_node;
	}
	else if (pre == NULL) { 	// pre가 NULL이면 첫번째 노드로 삽입
		new_node->link = Head;
		Head = new_node;
	}
	else {		 // pre 다음에 삽입
		new_node->link = pre->link;
		pre->link = new_node;
	}
}

void print_list()	{
	for (Node* ptr = Head; ptr != NULL; ptr = ptr->link)
		cout << ptr->data << endl;
}

void main()    {
	Head = NULL;
	for (int i = 0; i < 8; i++)
	{
			//새로운 8개의 데이터를 차례대로 입력받음
		int i_data;
		cin >> i_data;
			//새로운 노드를 생성, 내용을 수정
		Node* new_node = new Node;
		new_node->data = i_data;
		new_node->link = NULL;

			//전체 연결 리스트에 추가(삽입)
		insert_node(NULL,new_node);

	}
}