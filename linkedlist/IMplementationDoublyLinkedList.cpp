#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
// insertAtHead
void insertAtHead(Node *&tail, Node *&head, int data)
{
    // if list is empty
    if (head == NULL)
    {
        // create Node
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        // create Node
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp->next;
        head = temp;
    }
}
// insertAttail
void insertattail(Node *&tail, Node *&head, int data)
{
    // if list is empty
    if (tail == NULL)
    {
        // create Node
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        // create Node
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
// insertAtAnyPosition
void insertAtAnyPosition(Node *&tail, Node *&head, int position, int data)
{
    // insert at first node
    if (position == 1)
    {
        insertAtHead(tail, head, data);
        return;
    }
    // insert at last node
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, head, data);
        return;
    }
    // insert At any position
    Node *nodeToinsert = new Node(data);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}
// traverse
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// find The lenth of Linkedlist
int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;
    // IF LIST IS EMPTY
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << "length : " << getLength(head) << endl;
    // insertathead
    insertAtHead(tail, head, 9);
    print(head);
    insertAtHead(tail, head, 8);
    print(head);
    // insertattail

    insertattail(tail, head, 15);
    print(head);
    insertattail(tail, head, 18);
    print(head);
    cout << "length : " << getLength(head) << endl;
    // insertAtAnyPosition
    insertAtAnyPosition(tail, head, 1, 0);
    print(head);
    cout << "head ->" << head->data << endl;
    cout << "tail ->" << tail->data << endl;
    return 0;
}