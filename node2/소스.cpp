#include<iostream>
using namespace std;

class Node {
public:    //����Լ��� �ܺο��� ����� �� �ֵ��� ��
	int data;
	Node* link;

};

Node* Head = NULL;//��� ���� ��������, ù��° ��带 ����ų �� ����

void insert_node_at_rear(Node* head, Node* new_node)
{
	if (Head == NULL) {	// ���鸮��Ʈ�� ���
		Head = new_node;
	}
	else {
		Node* list = Head;

		while (list->link != NULL)
			list = list->link;
		list->link = new_node;
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
	for (int i = 0; i < 8; i++)
	{
		//���ο� 8���� �����͸� ���ʴ�� �Է¹���
		int i_data;
		cout << "���ο� ���� �Է��Ͻÿ�  (#" << i + 1 << "):  ";
		cin >> i_data;
		//���ο� ��带 ����, ������ ����
		Node* new_node = new Node;
		new_node->data = i_data;
		new_node->link = NULL;

		//��ü ���� ����Ʈ�� �߰�(����)
		insert_node_at_rear(NULL , new_node);

	}
	//Ȯ�ο����� ���
	print_list();
}