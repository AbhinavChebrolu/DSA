#include<iostream>
using namespace std;
int top1;
struct node
{
    int data;
    struct node *next;
};
struct node* top;
void push(int d){
    struct node* temp = new node();
    temp->data=d;
    temp->next=top;
    top=temp;
}
void pop(){
    struct node* temp;

    if(top==NULL)
    cout<<"\nStack is empty";
    else{

        temp=top; 
        top=temp->next;
        temp->next=NULL;
        delete(temp);
    }
}
void display(){
    struct node* temp;
    if(top==NULL)
    cout<<"\nStack is empty";
    else
    {
        temp=top;
        while (temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }
}

void isempty()
{
	if (top1==-1){
		cout<<"Stack is Empty"<<endl;
	}
	else{
		cout<<"Stack is not Empty"<<endl;
	}
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    isfull();
    pop();
    isempty();
    display();   
}
