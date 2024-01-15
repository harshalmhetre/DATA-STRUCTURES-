#include<iostream>
using namespace std;
struct node{
    int rno;
    struct node *next;

};
class SEA {
    public:
    struct node *insert();
    int display(struct node *);
    void uni(struct node * , struct node *);
    void intersection(struct node * , struct node *);
    void diff(struct node *, struct node *);

} ;

struct node *SEA :: insert()
{
    int i,n;
    struct node *nn,*temp,*start;
    start=NULL;
    cout << "\ntotal no. of students ";
    cin>>n;

    for (i=0;i<n;i++)
    {
        nn=new node;
        cout<<"\nEnter roll no of student :";
        cin>>nn->rno;
        nn->next=NULL;
        if (start ==NULL)
        {
            start=nn;
        }
        else{
            temp=start;
            while(temp->next!=NULL){
                temp=temp->next;
            
            }
        temp->next=nn;
        }

    }
return (start);
}
int SEA :: display(struct node *t)
{
    int count=0;
    struct node *temp=t;
    while(temp!=NULL){
        cout<<temp->rno<<"\t";
        temp=temp->next;
        count++;
    }
    cout<<"\n\t"<<count<<endl;

}

void SEA:: intersection(struct node *a, struct node *b){
    while(a!=NULL){
        int found=0;
        node *temp=b;
        while(temp!=NULL){
            if (a->rno==temp->rno){
                found=1;
            }
        temp=temp->next;
        }
    if (found==1){
        cout<<a->rno<<"\t";
    }
    a=a->next;
    }
}

void SEA :: uni(struct node *a , struct node *b){
    node *temp;
    temp=a;
    while(temp!=NULL){
        cout<<temp->rno<<"\t";
        temp=temp->next;
    }
    for (b;b!=NULL;b=b->next){
        int found=0;
        for(temp=a;temp!=NULL;temp=temp->next){
            if (b->rno==temp->rno){
                found=1;
                }
            }
        if (found==0){
        cout<<b->rno<<"\t";
        } 
    }
}

void SEA:: diff(struct node *b, struct node *a){
    node *temp;
    temp=a;
    for (b;b!=NULL;b=b->next){
        int found=0;
        for(temp=a;temp!=NULL;temp=temp->next){
            if (b->rno==temp->rno){
                found=1;
                }
            }
        if (found==0){
        cout<<b->rno<<"\t";
        } 
    }
    }


int main(){
    struct node * head1 ,  * head2;
    SEA a;
    int m,vanilla,butter,inter;
    cout << "\ntotal no. of students in class:";
    cin>>m;
    cout<< "\nenter students who like vanilla:";
    head1=a.insert();
    cout<< "\nenter students who like butterscotch:";
    head2=a.insert();
    cout<<"\nstudents who like vanilla:";
    vanilla=a.display(head1);
    cout<< "\nstudents who like butterscotch:";
    butter=a.display(head2);
    cout<<"\nstudents who like both ice creams:"; 
    a.intersection(head1,head2);
    cout<<"\nstudent who like either of ice cream:";
    a.uni(head1,head2);
    cout <<"\n students who like vanilla but not butterscotch:";
    a.diff(head2,head1);
    cout <<"\n students who like butterscotch  but not vanilla:";
    a.diff(head1,head2);
    return 0;
}
