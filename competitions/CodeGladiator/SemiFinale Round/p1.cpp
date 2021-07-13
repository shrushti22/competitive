#include <bits/stdc++.h>
using namespace std;


long long int getCount(long long int n, unordered_map<long long int, long long int> &mp)
{
    if(n==1){
        return n;
    }
    long long int count = 0, t, p;
    int flag = 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag =1;
            p = n/i;
            if(p==i){
                if(mp.find(i)!=mp.end()){
                    count = max(count, 1+ ((i)*mp[i]));
                }else{
                    t = getCount(i, mp);
                    mp[i] = t;
                    count = max(count, 1 + ((i)*mp[i]));
                }
            }else{
                if(mp.find(i)!=mp.end()){
                    count = max(count, 1+ ((p)*mp[i]));
                }else{
                    t = getCount(i, mp);
                    mp[i] = t;
                    count = max(count, 1 + ((p)*mp[i]));
                }
                if(mp.find(p)!=mp.end()){
                    count = max(count, 1+ ((i)*mp[p]));
                }else{
                    t = getCount(p, mp);
                    mp[p] = t;
                    count = max(count, 1+ ((i)*mp[p]));
                }
            }
        }
    } 
    if(!flag){
        return 1 + n;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int temp;
    long long int totsteps=0;
    unordered_map<long long int, long long int> mp; 
    for(int i=0;i<n;i++){
        cin>>temp;
        if(mp.find(temp)!=mp.end()){
            totsteps += mp[temp];
        }else{
            mp[temp] = getCount(temp, mp);
            totsteps += mp[temp];
        }    
    }
    
    cout<<totsteps;
    return 0;
}