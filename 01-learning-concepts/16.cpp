#include <iostream>
using namespace std;

// singly linked list

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "deleting the node" << endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
};

void insertathead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
};

void insertattail(Node *&tail, int data)
{

    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;

    tail = newNode;
};

int findlen(Node *head, Node *tail)
{
    int i = 1;
    Node *temp = head;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }

    if (tail == NULL)
    {
        i++;
    }

    return i;
};

void deleteatposition(int position, Node *&head, Node *&tail)
{
    // if empty
    if (head == NULL)
    {
        return;
    }
    // deleting the head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findlen(head, tail);
    // deleting the tail
    if (position >= len)
    {
        int i = 1;
        Node *temp = head;
        while (i < len - 1)
        {
            i++;
            temp = temp->next;
        }
        tail = temp;
        temp = temp->next;
        tail->next = NULL;
        delete temp;
        return;
    }

    // deleting any other position

    int i = 1;
    Node *temp = head;
    while (i < position - 1)
    {
        i++;
        temp = temp->next;
    }

    // now temp is at position - 1.
    Node *toDel = temp->next;
    temp->next = toDel->next;
    toDel->next = NULL;
    delete toDel;
};

void insertatposition(int data, int position, Node *&head, Node *&tail)
{
    // if empty
    // if inserting at head
    // if inserting at tail
    // else:

    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 0)
    {
        insertathead(head, data);
        return;
    }

    int len = findlen(head, tail);

    if (position >= len)
    {
        insertattail(tail, data);
        return;
    }

    int i = 2;
    Node *temp = head;

    while (i < position)
    {
        i++;
        temp = temp->next;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
};

int main()
{

    Node *first = new Node(1);
    // Node* second= new Node(2);
    // Node* third= new Node(3);
    // Node* fourth= new Node(4);
    // Node* fifth= new Node(5);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next= fifth;

    Node *head = new Node(20);
    Node *tail = NULL;
    insertathead(head, 30);
    insertathead(head, 40);
    insertathead(head, 50);
    insertathead(head, 60);
    insertathead(head, 70);

    insertatposition(54, 7, head, tail);

    cout << "printing the linkedlist" << endl;
    print(head);

    deleteatposition(5, head, tail);

    cout << endl
         << "printing the linkedlist after deletion" << endl;
    print(head);

    return 0;
}