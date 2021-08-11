/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Order{
	int p;
	int n;
	vector<pair<int, int>> ri;
};

int machine_cost(vector<Order> &orders,int i,int j, vector<pair<int, bool>> &ci,int m){
	if(j==0){
		return 0;
	}

	int rent = orders[i].ri[j-1].second + machine_cost(orders, i, j-1, ci, m);
	int buy = 0;
	if(ci[orders[i].ri[j-1].first-1].second==false){
		buy = ci[orders[i].ri[j-1].first-1].first;
		ci[orders[i].ri[j-1].first-1].second = true;
	}
	buy = buy + machine_cost(orders, i, j-1, ci, m);
	if(buy>rent){
		ci[orders[i].ri[j-1].first-1].second = false;
		return rent;
	}
	return buy;
}


int get_cost(vector<Order> &orders,int i,vector<pair<int, bool>> &ci,vector<int> &rents){
	int missing = orders[i].n;
	int res = 0;
	for(int j=0;j<missing;j++){
		if(ci[orders[i].ri[j].first-1].second == false){
			res = res + orders[i].ri[j].second;
		}
	}
	return orders[i].p - res;
}

int get_max_profit(vector<Order> &orders,int mo,vector<pair<int, bool>> &ci,vector<int> rents){

	int dp[mo+1];
	dp[0] = 0;
	// if(mo==0){
	// 	return 0;
	// }

	for(int i=1;i<=mo;i++){
		dp[i] = max(dp[i-1], dp[i-1] + get_cost(orders, i-1, ci, rents));
	}
	//int res = get_max_profit(orders, mo-1, ci, rents);
	//res = max(res, get_cost(orders, mo-1, ci, rents) + get_max_profit(orders, mo-1, ci, rents));

	return dp[mo];
}

int main()
{
	//Write code here
	int mo, m;
	cin>>mo>>m;
	vector<pair<int, bool>> ci(m);
	vector<Order> orders(mo);
	vector<int> rents(m,0);
	int price;
	int missing;
	int total_input;
	int nu,r;
	for(int i=0;i<mo;i++){
		cin>>price>>missing;
		total_input += price;
		orders[i].p = price;
		orders[i].n = missing;
		for(int j=0;j<missing;j++){
			cin>>nu>>r;
			orders[i].ri.push_back({nu, r});
			rents[nu-1] += r;
		}
	}
	int c;
	int total_cost = 0;
	for(int i=0;i<m;i++){
		cin>>c;
		if(rents[i]>c){
			ci.push_back({c, true});
			total_cost += c;
		}else{
			ci.push_back({c, false});
		}	
	}
	
	int ans = get_max_profit(orders, mo, ci, rents);

	cout<<ans - total_cost;
}


