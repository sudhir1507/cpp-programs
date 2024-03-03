#include<iostream>
using namespace std;
class demo{
	
};
class demo1{
	
};
int main(){
	for(int i=0;i<=2;i++){
	try{ 
		if(i==1){
			throw demo();
		}
		if(i==2){
			throw demo1();
		}
	}catch(demo d){
		cout<<"Exception demo..\n";
	}catch(demo1 d1){
		cout<<"exceptiom demo1..";
	}
	
}
}
