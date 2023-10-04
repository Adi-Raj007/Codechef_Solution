
/*Chef was driving on a highway at a speed of 
�
X km/hour.

To avoid accidents, there are fine imposed on overspeeding as follows:

No fine if the speed of the car ≤ 70 km/hour.
Rs 500 fine if the speed of the car is strictly greater than 
70 and ≤100.
Rs 2000 fine if the speed of the car is strictly greater than 100 Determine the fine Chef needs to pay.
*/
#include <iostream>
using namespace std;

void testcase(){int X;
cin>>X;
if(X<=70)
cout<<"0"<<endl;
else if(X>70&&X<=100)
cout<<"500"<<endl;
else if(X>100)
{
    cout<<"2000"<<endl;
}
    
}



int main() {
	
	int tt;
	cin >> tt;
	while(tt--){
	    testcase();
	}
	return 0;
}
