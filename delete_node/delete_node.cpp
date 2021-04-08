#include<iostream>
using namespace std;

class Node {
public:    //����Լ��� �ܺο��� ����� �� �ֵ��� ��
	int data;
	Node* link;

};

Node* Head = NULL;//��� ���� ��������, ù��° ��带 ����ų �� ����
void insert_node_at_front(Node* head, Node* new_node)
{
	new_node->link = Head;
	Head = new_node;
}
void delete_node(int x) {//x���� ���� ��带 ���Ḯ��Ʈ���� ����
	Node* list = Head;

	if (Head == NULL)  return; 	// ������ ���� ����
	else if (Head->data == x) 	// ã�� ���(���� ���)�� ù ����� ��� 
	{      // delete list; free(list);
		Head = Head->link;
		return;
	}
	else 			// ������ ���
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
	cout << "��ü �Է� �������� ������? : ";
	cin >> data_number;


	for (int i = 0; i < data_number; i++)
	{
		//���ο� �����͸� ���ʴ�� �Է¹���
		int i_data;
		cout << "���ο� ���� �Է��Ͻÿ�  (#" << i + 1 << "):  ";
		cin >> i_data;
		//���ο� ��带 ����, ������ ����
		Node* new_node = new Node;
		new_node->data = i_data;
		new_node->link = NULL;

		//��ü ���Ḯ��Ʈ�� �߰�/����
		insert_node_at_front(NULL,new_node);
	}
	//Ȯ�ο����� ���
	cout << "##������ ���Ḯ��Ʈ��: ";
	print_list();

	for (int i = 0; i < 3; i++)
	{
		int del_data;
		cout << "������ ����� �� : ";
		cin >> del_data;


		delete_node(del_data);
		cout << "##���� ��  ���Ḯ��Ʈ��: ";
		print_list();
	}
		

	//������
	/*delete_node(60);
	cout << "##���� ��  ���Ḯ��Ʈ��: ";
	print_list();

	delete_node(80);
	cout << "##���� ��  ���Ḯ��Ʈ��: ";
	print_list();

	delete_node(10);
	cout << "##���� ��  ���Ḯ��Ʈ��: ";
	print_list();

	delete_node(200);
	cout << "##���� ��  ���Ḯ��Ʈ��: ";   //200�� ���� ���� ������ ��������
	print_list();*/

}
