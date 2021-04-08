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
void delete_node(int x) {//x값을 가는 노드를 연결리스트에서 삭제
	Node* list = Head;

	if (Head == NULL)  return; 	// 삭제할 것이 없음
	else if (Head->data == x) 	// 찾는 노드(삭제 노드)가 첫 노드인 경우 
	{      // delete list; free(list);
		Head = Head->link;
		return;
	}
	else 			// 나머지 경우
	{
		while (list->link != NULL)
		{
			if (list->link->data == x)
			{
				list->link = list->link->link;
				//delete list; free(list->link);
				return;
			}
			list = list->link;
		}
	}
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

		//전체 연결리스트에 추가/삽입
		insert_node_at_front(NULL,new_node);
	}
	//확인용으로 출력
	cout << "##구성된 연결리스트는: ";
	print_list();

	for (int i = 0; i < 3; i++)
	{
		int del_data;
		cout << "삭제할 노드의 값 : ";
		cin >> del_data;


		delete_node(del_data);
		cout << "##삭제 후  연결리스트는: ";
		print_list();
	}
		

	//노드삭제
	/*delete_node(60);
	cout << "##삭제 후  연결리스트는: ";
	print_list();

	delete_node(80);
	cout << "##삭제 후  연결리스트는: ";
	print_list();

	delete_node(10);
	cout << "##삭제 후  연결리스트는: ";
	print_list();

	delete_node(200);
	cout << "##삭제 후  연결리스트는: ";   //200은 존재 하지 않으니 안지워짐
	print_list();*/

}
