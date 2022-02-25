
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

    
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int h1 = stoi(s1.substr(0,2));
    int h2 = stoi(s2.substr(0,2));
    int m1 = stoi(s1.substr(3,2));
    int m2 = stoi(s2.substr(3,2));

    int t1 = h1*60 + m1;
    int t2 = h2*60 + m2;
    int t3 = (t1+t2)/2;
    int h3 = t3/60;
    int m3 = t3%60;

    stringstream ss;
    ss << setw(2) << setfill('0') << h3;
    ss << ':';
    ss << setw(2) << setfill('0') << m3;
    string sh = ss.str();
    cout<<sh;

    return 0;  
}