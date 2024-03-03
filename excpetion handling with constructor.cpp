#include <iostream>
using namespace std;

class demo{
	int num;
	public:
		demo(int x){
			try{
				if(x==0){
					throw " not initilize with zero";
				}
				num=x;
				show();
			}catch(const char* ch){
				cout<<"\n"<<ch;
			}
		}
		void show(){
			cout<<"\nnumber is "<<num;
		}
};
int main(){
	demo d(0);
	cout<<"\ncreating another object...";
	demo d1(1);
}
