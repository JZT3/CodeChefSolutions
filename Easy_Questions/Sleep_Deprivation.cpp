#include <iostream>
using namespace std;

int main() {
	int t,x;
	const int good_sleep=7;
	cin>>t;
	
	while(t--){
	    cin>>x;
	    
	    if(x<good_sleep){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
