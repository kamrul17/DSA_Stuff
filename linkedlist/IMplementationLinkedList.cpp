#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node *&head, int data)
{
    // create new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    Node *node1 = new Node(100);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    print(head);
    insertAthead(head, 12);
    print(head);
    insertAthead(head, 112);
    print(head);
    insertAthead(head, 212);
    print(head);
    return 0;
}