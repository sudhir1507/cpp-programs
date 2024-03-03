#include<iostream>
using namespace std;
void fun1()throw(int){
	cout<<"f1 start\n";
	throw 100;
	cout<<"f1 end\n";
}
void fun2()throw(int){
	cout<<"f2 start\n";
	fun1();
	cout<<"f2 end\n";
}
void fun3()throw(int){
	cout<<"f3 start\n";
	try{
		fun2();
	}
	catch(int i){
	cout<<"Exception caught "<<i<<endl;	
	}
	cout<<"f3 end\n";
}
int main(){
	fun3();
	return 0;
}

