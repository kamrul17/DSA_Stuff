#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int d)
    {
        this->data = d;
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
// inserting
void insertData(int element, int data, Node *&tail)
{
    // when list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        //  when list is not empty
        Node *currentNode = tail;
        while (currentNode->data != element)
        {
            currentNode = currentNode->next;
        }
        Node *temp = new Node(data);
        temp->next = currentNode->next;
        currentNode->next = temp;
    }
}
// deleting node
void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << " invalid value" << endl;
        return;
    }
    else
    {
        // assuming value is present
        Node *previousNode = tail;
        Node *currentNode = previousNode->next;
        while (currentNode->data != value)
        {
            previousNode = currentNode;
            currentNode = currentNode->next;
        }
        previousNode->next = currentNode->next;

        if (currentNode == previousNode)
        {
            tail = NULL;
        }
        else if (tail == currentNode)
        {
            tail = previousNode;
        }
        currentNode->next = NULL;
        delete currentNode;
    }
}
// traversing
void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << " EMpty List" << endl;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    // inserting node
    insertData(3, 10, tail);
    print(tail);
    insertData(10, 11, tail);
    print(tail);
    // insertData(11, 12, tail);
    // print(tail);
    // insertData(12, 13, tail);
    // print(tail);
    // insertData(11, 1010, tail);
    // print(tail);
    // insertData(13, 61, tail);
    // print(tail);
    // deleting node

    deleteNode(tail, 11);
    print(tail);
    return 0;
}