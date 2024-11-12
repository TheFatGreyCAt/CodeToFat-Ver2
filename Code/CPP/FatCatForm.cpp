#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define nmax 100007
#define sz(a) int((a).size())
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FOR2(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

using namespace std;
ld a[nmax],b,c,m,n,d,t;

int ucln(int m, int n)
{
    if(n==0) return m;
    else return ucln(n,m%n);
}

void fatcat()
{
    //cout << "meowlo world";
    cout << "hello";
    cout << ucln(6,15);
}

int main()
{ 
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
    //freopen("Meo.INP","r",stdin);
    //freopen("Meo.OUT","w",stdout);
    fatcat();
    return 0;
}