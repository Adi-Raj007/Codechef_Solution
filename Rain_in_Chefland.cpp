/* In Chefland, precipitation is measured using a rain gauge in millimetre per hour.

Chef categorises rainfall as:

LIGHT, if rainfall is less than 3 millimetre per hour.
MODERATE, if rainfall is greater than equal to 3 millimetre per hour and less than 7 millimetre per hour.
HEAVY if rainfall is greater than equal to 7 millimetre per hour.
Given that it rains at 
X millimetre per hour on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.

*/

#include <iostream>
using namespace std;

void testcase(){
    int X;
    cin>>X;
    if(X<3)
    cout<<"LIGHT"<<endl;
    else if(X>=7)
    cout<<"HEAVY"<<endl;
    else
    cout<<"MODERATE"<<endl;
    
}



int main() {
	
	int tt;
	cin >> tt;
	while(tt--){
	    testcase();
	}
	return 0;
}
