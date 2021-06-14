

#include <iostream>

using namespace std;

int main() {
	string s;
	cin>>s;
	int flag =0;
	long long int count=0;
	for(int i=s.length()-1; i>0;i--){
		if(s[i]=='1'){
			if(flag==0){
				//cout<<"1 ";
				flag =1;
				count+= 2;
			}else{
				//cout<<"2 ";
				count++;
			}
		}else if(s[i]=='0'){
			if(flag==0){
				count++;
				//cout<<"3 ";
			}else{
				//cout<<"4 ";
				flag=1;
				count+=2;
			}
		}
	}

	if(flag==1 && s[0]=='1'){
		count++;
	}

	cout<<count;
	return 0;
}


