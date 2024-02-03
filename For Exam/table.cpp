#include<iostream>
using namespace std;
int main()
{
    int table[3][3]={
        {1,2,3},
        {4,5,6},
        {1,2,3}

    };
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i==j)
            {
                cout<<table[i][j]<<endl;
            }
            
        }
        
    }
    cout<<"\n";
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if ((i==0&&j==2)||(i==1&&j==1)||(i==2&&j==0))
            {
                cout<<table[i][j]<<endl;
            }
            
        }
        
    }
    
}