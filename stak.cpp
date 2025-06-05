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

    while (choice !=4){
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. exit\n";

        switch (choice){
            case 1:
            cout << "enter the value to push : ";
            cin >> value;
            stack.push (value);
            break;

            case 2:
            stack.pop();
            break;
            case 3:
            stack.peek();
            break;
            case 4:
            cout << "exiting program."<< endl;
            break;
        }
       

    }
}
