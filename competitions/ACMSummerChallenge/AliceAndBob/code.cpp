


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	long long int a,b,c,d,A,B,C,D,s;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>A>>B>>C>>D;
		s = A+B+C+D;
		a = A%2;
		b = B%2;
		c = C%2;
		d = D%2;
		if(s%2==0){
			if(d==0 && a==0 && b==0 && c==0){
				cout<<"Bob"<<"\n";
			}else if(d==1 && a==1 && b==1 && c==1){
				cout<<"Bob"<<"\n";
			}else{
				cout<<"Alice"<<"\n";
			}
		}else{
			if(d==1 && ((a==0 && b==0 && c==0) || (a==1 && b==1 && c==0 && C!=0) || (a==0 && A!=0 && b==1 && c==1) || (a==1 && b==0 && B!=0 && c==1))){
				cout<<"Bob"<<"\n";
			}else if(d==0 && ((a==1 && b==1 && c==1) || (a==1 && b==0 && c==0)
			 || (a==0 && b==1 && c==0) || (a==0 && b==0 && c==1))){
				cout<<"Bob"<<"\n";
			}else{
				cout<<"Alice"<<"\n";
			}
		}
	}
}


