#include<bits\stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
void print_(Node* ptr)
{
    if(ptr==NULL)
        cout<<"Empty"<<endl;
    
    while(ptr!= NULL)
    {
        cout<<ptr->data<<endl;
        ptr= ptr->next;
    }
}


int main()
{
    int n;
    cout<<"Enter the size you want to input";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        struct Node* headi=(struct Node*) malloc(sizeof(struct Node));
    }
    for (int i = 0; i < n; i++)
    {
        cin>>head;
    }
    
    head->data = 10;
    head->next= NULL;
    first->data = 20;
    first->next= second;
    second->data = 30;
    second->next= third;
    third->data = 40;
    third->next= NULL;

    print_(head);


}
