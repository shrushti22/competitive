#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string s, int i, int j){
    if(i>=j){
        return true;
    }
    return (s[i]==s[j]) && isPalindrome(s, i+1, j-1);
}
int recur(string s, int i, int j){
    if(i>=j){
        return 0;
    }

    int res = INT_MAX;

    for(int k=i; k<j; k++){
        if(isPalindrome(s, i, k)){
            int temp = recur(s, k+1, j);
            if(temp<res){
                res = temp;
            } 
        }
    }

    return res + 1;

}