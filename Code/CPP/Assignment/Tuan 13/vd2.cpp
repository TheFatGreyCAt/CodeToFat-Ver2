
#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define db double
#define nmax 100007
#define sz(a) int((a).size())
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FOR2(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

using namespace std;

class Complex{
    private:
        db a,b;
    public:
        Complex(): a(0), b(0) {}
        Complex(db a, db b): a(a), b(b) {}
        Complex operator*(Complex x){
            return Complex( a * x.a - b * x.b , (a * x.b + b * x.a) );
        }
        void display()
        {
            cout << a << "*" << b << "*i" << endl;
        }
};

void fatcat() {
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1.operator*(c2);
    c3.display();
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    //freopen("Meo.INP","r",stdin);
    //freopen("Meo.OUT","w",stdout);
    fatcat();
    return 0;
}