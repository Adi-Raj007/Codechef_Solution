/*Chef is playing a mobile game. In the game, Chef's character Chefario can perform special attacks. However, one special attack costs X mana points to Chefario.
If Chefario currently has Y mana points, determine the maximum number of special attacks he can perform.
*/

#include <iostream>
using namespace std;

void testcase(){
    int X,Y;
    cin>>X>>Y;
    if(X<=Y){
        cout<<int(Y/X)<<endl;
        
    }
    else
    cout<<"0"<<endl;
    
}



int main() {
	
	int tt;
	cin >> tt;
	while(tt--){
	    testcase();
	}
	return 0;
}
