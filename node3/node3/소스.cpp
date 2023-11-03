#include<iostream>
using namespace std;

class Node {
public:    //멤버함수를 외부에서 사용할 수 있도록 함
	int data;
	Node* link;

};

Node* Head = NULL;//헤드 노드는 전역변수, 첫번째 노드를 가리킬 수 있음

void insert_node_at_front(Node* head, Node* new_node)
{
	new_node->link = Head;
	Head = new_node;
}

void print_list() {
	for (Node* ptr = Head; ptr != NULL; ptr = ptr->link)
		if (ptr->link == NULL)

			cout << ptr->data << endl;
		else
			cout << ptr->data << " --> ";
}

void main() {
	Head = NULL;

	int data_number;
	cout << "전체 입력 데이터의 개수는? : ";
	cin >> data_number;


	for (int i = 0; i < data_number; i++)
	{
		//새로운 데이터를 차례대로 입력받음
		int i_data;
		cout << "새로운 값을 입력하시오  (#" << i + 1 << "):  ";
		cin >> i_data;
		//새로운 노드를 생성, 내용을 수정
		Node* new_node = new Node;
		new_node->data = i_data;
		new_node->link = NULL;

		//전체 연결 리스트에 추가(삽입)
		insert_node_at_front(NULL, new_node);

	}
	//확인용으로 출력
	print_list();
}