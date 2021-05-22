#include <bits/stdc++.h>
using namespace std;

    string convert(string s, int numRows) {
        int n = s.length();
        vector<string> out(numRows);
        int k = (numRows-1)*2;
        int i=0;
        while(i<n){
            int j=0;
            while(j<numRows && i<n){
                out[j].push_back(s[i]);
                i++;
                j++;
            }
            j=j-2;
            while(j>0 && i<n){
                out[j].push_back(s[i]);
                i++;
                j--;
            }
        }
        
        string s1 = "";
        for(int i=0;i<numRows;i++){
            s1 = s1 + out[i];
        }
        return s1; 
    }