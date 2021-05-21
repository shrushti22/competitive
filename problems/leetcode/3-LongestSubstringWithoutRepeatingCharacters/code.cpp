#include <bits/stdc++.h>

using namespace std;


int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int count =0;
        int i=0;
        int res = 0;
        int j=0;
        while(i<s.length()){
            if(m.find(s[i])!=m.end()){
                count = i-j;
                res = max(count,res);
                j = max(m[s[i]],j);
                m[s[i]] = i+1;
                i++;
            }else{
                m[s[i]]=i+1;
                i++;
            } 
        } 
        count = i-j;
        res = max(count,res);
        return res;
    }