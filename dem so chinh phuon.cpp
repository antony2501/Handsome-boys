#include<bits/stdc++.h>

using namespace std ;
    int main (){
    	int test;
    	cin>>test;
    	while(test--){
    	long long a,b;
    	cin>>a,b;
    	if (a>=0 && a<b){
		 	int start = sqrt(a);
		 	int end   = sqrt (b);
		 	cout << end-start+1<<endl;
    }
	}
}
