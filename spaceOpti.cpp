#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int f(int n){
// 	int cur;
// 	int prev=1;
// 	int perv2=0;
// 	for(int i=2;i<=n;i++){
// 		cur=prev+perv2;
// 		prev2=perv;
// 		prev=cur;
// 	}
// 	return prev;

			
// }
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;cin>>n;
	// cout<<f(n);

	int prev=1;
	int prev2=0;
	for(int i=2;i<=n;i++){
		int curr=prev+prev2;
		prev2=prev;
		prev=curr;
	}
	cout<<prev2;
	return 0;
}
//0 1 1 2 3 5 8 13 21