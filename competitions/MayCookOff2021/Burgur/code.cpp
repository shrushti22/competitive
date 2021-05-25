#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long int x,y;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>y){
            cout<<"-1"<<"\n";
        }else{
            if((y&1==0) && (x&1==1)){
                cout<<"-1"<<"\n";
            }else{
                unordered_set<int> st;
                long long int count = 0;
                long long int minutes = 0;
                long long int current = x;
                while(st.find(count)==st.end() && y!=0){
                    if(minutes!=0){
                        minutes++;
                        st.insert(count);
                        count=0;
                        current = x;
                    }
                    
                    while(current<=y){
                        count++;
                        minutes++;
                        y = y-current;
                        current = current*2; 
                    }
                }
                
                if(st.find(count)!=st.end() || y!=0){
                    cout<<"-1"<<"\n";
                }else{
                    cout<<minutes<<"\n";
                }
                st.clear();
            }
        }
        
    }
	return 0;
}
