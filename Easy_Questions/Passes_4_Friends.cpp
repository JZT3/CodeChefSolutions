#include <iostream>
using namespace std;

int main() {
    int t,n,k;
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        //n=number of friends
        //k=number of passes
        //wil he have enough passes for his friends to go?
        
        if (n+1<=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
	return 0;
}
