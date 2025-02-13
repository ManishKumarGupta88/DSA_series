#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};
void traversal(Node* head){
    Node* current=head;
    while(current!=NULL){
        cout<<current->data<< " ";
        current=current->next;
    }
    cout << endl;
}
bool search(Node*  head,int target){
    while(head!=NULL){
        if(head->data==target){
            cout<<"data present is LL:"<<endl;
            return true;
        }
        head=head->next;
    }
    cout<<"data not present in LL:"<<endl;
    return false;
}
int findlength(Node* head){
    int length=0;
    Node* current=head;
    while(current!=NULL){
        length++;
        current=current->next;
    }
    cout<<"size of linked list is:"<<length<<endl;
    return length;
}
Node* insertAtBeginning(Node* head, int value)
{
    
    Node* newNode = new Node(value);

   
    newNode->next = head;

    
    head = newNode;

    
    return head;
}
Node* insertAtEnd(Node* head,int value){
    Node* newNode=new Node(value);
    if(head==NULL)
        return newNode;
        Node* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=newNode;
        return head;
}
Node* insertpos(Node* head,int pos,int data){
    if(pos<1){
        cout<<"invalid position!"<<endl;
        return head;
    }
    if(pos==1){
        Node* temp=new Node(data);
        temp->next=head;
        return temp;
    }
    Node* prev=head;
    int count=1;
    while(count<pos-1 && prev!=NULL){
        prev=prev->next;
        count++;
    }
    if(prev==NULL){
        cout<<"invalid position!"<<endl;
        return head;
    }
    Node* temp=new Node(data);
    temp->next=prev->next;
    prev->next=temp;
    return head;
}
Node* deletebeg(Node* head){
    if(head==NULL)
        return NULL;

    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteLast(Node* head){
    if(head==NULL)
    return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* current = head;
    while (current->next->next != NULL) {  // Find second last node
        current = current->next;
    }
    delete current->next;
    current->next=NULL;
    return head;

}

Node* deleteAtPosition(Node* head, int position)
{
    
    if (head == nullptr || position < 1) {
        return head;
    }

    
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    for (int i = 1; i < position - 1 && current != nullptr;
         i++) {
        current = current->next;
    }


    if (current == NULL || current->next == NULL) {
        return head;
    }

    
    Node* temp = current->next;

    
    current->next = current->next->next;

    
    delete temp;
  
    return head;
}

int main(){
    Node* node1=new Node(20);
    Node* node2=new Node(2);
    node1->next = node2;
    Node* head=node1;
    traversal(head);
    search(head,2);
    findlength(head);
    head=insertAtBeginning(head, 4);
    traversal(head);
    findlength(head);
    head=insertAtEnd(head,29);
    traversal(head);
    findlength(head);
    head=insertpos(head,2,7);
    traversal(head);
    findlength(head);
    head= deletebeg(head);
    traversal(head);
    findlength(head);
    head=deleteLast(head);
    traversal(head);
    findlength(head);
    head=deleteAtPosition(head,1);
    traversal(head);
    findlength(head);
    return 0;
}
