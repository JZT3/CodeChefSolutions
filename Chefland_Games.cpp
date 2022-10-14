#include <iostream>
using namespace std;

int main() {
    short t;
    bool r1,r2,r3,r4;
    
    cin>>t;
    
    while(t--){
        cin>>r1>>r2>>r3>>r4;
        
        if (r1==0 && r2==0 && r3==0 && r4==0){
            cout<<"IN"<<endl;
        }
        
        else{
            cout<<"OUT"<<endl;
        }
    }
	return 0;
}
