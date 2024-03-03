#include<iostream>
using namespace std;
int main(){
	try{
		try{
			throw 10;
		}catch(int x){
			cout<<"inner catch...";
			throw;//re thorwing an exception
		}
	}catch(int x){
		cout<<"\nouter catch.."<<x;
	}
}
