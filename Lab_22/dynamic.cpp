#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
bool is_digits(int n)
{
    string str= to_string(n);
    for (char ch : str) {
        int v = ch; // ASCII Val converted
        if (!(ch >= 48 && ch <= 57)) {
            return false;
        }
    }
  return true;
}
void print_(struct node* ptr, int count)
{
    for (int i = 0; ptr!= NULL; ptr= ptr->next, count++)
    {
        cout<<"Value of Node "<< i++<<" "<< ptr->data <<endl;

    }
    
}
int main()
{
    int count=0;
    int n=-1;
    struct node *head = NULL;
    cout<<"Enter the size of linklist"<<endl;
    //cin>>n;
    struct node* temp;
    for (int i = 0; ; i++)
    {
       
        if (i==0)
        {
            head= (struct node*)malloc(sizeof(struct node));
            temp = head;
        }
        else
        {
            temp->next= (struct node*)malloc(sizeof(struct node));
            temp= temp-> next;
        }
        
         cout<<"Enter the value of "<<i+1<< " ";
        {
            count++;
            cin>>temp->data;
         temp->next= NULL;

        }
       if( temp->data==-1)
        {
            break;
        }
        
        
    }
    print_(head, count);
    free(head);
    return 0;
}