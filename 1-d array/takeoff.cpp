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
int main(){
	int t;
	cin>>t;
	
	while(t-->0){
		int n,p,q,r;
		int a[100000]={0};
		cin>>n>>p>>q>>r;
		int m=p,res=0;
	    for(int i=1;m<=n;i++){
			m=p*i;
			if(m>n){
				break;
			}
			a[m]=1;
			res++;
		}
		m=q;
		for(int i=1;m<=n;i++){
			m=q*i;
			if(m>n){
				break;
			}
			if(a[m]==1){
				a[m]=2;
				res--;
			}else{
				res++;
				a[m]=1;
			}
		}
		m=r;
		for(int i=1;m<=n;i++){
			m=r*i;
			if(m>n){
				break;
			}
			if(a[m]==2){
				continue;
			}
			if(a[m]==1){
				res--;
			}else{
				res++;
				a[m]=1;
			}
		}
		cout<<max(res,0)<<endl;

	}
}
