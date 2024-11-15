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

template <class T> void input(int n, T *a){
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

template <class T> T maxNum(int n, T *p){
    T res = *p;
    for(int i = 1; i < n; i++) {
        if (res < *(p + i)) res = *(p + i);
    }
    return res;
}

template <class T> T swap (T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
} 

template <class T> T sortArray(int n, T *p)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(p + i) > *(p + j)) {
                swap(*(p + i), *(p + j));
            }
        }
    }
}

template <class T> void output(int n, T *a){
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
} 



void fatcat() {
    int n;
    cin >> n;

    int *a = new int[n];
    input(n, a);

    cout << "The maximum number is: " << maxNum(n, a) << endl;

    delete[] a;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    //freopen("Meo.INP","r",stdin);
    //freopen("Meo.OUT","w",stdout);
    fatcat();
    return 0;
}