/*
When an exception is thrown, all objects created inside the enclosing try 
block are destroyed before the control is transferred to the catch block.
*/
#include<iostream>
using namespace std;
class test{
	public:
		test(){
			cout<<"test constructor..";
		}
		~test(){
			cout<<"\ntest destructor.. ";
		}
};
int main(){
	try{
		test t;
		throw 10;
	}catch(int x){
		cout<<"\nexcpetion caught "<<x;
	}
}
