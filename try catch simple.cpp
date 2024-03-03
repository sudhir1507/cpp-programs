#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	a=5;
	b=0;
	try{
	    if(b>0){
	    	c=a/b;
		}else{
			throw "division by zero exception..";
		}
	}catch(const char *c){
		cout<<c;
	}
}
