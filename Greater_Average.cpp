#include<iostream>
using namespace std;

void testcase(){float A,B,C;
cin>>A>>B>>C;
if(((A+B)/2 )> C)
{
    cout<<"YES\n";
} 
else
cout<<"NO\n";
    
}



int main() {
	
	int tt;
	cin >> tt;
	while(tt--){
	    testcase();
	}
	return 0;
}
