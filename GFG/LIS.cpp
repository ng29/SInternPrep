#include <bits/stdc++.h>
using namespace std;
int lis(vector<int>&a ,int n ){
	int dp[n];
	dp[0]=1;
	for(int i=1;i<n;i++){
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j] && dp[i]<dp[j]+1)
			dp[i]=dp[j]+1;
		}
	}
	int m=dp[0];
	for(int i=1;i<n;i++){
		if(m<dp[i])	m=dp[i];
	}return m;
}
int main() {
	int n;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	cout<<lis(a,n)<<endl;
}
