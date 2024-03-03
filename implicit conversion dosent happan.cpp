/*Implicit type conversion doesn’t happen for primitive types. For example, 
in the following program, ‘a’ is not implicitly converted to int. */
#include<iostream>
using namespace std;
int main(){
	try{
		throw 'a';
	}
	catch(int x){
		cout<<"caught "<<x;
	}catch(...){
		cout<<"\nDefault exception..";
	}
}
