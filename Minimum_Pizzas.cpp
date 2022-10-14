#include <iostream>
using namespace std;

int main() {
	short t,n,x,total,order;
	const short slices=4;
	cin>>t;
	
	while(t--){
	    //n = number of friends
	    //x = number of slices wanted
	  cin>>n>>x;
    total=n*x;
    
    if(total%slices==0){
      order=(total/slices);
      cout<<order<<endl;}
    
    else{
      order=(total/slices+1);
      cout<<order++<<endl;}
       
	}
	return 0;
}
