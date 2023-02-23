#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d,r,q=0;
    cin>>a>>d;
    r=abs(a);
    while(r>=d)
    {
        r=r-d;
        q++;
    }
    if(a<0 && r>0)
    {
        r=d-r;
        q=-(q+1);
    }
    cout<<"a div d= "<<q<<endl<<"a mod d= "<<r;

}
