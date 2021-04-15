#include<bits/stdc++.h>
using namespace std;

class MyQueue{
		stack<int> S1, S2;
		bool InOrder = true; // true -> stack order, false -> queue order
		
		public :
			void Enque(int x){
				if(InOrder == false){
					// transfer all elements of S2 to S1
					while(S2.size() != 0){
						S1.push(S2.top());
						S2.pop();
					}
					InOrder = true;
				}
				S1.push(x);
			}
			
			
			int Dequeue(){
				int result ;
				if(InOrder == true){ // stack order, push all element of s1 to s2
					while(S1.size() != 0){
						S2.push(S1.top());
						S1.pop();
					}
					result = S2.top();
					S2.pop();
					InOrder = false; // now queue order
				}
				else{
					result = S2.top();
					S2.pop();
					
				}
				return result;
			}
			
			int Peek(){
				int result ;
				if(InOrder == true){
					while(S1.size() != 0){
						S2.push(S1.top());
						S1.pop();
					}
					result = S2.top();
					//S2.pop();
					InOrder = false;
				}
				else{
					result = S2.top();
					
				}
				return result;
			}
			
			
			int Size(){
				return ( S1.size() + S2.size() );
			}
};


int main(){
		MyQueue q;
		
		q.Enque(4);
		q.Enque(11);
		q.Enque(23);
		q.Enque(29);
		
		cout<<q.Dequeue()<<" ";
		cout<<q.Dequeue()<<" ";
		
		q.Enque(11);
		//cout<<q.Peek()<<" ";
		
		q.Enque(-3);
		q.Enque(-7);
		cout<<"\nSize of queue : "<<q.Size()<<endl;
		//q.Enque(9);
		cout<<"\nFront element in queue : "<<q.Peek()<<endl;
}
