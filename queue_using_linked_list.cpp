#include<iostream>
using namespace std;

struct node{
int data;
node*next;
node(int value){
data=value;
next=nullptr;}
};

struct queue{
node*front;
node*rear;
queue()
{front=rear=nullptr;}

void enqueue(int value){
node* temp=new node(value);
if(rear==nullptr){
    front=rear=temp;
    return;
}
rear->next=temp;
rear=temp;
}

void dequeue(){
if(front==nullptr){cout<<"The queue is empty";
return;}

node*temp=front;
front=front->next;
if(front==nullptr){rear=nullptr;}
delete temp;
}
int peek(){

if(front==nullptr){cout<<"The queue is empty";
return -1;}
return (front->data);
}
};

int main(){
queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
cout<<"Front element:"<<q.peek()<<endl;
q.dequeue();
cout<<"After dequeue the front element is:"<<q.peek()<<endl;
return 0;

}