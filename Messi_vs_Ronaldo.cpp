#include <iostream>
using namespace std;

void testcase(){
    int A,B,X,Y;
    cin>>A>>B>>X>>Y;
    
    if((A*2+B)==(X*2+Y))
    cout<<"Equal"<<endl;

else if((A*2+B)>(X*2+Y))
    cout<<"Messi"<<endl;

else
    cout<<"Ronaldo"<<endl;  

    
}



int main() {
	
//	int tt;
//	cin >> tt;
//	while(tt--){
	    testcase();
//	}
	return 0;
}
