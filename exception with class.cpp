#include<iostream>
using namespace std;
class demo{
	
};
int main(){
	try{
		throw demo();  //throwing object of demo
	}
	catch(demo d){
		cout<<"Exception caught..";
	}
}
