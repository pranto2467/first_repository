#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e9+17;
const ll Q=1e5;

ll hsh[Q];

ll CountSet(int a){

ll ans=0;
while(a!=0){

   if(a&1==0) ans++;
    a=a>>1;


}


return ans;


}


int main(){

int n;
cin>>n;

cout<< CountSet(n)<<endl;


}
