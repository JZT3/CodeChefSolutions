#include <iostream>
using namespace std;

int main() {
	int t,m,x,d;
	int lazy_bound;
	
	cin>>t;
	
	while(t--){
	    cin>>x>>m>>d;
	    
	    if((m*x)<(x+d)){
	        lazy_bound = (m*x);
	        cout<<lazy_bound<<endl;
	    }
	    else{
	        lazy_bound = (x+d);
	        cout<<lazy_bound<<endl;
	    }
	}
	
	return 0;
}
