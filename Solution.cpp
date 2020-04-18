#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--)
	{
	    long long int n;
	    cin >> n;
	    
	    int p = __builtin_popcountll(n);
	    
	    (p==1)?cout << "YES":cout << "NO";
	    cout << endl;
	}
	return 0;
}