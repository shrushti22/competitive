#include<bits/stdc++.h>

using namespace std;

bool compareInterval(pair<long long int,long long int> i1,pair<long long int,long long int> i2)
{
    if(i1.first == i2.first){
        return (i1.second > i2.second);
    }
    return (i1.first < i2.first);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    long long int d,t;
    vector<pair<long long int,long long int>> gears;
    vector<long long int> dis;

    cin>>n>>m>>d>>t;
    long long int w,c;
    for(int i=0;i<n;i++){
        cin>>w>>c;
        gears.push_back({w,c});
    }
    sort(gears.begin(),gears.end(), compareInterval);
    long long int a;
    for(int i=0;i<m;i++){
        cin>>a;
        dis.push_back(a);
    }
	dis.push_back(d);
    sort(dis.begin(), dis.end());
    for(int i=1;i<=m;i++){
        dis[i] = dis[i] - dis[i-1];
    }
    sort(dis.begin(), dis.end());
    if(t>=(2*d)){
        long long int req_capacity = dis[m];
        int flag = 0;
        for(int i=0;i<n;i++){
            if(req_capacity<=gears[i].second){
                cout<<gears[i].first<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"-1"<<"\n";
        }
    }else if(t<(2*d) && t>d){
        long long int two_kg = 0;
        long long int one_kg = 0;
        long long int D = d;
        one_kg = t%d;
        t = t - (2*one_kg);
        two_kg = d-one_kg;
        t = t - two_kg;
        if(t>=0 && D==(two_kg+one_kg)){
                
                int i=0;
                long long int req_capacity = INT_MIN;
                while(i<=m && two_kg>=dis[i]){
                    two_kg -= dis[i];
                    req_capacity = max(req_capacity, 2*dis[i]);
                    i++;
                }
                if(two_kg!=0){
                    if(i<=m){
                        one_kg = one_kg - (dis[i]-two_kg);
                        req_capacity = max(req_capacity, (dis[i]-two_kg) + (two_kg*2));
                        req_capacity = max(req_capacity,dis[m]);
                        int flag = 0;
                        for(int i=0;i<n;i++){
                            if(req_capacity<=gears[i].second){
                                cout<<gears[i].first<<"\n";
                                flag=1;
                                break;
                            }
                        }
                        if(flag==0){
                            cout<<"-1"<<"\n";
                        }
                    }else{
                        cout<<"-1"<<"\n";
                    }
                }else if(two_kg==0 && one_kg>0){
                    req_capacity = max(req_capacity,dis[m]);
                    int flag = 0;
                    for(int i=0;i<n;i++){
                        if(req_capacity<=gears[i].second){
                            cout<<gears[i].first<<"\n";
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0){
                        cout<<"-1"<<"\n";
                    }
                }
        }else{
            cout<<"-1"<<"\n";
        }
    }else if(t==d){
        long long int req_capacity = 2*dis[m];
        int flag = 0;
        for(int i=0;i<n;i++){
            if(req_capacity<=gears[i].second){
                cout<<gears[i].first<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"-1"<<"\n";
        }
    }else{
		cout<<"-1"<<"\n";
	}
    return 0;
}
