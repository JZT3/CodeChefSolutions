#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,mean;
	 
	cin>>t;
	
	while(t--){
	    cin>>a>>b>>c;
	    
	    int div_1 = (a+b)/2;
	    int div_2 = (a+c)/2;
	    int div_3 = (c+b)/2;
	    
	    if (div_1<35 || div_2<35 || div_3 <35){
	        cout<<"Fail"<<endl;
	    }
	    else{
	        cout<<"Pass"<<endl;
	    }
	}
	return 0;
}
