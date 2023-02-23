#include<bits/stdc++.h>
using namespace std;
int a[10000];
int Trisearch(int key[], int item,int l, int r)

{   int mid1,mid2, result,step;

    result=0;

    while ((l<=r) && (result==0))

    {  step =(r-l) / 3;

        mid1=l+step;
        mid2=r-step;

        if (item == key[mid1] )
            {result=mid1;}

        else if (item == key[mid2] )
               {result=mid2;}

        else if (item > key[mid2])
                {l=mid2+1;}
        else if (item > key[mid1])
                {
                        l=mid1+1;
                        r=mid2-1;

                }
          else {r=mid1-1;}

    }

    return (result);

}


int main()
{
int n,x;
cin>>n;
for(int i=1;i<=n;i++)
{
 cin>>a[i];
}
cin>>x;
cout<<Trisearch(a,x,1,n);
}
