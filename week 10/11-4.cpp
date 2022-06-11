#include <iostream>
using namespace std;

typedef struct Node{
 int data;
 struct Node *next;
}Node;

Node *front=NULL;
Node *rear=NULL;

void Insert();
void Delete();
void printall();

int main(void){
 int number=0;
 int choice;
 Node Q;

 cout<<"1 for push in queue, 2 for pop out from queue, 3 for exit:\n";
 cin>>choice;
 while(choice!=3){
  if(choice==1){
   Insert();
   printall();
  }
  else if(choice==2){
   Delete();
   printall();
  }
  cout<<"1 for push in queue, 2 for pop out from queue, 3 for exit:\n";
  cin>>choice;
 }
}

void Insert(){
 int number;

 cout<<"Enter a number:\n";
 cin>>number;
 Node *newNode=new (Node); // new element
 newNode->data=number;
 newNode->next=NULL;
 
 // the queue is empty
 if(front==NULL){
  front=newNode;
  rear=newNode;
 }
 else{
  rear->next=newNode;
  rear=newNode;
 }
}

void Delete(){
 Node *temp=front;
 if(front==NULL){
  return;
 }
 else{
  front=front->next;
  delete temp;
 }
}

void printall(){
 Node *temp=front;
 if(front==NULL){
  cout<<"Queue is empty.\n";
 }
 else{
  cout<<"In queue: ";
  while(temp){
   cout<<temp->data<<" ";
   temp=temp->next;
  }
  cout<<endl;
 }
}
