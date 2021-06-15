#include <bits/stdc++.h>
using namespace std;


bool isSubSeq(string s1, string s2, int n, int m){
    int j = 0;
    
    for(int i = 0; i < n && j < m; i++){
        if(s1[i] == s2[j])
        j++;
    }
    
    return j == m;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string v;
    cin>>v;
    int n;
    cin>>n;
    vector<string> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(isSubSeq(v, b[i], v.length(), b[i].length())){
            cout<<"POSITIVE"<<"\n";
        }else{
            cout<<"NEGATIVE"<<"\n";
        }
    }




    return 0;
}