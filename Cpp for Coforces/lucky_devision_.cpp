#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

 bool Search(int A[],int num,int length)
    {
        for(int i = 0;i<length;i++)
            if(A[i] == num)
                return 1;
        return 0;
    }


    int permu(int n)
    {
        //int n;
        //cout << "Please Enter a Number\n";
        //cin>>n;
        int num = n, k = 1;
        int count = 0;
        while(num>0)
        {
            num/=10;
            count++;
        }
        cout<<"The All Permutations of " <<n<<" are: "<<endl;
        num = n;
        int *A = new int[count];

        for(int i = 0;i<count;i++)
        {
            A[i] =  num%10;
            num/=10;
        }


        int fact = pow(count,count);
        int *Ar = new int[fact];
        int *B = new int[count];
        int value,number = 0;

        for(int i = 0;i<fact;)
        {

            for(int j = 0;j<count;++j)
            {
                value = (rand()%count);

                B[j] = value;
            }

            for(int k= 0;k<count;k++)
                number = number + A[B[k]]*pow(10,k);

            if(Search(Ar,number,fact) == 0)
            {
                cout<<k++<<". "<<number<<endl;
                Ar[i] = number;
                ++i;
            }
            number = 0;

        }
        return 0;
    }

    int main()
    {
        int n;
        cin>>n;
        int arr[]= {4,7,47,447};
        for (int i = 0; i < 4; i++)
        {
            permu(arr[i]);
        }
        return 0;
    }