#include<iostream>
#include<climits>
using namespace std;

void print(int ary[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<ary[i]<<" ";
	}
	
}
void max(int ary[], int n)
{
	int max = INT_MIN; // minimum possible in int
	for(int i=0; i<n; i++)
	{
		if(ary[i] >= max)
		{
			max = ary[i];
		}
	}
	cout<<endl<<max;
}
int main()
{
	int ary[100];
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>ary[i];
	}
	print(ary,n);
	max(ary,n);
}

