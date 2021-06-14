
#include<bits/stdc++.h>
using namespace std;
 
// Function to find the


int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    long long int prefix[n];
 
    prefix[0] = a[0];
 
    
    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
 
    
    int left[n], right[n];
 
    stack<int> s;
 
    for(int i = 1; i < n; i++)
    { 
        while (!s.empty() &&
              a[s.top()] >= a[i])
            s.pop();

        if (!s.empty())
            left[i] = s.top() + 1;
        else
            left[i] = 0;

        s.push(i);
    }
 
    while(!s.empty())
    s.pop();
 
    for(int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() &&
              a[s.top()] >= a[i])
            s.pop();
 
            if (!s.empty())
                right[i] = s.top() - 1;
            else
                right[i] = n - 1;
 

        s.push(i);
    }
 
    long long int maxProduct = 0;
 
    long long int currProduct;
 
    for(int i = 0; i < n; i++)
    {

        currProduct = a[i] * (prefix[right[i]] -
                     (left[i] == 0 ? 0 :
                    prefix[left[i] - 1]));
 
        maxProduct = max(maxProduct,
                        currProduct);
    }
 
    
    cout<<(maxProduct%1000000007);
}