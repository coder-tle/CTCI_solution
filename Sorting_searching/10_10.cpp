#include<bits/stdc++.h>
using namespace std;



int main(){
		int n;
		cout<<"Enter number of element : ";
		cin>>n;
		
		int arr[n];
		
		for(int i = 0; i<n; i++)
			cin>>arr[i];
			
		sort(arr, arr+n);
		
		int q, x, result , index;
		cout<<"Enter number of queries to perform : ";
		cin>>q;
		
		while(q--){
			cout<<"Enter element whose rank you want to fetch : ";
			cin>>x;
			auto index = int(upper_bound(arr, arr+n, x) - arr) - 1;
			//	if(index >= 0)
			//		cout<<
			
			//	5	1	4	4	5	9	7	13	3
			
			//	1 3	4	4	5	5	7	9	13
			//		^
			
			cout<<index<<"\n";
		}
		
		
	return 0;
}
