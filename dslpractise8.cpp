#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *prev,*next;

};
class cBinary {
    struct node *head, *rear;
    public:
    cBinary()
    {
        head=NULL;
        rear=NULL;
    }

    struct node * create();
    void display();
    void ocomp();
    void oocomp();
    void add(struct node*,struct node*);
};

struct node *cBinary :: create(){
    head=NULL;
    rear =NULL;
    int n, rem;
    struct node *nn;
    cout<<"\nEnter the number:";
    cin>>n;
    while( n!=0 ){
        rem=n%2;
        n=n/2;
        nn =new node;
        nn->prev=NULL;
        nn->next=NULL;
        nn->data=rem;
        if( head==NULL){
            rear=head=nn;
        }
        else{
            head->prev=nn;
            nn->next=head;
            head=nn;

        }
    }
    return rear;
}

void cBinary:: display(){
    struct node *temp;
    temp=head;
    cout<<"\nentered number";
    while(temp!=NULL){
        
        cout<<temp->data;
        temp=temp->next;
    }
}
void cBinary ::ocomp(){
    struct node *temp;
    temp=head;
    cout<<"\ncomplement of number";
    while(temp!=NULL){
        if (temp->data==0){
            temp->data=1;
        }
        else{
            temp->data=0;
        }
    
    cout<<temp->data;
    temp=temp->next;
        
    }
}

void cBinary :: oocomp(){
    struct node *temp;
    int carry=1;
    temp=rear;
    cout<<"\ntwo's complement of number";
    while(temp!=NULL){
        if (temp->data==0 && carry==0){
            temp->data=0;
            carry=0;
        }
        else if (temp->data==0 && carry==1){
            temp->data=1;
            carry=0;
        }
        else if (temp->data==1 && carry==0){
            temp->data=1;
            carry=0;
        }
        else if (temp->data==1 && carry==1){
            temp->data=0;
        }
        temp=temp->prev;
    }
    display();
}

void cBinary::add(struct node *head1, struct node *head2) {
    int carry=0;
    struct node *temp1 =head1;
    struct node *temp2 =head2;
    struct node *head3=NULL;
    struct node *temp3=NULL;
    while(temp1!=NULL || temp2!=NULL){
        int sum;
        if ( temp1!=NULL && temp2!=NULL){
            sum=carry + temp1->data+temp2->data;
        }
        else if (temp1!=NULL){
            sum=carry + temp1->data;
        }
        else if (temp2!=NULL){
            sum= carry + temp2->data;
        }
        else {
            sum=carry;
        }
        carry=sum/2;
        sum=sum%2;
        struct node *p;
        p= new node;
        p->data=sum;
        p->prev=NULL;
        p->next=NULL;
        if (head3=NULL){
            temp3=head3=p;
        }
        else {
            p->next=temp3;
            temp3->prev=p;
            temp3=p;
        }
        if (temp1)
          temp1 =temp1->prev;
        if (temp2)
          temp2 =temp2->prev;
    }
    if (carry>0){
        struct node *p=new node ;
        p->next=NULL;
        p->prev=NULL;
        p->data=carry;
        if (head3=NULL){
            temp3=head3=p;
        }
        else {
            p->next =temp3;
            temp3->prev=p;
            temp3=p;

        }
    }
    head3=temp3;
    temp3=head3;
    cout<<"\n";
    while(temp3->next!=NULL) {
        cout<<""<<temp3->data;
    }
    cout<<""<<temp3->data<<"\n";

}


int main(){
    struct node *num1,*num2;
    cBinary b ,c ;
    b.create();
    b.display();
    b.ocomp();
    b.oocomp();
    cout<<"enter 1st no. to add :"
    num1=b.create();
    cout<<"enter 2nd no to add:"
    num2=c.create();
    b.add(num1,num2);

}