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

int DoM(int m, int y)
{
    int res = 31;
    if(m==2)
    {
        if(y%400==0 || (y%4==0 && y%100!=0)) res = 29;
        else res = 28;
    }
    else if(m==4 || m==6 || m==9 || m==11) res = 30;
    return res;
}

void TheNextDay(int d, int m, int y)
{
    int res = d+1;
    if(res>DoM(m,y))
    {
        res = 1;
        m++;
        if(m>12)
        {
            m = 1;
            y++;
        }
    }
    cout << res << "/" << m << "/" << y;
}

void fatcat()
{
    int d,m,y;
    cin >> d >> m >> y;
    TheNextDay(d,m,y);
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