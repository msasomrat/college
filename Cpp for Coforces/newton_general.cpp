#include<iostream>
#include <iomanip>
using namespace std;

float proterm(int i, float value, float x[])
{
	float pro = 1;
	for (int j = 0; j < i; j++) {
		pro = pro * (value - x[j]);
	}
	return pro;
}

void dividedDiffTable(float x[], float y[100][100], int n)
{
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			y[j][i] = (y[j][i - 1] - y[j + 1]
						[i - 1]) / (x[j] - x[i + j]);
		}
	}
}

float applyFormula(float value, float x[],
				float y[][100], int n)
{
	float sum = y[0][0];

	for (int i = 1; i < n; i++) {
	sum = sum + (proterm(i, value, x) * y[0][i]);
	}
	return sum;
}

void printDiffTable(float y[100][100],int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << setprecision(4) <<
								y[i][j] << "\t ";
		}
		cout << "\n";
	}
}

int main()
{
    float n;
	cout<<"Value of observations"<< endl;
    cin>>n;
    float arr[100];
    cout<<"Enter the value of X"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
	float value, sum, y[100][100];
	
    cout<<"Enter the value for correspondings Y"<<endl;
	for (int i = 0; i < n; i++)
    {
        cin>>y[i][0];
        
    }
    
	dividedDiffTable(arr, y, n);

	printDiffTable(y,n);

    cout<<"Enter the value of X for interpolation"<<endl;
    cin>>value;
	cout << "\nValue at " << value << " is "
			<< applyFormula(value, arr, y, n) << endl;
	return 0;
}
