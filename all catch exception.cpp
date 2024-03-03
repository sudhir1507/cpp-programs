#include<iostream>
using namespace std;
int main(){
	try{
		throw 10;
	}
	catch(char ch)
	{
		cout<<"caught "<<ch;
	}
	catch(...){
		cout<<"\nDefault exception";
	}
	return 0;
}
