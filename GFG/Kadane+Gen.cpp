#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	//Kadane algo
	// int msofar=0,mher=0;
	
	// for(int i=0;i<n;i++){
	// 	mher+=v[i];
	// 	if(mher<0)	mher=0;
	// 	else if(msofar<mher)
	// 		msofar=mher;
	// }
	
	//For all negative numbers 
	int msofar=v[0],cm=v[0];
	for(int i=0;i<n;i++){
		cm=max(v[i],cm+v[i]);
		msofar=max(cm,msofar);
	}
	cout<<msofar<<endl;
}
