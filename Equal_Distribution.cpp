#include <iostream>
using namespace std;

void testcase(){
    int X,Y;
    cin>>X>>Y;
    if((X+Y)%2==0)
    {
        cout<<"YES"<<endl;
        
    }
    else
    cout<<"NO"<<endl;
}



int main() {
	
	int tt;
	cin >> tt;
	while(tt--){
	    testcase();
	}
	return 0;
}
