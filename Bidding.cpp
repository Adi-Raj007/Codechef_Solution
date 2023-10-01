/*
Alice, Bob and Charlie are bidding for an artifact at an auction.
Alice bids A rupees, Bob bids B rupees, and Charlie bids C rupees (where A, B, and C are distinct).
According to the rules of the auction, the person who bids the highest amount will win the auction.
Determine who will win the auction.

*/


#include <iostream>
using namespace std;

void testcase(){ int X,Y,Z;
cin>>X>>Y>>Z;
if(X>Y&&X>Z)
{
    cout<<"Alice"<<endl;
}
    else if(Y>X&&Y>Z)
    cout<<"Bob"<<endl;
    else
    cout<<"Charlie"<<endl;
    
}



int main() {
	
	int tt;
	cin >> tt;
	while(tt--){
	    testcase();
	}
	return 0;
}
