#include <iostream>
using namespace std;

int main() {
	int t,k,n,total;
	cin>>t;
	
	while(t--){
	    //n * n is the size paper you have
	    //k * k is the length size square you want to cut
	    // calculate how many squres can you cut out from a sheet 
	    
	    cin>>k>>n;
	    if(k%n==0){
	        total=(k*k)/(n*n);
	        cout<<total<<endl;
	    }
	    else{
	        total=((k/n)*(k/n));
	        cout<<total<<endl;
	    }
	}
	       
	return 0;
}
