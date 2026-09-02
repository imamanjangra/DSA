#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int main (){
    int ans = 1; 
    int n = 4;
    int x = 2;
    if(n < 0){
        n = -n;
        n = 1/n;
    }
    while (n > 0)
    {
        if(n%2 == 1){
            ans *= x;
        }

        x *= x;

        n /= 2;
        
        /* code */
    }

    cout << ans;

    return 0;
    
}