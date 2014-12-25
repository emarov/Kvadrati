#include <iostream>

using namespace std;
class Rect
{
    public:
    int x,y,a;
    Rect (int x1,int y1,int a1);
    bool intersect(Rect r);
};

Rect::Rect(int x1,int y1,int a1)
{
    x=x1;
     y=y1;
      a=a1;
}

bool Rect::intersect(Rect r)
{
       bool m(true);
     if ((r.x>a+x)or (y>r.y+r.a)or(r.x+r.a<x)or(y+a<r.y)) m=false;
     return m;
}

int main()
{
int x,y,x1,y1,a;
cout<<"vvedi parametri dioganal'nih tochek 1"<<endl;
cin>>x>>y>>x1>>y1;
a=x1-x;
Rect r1(x,y,a);
cout<<"vvedi parametri ädioganal'nih tochek 2"<<endl;
cin>>x>>y>>x1>>y1;
a=x1-x;
Rect r2(x,y,a);
bool b1 = r1.intersect(r2);
bool b2 = r2.intersect(r1);
if (b1==b2)
    {
     if (b1==1) cout<<"yes"<< endl;
     if (b1==0) cout<<"no"<< endl;
    }
else cout <<"error"<<endl;
    return 0;
}
