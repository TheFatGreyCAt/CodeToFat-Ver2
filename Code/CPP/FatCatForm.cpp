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

// string checkName(string name)
// {
//     string stg = "Anh";
//     return name.find(stg);
// }

int DoM(int m, int y)
{
    int res = 31;
    if(m == 2){
        if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) res = 29;
        else res = 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) res = 30;
    return res;
}

struct TDate
{
    int d,m,y;
};

int ageCal(TDate birth)
{
    TDate cur(17,11,2024);
    int age = cur.y - birth.y;
    if (cur.m < birth.m || (cur.m == birth.m && cur.d < birth.d)) age--;
    return age;
}

class Person
{
    private:
        string name;
        TDate birth;
        string country;
    public:
        Person() : name(), birth(), country() {} 
        Person(string name, TDate birth, string country ) : name(name), birth(birth), country(country){}
        Person(Person &p) : name(p.name), birth(p.birth), country(p.country){}
        TDate getBirth()
        {
            return birth;
        }
        int getAge()
        {
            return ageCal(birth);
        }
        void input()
        {
            cin.ignore();
            cout << "Name: " << "\n";  getline(cin, name);
            cout << "Birth: (d m y)" << "\n"; cin >> birth.d >> birth.m >> birth.y;
            cin.ignore();
            cout << "Country: " << "\n"; getline(cin, country);
        }
        void output()
        {
            cout << "Name: " << name << endl;
            cout << "Birth: " << birth.d << "/" << birth.m << "/" << birth.y << endl;
            cout << "Country: " << country << endl;
        }
};

void fatcat()
{
    int n;
    cin >> n;
    Person ps[50];
    int ages;
    for(int i = 0; i < n ; i++)
    {
        cout << "Person " << i + 1 << endl;
        ps[i].input();
        a[i] = ps[i].getAge();
    }

    for (int i = 0; i < n; i++)
    {
        for( int j = i + 1 ; j  < n ; j++)
        {
            if(ages[i] > ages[j])
            {
                swap(ages[i],ages[j]);
                Person tmp = ps[i];
                ps[i] = ps[j];
                ps[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << "Person " << i + 1 << endl;
        ps[i].output();
    }

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