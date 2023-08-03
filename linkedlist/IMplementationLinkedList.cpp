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
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            // delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};
// insertAtHead
void insertatHead(Node *&tail, Node *&head, int data)
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
        // create a new node
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}
// insertAttail
void insertatTail(Node *&tail, Node *&head, int data)
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
        // create a new node
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}
void insertAtAnyPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertatHead(tail, head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last
    if (temp->next == NULL)
    {
        insertatTail(tail, head, data);
        return;
    }

    // create a new node
    Node *NodeToInsert = new Node(data);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    Node *temp = head;

    // deleting first or start node
    if (position == 1)
    {

        head = head->next;
        // memory free start ndoe
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *currentNode = head;
        Node *previousNode = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            previousNode = currentNode;
            currentNode = currentNode->next;
            cnt++;
        }
        if (currentNode->next == NULL)
        {
            tail = previousNode;
        }
        previousNode->next = currentNode->next;
        currentNode->next = NULL;
        delete currentNode;
    }
}
// traverse linkedList
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
    // Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Node *head = node1;
    // Node *tail = node1;
    // print(head);

    // IF LIST IS EMPTY
    Node *head = NULL;
    Node *tail = NULL;
    // insertatHead
    insertatHead(tail, head, 12);
    print(head);

    // insertatTail

    insertatTail(tail, head, 15);
    print(head);

    // insert at any position
    insertAtAnyPosition(tail, head, 3, 1000);
    print(head);
    insertAtAnyPosition(tail, head, 4, 2000);
    print(head);
    insertAtAnyPosition(tail, head, 5, 3000);
    print(head);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    deleteNode(5, head, tail);
    // deleteNode(4, head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    return 0;
}