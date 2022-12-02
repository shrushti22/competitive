
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int summ =0, zeros =0, odds =0, evens =0;

        for(int i=0; i<s.size(); i++){
            if(s[i]-'0'==0){
                zeros++;
            }
            else if((s[i]-'0')%2==0){
                evens++;
            }
            else{
                odds++;
            }
            summ+=s[i]-'0';
        }
        if(zeros>1 && summ%3==0){
            cout<<"red"<<endl;
        }else if(zeros==1 && summ%3==0 && evens>=1){
            cout<<"red"<<endl;
        }else{
            cout<<"cyan"<<endl;
        }
    }

    
    return 0;  
}