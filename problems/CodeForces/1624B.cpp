
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
        int a,b,c;
        cin>>a>>b>>c;
        int flag =0;
        if(a>=b && a>=c){
            int d = b-a;
            int temp = a+(2*d);
            if(temp%c==0 && temp/c>0){
                cout<<"YES\n";
                flag=1;
            }else{
                if(!((c-a)&1)){
                    d = (c-a)/2;
                    temp = a+d;
                    if(temp%b==0 && temp/b>0){
                        cout<<"YES\n";
                        flag=1;
                    }
                }
            }
        }else if(b>=a && b>=c){
            int d = b-a;
            int temp = a + (2*d);
            if(temp%c==0 && temp/c>0){
                cout<<"YES\n";
                flag=1;
            }else{
                d = c-b;
                temp = b-d;
                if(temp%a==0 && temp/a>0){
                    cout<<"YES\n";
                    flag=1;
                }
            }
        }else{
            int d = c-b;
            int temp = b-d;
            if(temp%a==0 && temp/a>0){
                cout<<"YES\n";
                flag=1;
            }else{
                if(!((c-a)&1)){
                    d = (c-a)/2;
                    temp = a + d;
                    if(temp%b==0 && temp/b>0){
                        cout<<"YES\n";
                        flag = 1;
                    }
                }
            }
        }

        if(flag==0){
            cout<<"NO\n";
        }
    }
    

    return 0;  
}