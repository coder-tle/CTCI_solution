#include<bits/stdc++.h>
using namespace std;

int multiply(int a, int b){
		
		if(a == 0)
			return 0;
		if (a == 1)
			return b;
		
		if( a%2 == 0){
			return multiply(a/2, b) << 1;
		}
		else{
			return b + (multiply( (a-1)/2 , b) << 1) ;
		}
		
}

int main(){
	
		int a, b;
		cout<<"Enter two digit to multiply :";
		cin>>a>>b;
		cout<<"Result of mulitplication of "<<a<<" with "<<b<<" : ";
		a = min(a, b);
		
		cout<<multiply(a, b)<<endl;
		return 0;
}
