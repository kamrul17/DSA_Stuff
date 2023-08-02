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

void insertatHead(Node *&head, int data)
{
    // create a new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertatTail(Node *&tail, int data)
{
    // create a new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtAnyPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertatHead(head, data);
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
        insertatTail(tail, data);
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
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // insertatHead
    Node *head = node1;
    print(head);
    insertatHead(head, 12);
    print(head);
    // insertatHead(head, 14);
    // print(head);
    // insertatTail
    Node *tail = node1;
    insertatTail(tail, 15);
    print(head);
    // insertatTail(tail, 18);
    // print(head);
    // insert at any position
    insertAtAnyPosition(tail, head, 4, 1000);
    print(head);
    insertAtAnyPosition(tail, head, 5, 2000);
    print(head);
    insertAtAnyPosition(tail, head, 5, 3000);
    print(head);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    deleteNode(6, head, tail);
    // deleteNode(4, head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    print(head);

    return 0;
}