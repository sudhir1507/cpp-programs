#include<iostream>
using namespace std;
int fun(int x,int y){
	if(y==0){
		throw "attempted division by zero";
	}else{
		return x/y;
	}
}
int main(){
	int x,y,k;
	try{
		k=fun(3,0);
		cout<<k;
	}catch(const char *c){
		cerr<<c;
	}
}
