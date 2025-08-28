#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"enter a string: ";
	cin>>str;
	
	int n =str.length();
	char stack[100];
	int top=-1;
	
	for(int i=0;i<n;i++){
		stack[++top]=str[i];
	}
	cout<<"reversed string: ";
	while(top!=-1){
		cout<<stack[top--];
	}
	cout<<endl;
	return 0;
 	
}
