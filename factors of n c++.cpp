#include <iostream>
using namespace std;
int main() {
    int n, i,factorial;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << "  , ";
    }
    for (i=0;i<=n;i++)
    {
    	factorial*=i;
	}
	cout << "factorial of "<<n <<"is "<< factorial ;
    return 0;
}

