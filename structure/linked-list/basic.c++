#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node * creatList(struct node * head){
   struct node * newNode, *temp;

    for(int i=1; i<=5; i++){
        newNode=(struct node *)malloc(sizeof(struct node));

        if(newNode==NULL)
            return head;
        
        newNode->data=i;
        newNode->next=NULL;
        
        if(head==NULL){
            head=newNode;
            temp=head;
        }
        temp->next=newNode;
        temp=newNode; 
    }
    return head;
}

void printList(struct node *head){
    struct node *temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//operstions 
//1. inserstion
//a. at the beginning
struct node * insertBegin(struct node* head, int value){
    struct node * newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=head;
    head =newNode;
    return head;   
} 
//b.in the end 
struct node *insertEnd(struct node* head, int value){
    struct node * newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;

    struct node * tempNode=head;
    while(tempNode->next != NULL)
        tempNode=tempNode->next;

    tempNode->next=newNode;
    return head;
}
//c.in the between 
struct node* insertBetween(struct node * head,int first,int second,int value){
      struct node *newNode=(struct node*)malloc(sizeof(struct node));
      newNode->data=value;
      struct node * tempNode=head;

      while(tempNode->data!=first && tempNode->next->data!=second){
          tempNode=tempNode->next;
      }

      newNode->next=tempNode->next;
      tempNode->next=newNode;

      return head;

}

//2. delestion
//a. at the beginning
struct node* deletBegin(struct node * head){
    return head=head->next;
}
//b.in the end
struct node*deletEnd(struct node * head){
    struct node *tempNode=head;

    while(tempNode->next->next != NULL)
       tempNode=tempNode->next;

    tempNode->next=NULL;
    
    return head;
}
//c.in the between
struct node* deletBetween(struct node *head,int value){
    struct node* tempNode=head;

    while(tempNode->next->data!=value)
       tempNode=tempNode->next;

    tempNode->next=tempNode->next->next;

    return head;
}

//3.count number of nodes in the list
int counter(struct node * head){
    int count=0;
    while(head->next!=NULL){
        head=head->next;
        count++;
    }
    return count+1;
}

//4.nth node in the list
struct node * nthNode(struct node *head, int n){
    n--;
    while(n--){
        head=head->next;
    }
    return head;
}

int main(){
   struct node *head=NULL;
   head=(creatList(head)); 
   printList(head);
   
   //insertion
   head=insertBegin(head,0);
   printList(head);
   
   head=insertEnd(head,55);
   printList(head);
   
   head=insertBetween(head,3,4,-8);
   printList(head);
   
   //delestion
   head=deletBegin(head);
   printList(head);
   
   head=deletEnd(head);
   printList(head);

   head=deletBetween(head,-8);
   printList(head);
   
   //count number of nodes in the list
   int count=counter(head);
   cout<<"no of elements in list: "<<count<<endl;

   //find nth node
   struct node* NthNode=nthNode(head,3);
   cout<<"nth node: "<<NthNode->data<<endl;

   return 0;
}
