#include<iostream>
using namespace std;
class base{
	
};
class derived:public base{
	
};
int main(){
	derived d;
	try{
		throw d;
	}catch(derived){
		cout<<"this is derived class exeception.."; //derived class exception is handled before base class
	}catch(base b){
		cout<<"\nthis is base class exeception.."; //this is not executes bcz derived class exception is caught
	}
}
