#include <bits/stdc++.h>

using namespace std;

class Circle
{
    private:
        double r;
        string c;
        double x1;
        double y1;
    public:
        //tao
        Circle(){
            r = 0;
            c = "";
            x1 = 0;
            y1 = 0;
        }

        Circle(double r, string c, double x1, double y1)
        {
            this -> r = r;
            this -> c = c;
            this -> x1 = x1;
            this -> y1 = y1;
        }
        Circle(Circle &x)
        {
            r = x.r;
            c = x.c;
            x1 = x.x1;
            y1 = x.y1;
        }
        //thietlap
        void setR(double r)
        {
            this -> r = r;
        }
        void setC(string c)
        {
            this -> c = c;
        }
        // ham lay
        double takeR()
        {
            return r;
        }

        string takeC()
        {
            return c;
        }

        double takeX()
        {
            return x1;
        }

        double takeY()
        {
            return y1;
        }

        //hienthi
        void show()
        {
            cout << "ban kinh: " << r << '\n';
            cout << "mau sac: " << c << '\n';
            cout << "tam duong tron" << x1 << ',' << y1 << '\n';
        }

        //tinh S
        int Area()
        {
            return 3.14 * r * r;
        }

        // so sanh voi doi tuong khac
        friend string compare(Circle x, Circle y);

        friend string location(Circle x,Circle y);

        //hamhuy
        //~Circle();
};

string compare(Circle x, Circle y)
{
    double Ax = x.Area();
    double Ay = y.Area();

    if(Ax < Ay) 
        return "less";
    else if(Ax > Ay) 
        return "greater";
    else 
        return "equal";
}

string location(Circle x, Circle y)
{
    double Ox1 = x.takeX();
    double Oy1 = x.takeY();
    double R1 = x.takeR();

    double Ox2 = y.takeX();
    double Oy2 = y.takeY();
    double R2 = y.takeR();

    double distance = sqrt( (Ox1 - Ox2) * (Ox1 - Ox2) + (Oy1 - Oy2) * (Oy1 - Oy2) );

    if(distance > (R1 + R2)) 
        return "khong giao";

    return "giao";
}

void fatcat()
{
    Circle mot;
    Circle hai(4, "vang", 1, 1);
    Circle bon(2, "do", 3, 3);

    cout << location(hai, bon);
}

int main()
{
    fatcat();
    return 0;	
}