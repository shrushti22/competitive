#include <bits/stdc++.h>
using namespace std;
 
// function check whether a number
// is prime or not
bool isPrime(long long int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (long long int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
// Driver Code
int main()
{
    long long n = 999999999989;
    cout<<n*n;
    // for(long long i=999999999900;i<n;i++){
    //     if(isPrime(i))
    //         cout<<i<<endl;
    // }
}