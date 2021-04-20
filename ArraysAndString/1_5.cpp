#include<bits/stdc++.h>
using namespace std;

bool OneEditAway(string s1, string s2){
	
	int n1 = s1.size(), n2 = s2.size();
	
	if(abs(n1-n2) > 1)	return false;
	
	bool equal = (n1 == n2) ? true : false;
	
	int dif_count = 0;
	if( n1 < n2){
		string t = s2;
		s2 = s1;
		s1 = t;
	} 
	
	int i1 = 0, i2 = 0;
	
	for(i1 = 0; i1<n1; i1++){
			
			if(i2<n2){
				if(s1[i1] != s2[i2] && equal){
					i2++;
					dif_count++;
				}
				else if(s1[i1] != s2[i2] && !equal){
					dif_count++;
				}
				else if( s1[i1] == s2[i2] ){
				i2++;
				}
			}
			else{
				dif_count++;
				
			}
			
			if(dif_count > 1)
				return false;
			
			
			
			
			
	}
	
			if(dif_count > 1)
				return false;
			return true;
}


int main(){
		
		string s1, s2;
		cin>>s1>>s2;
		
		cout<<OneEditAway(s1,s2);
		return 0;
	
}
