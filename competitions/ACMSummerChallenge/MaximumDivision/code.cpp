#include <bits/stdc++.h>
using namespace std;

void maximumDivision(string &s, vector<pair<int, int>> &v){
    int i=1, n = s.length();
    string curr,prev;
    pair<int,int> p;
    v.push_back({0,0});
    p = {0,0};
    while(i<n){
        curr = s.substr(i,1);
        prev = s.substr(p.first,p.second-p.first+1);
        p.first = i;
        if(i<n-1 && curr.compare(prev)==0){
            i++;
            curr.push_back(s[i]);
        }
        p.second = i;
        if(curr.compare(prev)==0 && i==n-1){
            return;
        }
        v.push_back(p);
        i++;
    }
}


int main() {
    string s;
    cin>>s;
    int n = s.length();
    vector<pair<int,int>> v;
    maximumDivision(s,v);
    cout<<v.size();
    return 0;
}