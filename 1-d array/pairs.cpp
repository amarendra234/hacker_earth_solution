/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;
#define num 1000000
int main()
{
	int t;
	cin>>t;
	int a[num];
	typedef long long ll;
	for(ll i=0;i<num;i++)
	{
		a[i]=0;
	}
	for(ll i=3;i<num;i+=2)
	{
		a[i]=1;
	}
	for(ll i=3;i<num;i+=2)
	{
		if(a[i]==1)
		{
			for(ll j=i*i;j<num;j=j+i)
			{
				a[j]=0;
			}
		}
	}
	a[0]=0;
	a[1]=0;
	a[2]=1;
    int cum[num];
	ll s=0;
	for(int i=0;i<num;i++){
		s=s+a[i];
		cum[i]=s;
	}
	while(t-->0)
	{
         ll n,m;
		 cin>>n>>m;
		 if(n==1){
			 n++;
		 }
		 ll len=(m-n)+1;
		 ll count=0;
		
		 count=cum[m]-cum[n-1];
		 ll res=(len-count);
		 cout<<(res*count)<<endl;

	}
}
