#include<iostream>
using namespace std;
int main(){
	int x=-2;
	cout<<"before try...";
	try{
		cout<<"\nInside try..";
		if(x<0){
			throw x;
			cout<<"\nafter throw not execute..";
		}
	}catch(int x){
		cout<<"\nexception is caught..";
	}
	cout<<"\nafter catch block..";
}
