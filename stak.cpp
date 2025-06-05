#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

class stack
{
private:
    node *top;

public:
    stack()
    {
        top = NULL;
    }
    int push(int value)
    {
        node *newnode = new node();
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "push value: " << value << endl;

        return value;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "stak is empty." << endl;
            return;
        }
        cout << "poped value: " << top->data << endl;
        top = top->next;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << " list is empty " << endl;
        }

        else
        {
            node *current = top;
            while (current != NULL)
            {
                cout << current->data << endl;
                current = current->next;
            }
        cout <<endl;
        }
    }
};

int main (){
    stack stack;

    int choice =0;
    int value;


}
