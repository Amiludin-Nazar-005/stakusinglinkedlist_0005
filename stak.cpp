#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node (){
        next = NULL;
    }
};

class stak
{
    private:
    node*top;

    public:
    stak(){
        top = NULL;
    }
    int push(int value){
        node * newnode =new node();
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "push value: " << value << endl;
        
        return value;
    }

    bool isEmpty(){
        return top ==NULL;
    } 
};