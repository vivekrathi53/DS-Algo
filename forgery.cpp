/*
  Vivek Rathi
  CSE 2nd Year
  MNNIT
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
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 1e17
int main()
{
	boost
	ll n,m;
	cin>>n>>m;
	string s[n];
	ll v[n][m]={0};
	for(ll i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if(i-1>=0&&j-1>=0&&i+1<=n-1&&j+1<=m-1)
			{
				if(s[i-1][j]=='#'&&s[i+1][j]=='#'&&s[i][j-1]=='#'&&s[i][j+1]=='#'&&s[i-1][j-1]=='#'&&s[i-1][j+1]=='#'&&s[i+1][j-1]=='#'&&s[i+1][j+1]=='#')
				{
					v[i-1][j]=v[i+1][j]=v[i][j-1]=v[i][j+1]=v[i-1][j-1]=v[i-1][j+1]=v[i+1][j-1]=v[i+1][j+1]=1;
				}
			}
		}
	}
	ll flag=0;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			if(s[i][j]=='#'&&v[i][j]==0)
			{
				flag=1;
			}
		}
	}
	if(flag==1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	return 0;
}