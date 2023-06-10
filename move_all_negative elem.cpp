#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e9+17;
const ll Q=1e5;

ll hsh[Q];

void solve(){


int n;
cin>>n;
int a[n],ans[n];
int i=0,k=n-1,j=0;

for(int i=0;i<n;i++){
    cin>>a[i];
}

while(j<=k){

   if(a[i]>0) {
        ans[k]=a[i];
        k--;
   }
else if(a[i]<0){
    ans[j]=a[i];
    j++;
}
i++;

}

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}


}



int main()
{
  while(1){
    solve();
    cout<<endl;
  }
}

