#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        arr[int(s[i])-97]++;
    }
    string out;
    
    int i=0;
    int j=25;
    while(1){
        while(arr[i]%2==0 && i<26){
            i++;
        }
        while(arr[j]%2==0 && 0<j){
            j--;
        }
        if(i>=j){
            break;
        }
        arr[j]--;
        arr[i]++;   
    }

    for(int i=0;i<26;i++){
        while(arr[i]>=2){
            arr[i] -= 2;
            out.push_back(char(i+97));
        }
        
    }

    if(i==j){
        out.push_back(char(i+97));
        s = out.substr(0,out.length()-1);
        reverse(s.begin(),s.end());
        out = out + s;
    }else{
        s = out.substr(0,out.length()); 
        reverse(s.begin(),s.end());
        out = out + s;
    }
    cout<<out;

    return 0;
}