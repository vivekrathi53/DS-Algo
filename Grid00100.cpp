/*
  Vivek Rathi
  CSE 3rd Year
  MNNIT
  THUMB RULE - THINK FOR DP FIRST AND THEN GREEDY!!!
*/
#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define debug1(x) cout<<#x<<" "<<x<<endl;
#define debug2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
#define present(c,x) ((c).find(x) != (c).end())
#define null NULL
#define mp make_pair
#define sz(x)	(ll)x.size()
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define inf 1e18
#define flush fflush(stdout);
#define endl '\n'
//unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
//shuffle (foo.begin(), foo.end(), std::default_random_engine(seed));
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<ll, null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
ll modpower(ll a,ll b,ll c)
{
	ll res=1;
	while(b)
	{
		if(b&1LL)
			res=(res*a)%c;
		a=(a*a)%c;
		b>>=1;
	}
	return res;
}
//-------------------------------Template--Above-----------------------------------------------

int main()
{
	boost
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n][n];
		memset(a,0,sizeof(a));
		ll i=0,j=0;
		while(k--)
		{
			a[i][j]=1;
			i++;
			if(i==n)
				i=0,j=(j+1)%n;
			j=(j+1)%n;
		}
		ll rmax=0,rmin=inf,cmax=0,cmin=inf;
		for(ll i=0;i<n;i++)
		{
			ll cur=0;
			for(ll j=0;j<n;j++)
			{
				cur+=a[i][j];
			}
			rmax=max(rmax,cur);
			rmin=min(rmin,cur);
		}
		for(ll j=0;j<n;j++)
		{
			ll cur=0;
			for(ll i=0;i<n;i++)
			{
				cur+=a[i][j];
			}
			cmax=max(cmax,cur);
			cmin=min(cmin,cur);
		}
		cout<<(cmax-cmin)*(cmax-cmin)+(rmax-rmin)*(rmax-rmin)<<endl;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}

	}
	return 0;
}