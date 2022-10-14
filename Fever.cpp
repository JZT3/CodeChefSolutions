#include <iostream>
using namespace std;

int main() {
	int t,x;
	const int sick=98;
	
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<=sick){
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}
	
	return 0;
}
