#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
			const pair<int,int> &b)
{
    cout<< a.second<< " "<< b.second<< endl;
	return (a.second < b.second);
}

int main()
{
	vector< pair <int, int> > vect;

	int arr[] = {10, 20, 5, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	for (int i=0; i<n; i++)
		vect.push_back( make_pair(arr[i],arr1[i]) );

	cout << "The vector before sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
	
		cout << vect[i].first << " "
			<< vect[i].second << endl;

	}
    cout<< endl;


	sort(vect.begin(), vect.end(), sortbysec);

	cout << "The vector after sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
	
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
	return 0;
	
}
