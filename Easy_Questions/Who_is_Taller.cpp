#include <iostream>
using namespace std;

int main() {
	short T,X,Y;
	cin>>T;
	
	while(T--){
	    cin>>X;
	    cin>>Y;
	    
	    if (X<Y){
	        cout<<"B"<<endl;}
	    else{
	        cout<<"A"<<endl;}
	}
	
	return 0;
}
