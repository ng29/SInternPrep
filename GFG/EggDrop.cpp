#include <iostream>
using namespace std;

int main() {
	int e,f,r;
	cin>>e>>f;
	
	int d[e+1][f+1];
	
	for(int i=1;i<=e;i++){
		d[i][0]=0;
		d[i][1]=1;
	}
	for(int i=1;i<=f;i++)
		d[1][i]=i;
		
	for(int i=2;i<=e;i++){
		for(int j=2;j<=f;j++){
			
			d[i][j]=INT_MAX;
			for(int x=1;x<=j;x++){
				r=1+max(d[i-1][x-1],d[i][j-x]);
				if(d[i][j]>r)	d[i][j]=r;
			}
		}
	}cout<<d[e][f]<<endl;
	
}
