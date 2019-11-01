#include<bits/stdc++.h>
using namespace std;

//¶þ·Ö·¨
/
long long pow_mod2(long long a,long long n,long long m){
	if(n==0)
		return 1;
	long long x=pow_mod(a,n/2,m);
	long long ans=x*x%m;
	if(n%2==1)
		ans=ans*a%m;
	return ans;
}

long long pow_mod(long long a,long long n,long long m){
	if(a==0)
		return 1%m;
	long long ans=1;
	while(n>0){
		if(n&1)
			ans=(ans*a)%m;
		a=(a*a)%m;
		n>>=1;
	}
	return ans;
}
 
int main(){
	long long b,p,k,ans=1;  cin>>b>>p>>k;
	ans=pow_mod(b,p,k);
	cout<<b<<"^"<<p<<" mod "<<k<<"="<<ans<<endl;
	return 0;
}
