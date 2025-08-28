#include<iostream>
using namespace std;
class Stack{
		int top;
		int* arr;
		int size;
		public:				
		Stack(int n){
			this->size=n;
			arr=new int[size];
			top=-1;										
		}
		void push(char x){
			if(isFull()){
							cout<<"Stack overflow"<<endl;																
			}
			top++;				
			arr[top]=x;
					
		}
		void pop(){
			if(isEmpty()){
				cout<<"Stack is empty"<<endl;
																			
			}
			char num=arr[top];
			arr[top]=0;																	
			top--;
					
		}
		char peek(){
			return arr[top];				
		}	
		bool isEmpty(){
			return top==-1;					
		}
		bool isFull(){
			return top==size-1;					
		}
		void display(){
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";																								
			}					
		}			
};
int main() {
	Stack s(5);
s.push(3);
 	s.push(2);
 	s.push(1);
 	s.push(10);
 	s.push(6);
 	int num=s.pop();
 	s.display();
 	int element=s.peek();
 	cout<<endl;
 	cout<<"Element on top is "<< element<<endl;
 	return 0;
 }