#include<bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m;
    long long int d,t;
    vector<pair<long long int,long long int>> gears;
    vector<long long int> pos;

    cin>>n>>m>>d>>t;
    long long int w,c;
    for(int i=0;i<n;i++){
        cin>>w>>c;
        gears.push_back({w,c});
    }
    long long int a;
    for(int i=0;i<m;i++){
        cin>>a;
        pos.push_back(a);
    }
	pos.push_back(d);
    sort(pos.begin(), pos.end());
    vector<long long int> dis(m+1);
    dis[0] = pos[0];
    for(int i=1;i<=m;i++){
        dis[i] = pos[i] - pos[i-1];
    }
    sort(dis.begin(), dis.end());

    long long int req_capacity = INT_MIN;
    bool possible = true;
    if(t>=(2*d)){
        req_capacity = dis[m];
    }else if(d < t && (2 * d > t)){
        long long int two_kg = 0;
        long long int one_kg = 0;
        long long int D = d;
        one_kg = t%d;
        t = t - (2*one_kg);
        two_kg = d-one_kg;
        t = t - two_kg;
        if(t>=1){
            while(true){};
        }
        for(int i=0;i<=m;i++){
                if(dis[i]<=two_kg){
                    two_kg = two_kg-dis[i];
                    req_capacity = max(req_capacity, dis[i]*2);
                }else{
                    if(two_kg>0){
                        req_capacity = max(req_capacity, (dis[i]-two_kg) + (two_kg*2));
                        two_kg = 0;
                    }else{
                        req_capacity = max(req_capacity, dis[i]);
                    }
                }
            }
    }else if(t==d){
        req_capacity = 2*dis[m];
    }else{
		possible = false;
	}

    if(possible){
        int flag = 0;
        long long int min_weight = INT_MAX;
        for(int i=0;i<n;i++){
            if(req_capacity<=gears[i].second){
                min_weight = min(min_weight, gears[i].first);
                flag=1;
            }
        }
        if(flag==0){
            cout<<"-1";
        }else{
            cout<<min_weight;
        }
    }else{
        cout<<"-1";
    }
    
    return 0;
}
