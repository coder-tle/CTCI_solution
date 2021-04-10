#include<bits/stdc++.h>
using namespace std;


int closestNonEmpty(string arr[], int l, int r, int mid){
		
		int lptr = mid -1 , rptr = mid+1;
		
		while(lptr >= l || rptr <=r ){
				
				if(lptr >= l && (arr[lptr]!= ""))
					return lptr;
				if(rptr <=r && (arr[rptr] != ""))
					return rptr;
				
				rptr++;
				lptr --;
		}
		
		return -1; // problem , revisit
	
}

int binarySearch(string arr[], int n, string target){
		
		int l = 0, r = n-1, mid , index = -1;
		
		while(l<=r){
			
			mid = l + (r-l)/2;
			
			if(arr[mid] == "") // empty then find move mid
				mid = closestNonEmpty(arr, l, r,mid);
			if(mid == -1)
				return -1;
			if(	arr[mid] < target	)
				l = mid + 1;
			else if ( arr[mid] > target)
				r = mid - 1;
			else if( arr[mid] == target){
				index = mid;
				break;
			}
				
			
		}
	
		return index;
	
	}
	


int main(){
	
	// how to create array of string ?
	
	string arr[] = {"at", "","", "", "ball", "", "", "car", "cas","","dad", "", ""};
	int n = 13;
	
	/*for(int i = 0; i<n; i++){
		cout<<"\naccessed array\n";
		cout<<arr[i]<<" ";}
		cout<<endl;*/
		
	string target = "cas";
	
	int index = binarySearch(arr, n, target);
	if(index != -1)
	cout<<"Element found at index : "<<index;
	else
	cout<<"Element not found\n";
	
	return 0;
}

// test case 1 : "ball"  l = 0, r = 6, mid = 4
// test case 2 : "dad"  l = 8, r = 12, mid = 10
