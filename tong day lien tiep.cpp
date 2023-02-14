#include<bits/stdc++.h>
#define ll long long 
 using namespace std ;
   int tong(ll int n){
   	int sum=0;
   	sum = (n*(n+1))/2;
   	return sum;
   }
   int main (){
   	int test;
   	cin>>test;
   	while(test--){
   	ll a ,b;
   	cin>>a>>b;
   	cout << tong(b)-tong(a-1)<<endl;
   }
   }
