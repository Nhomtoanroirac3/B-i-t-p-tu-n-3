#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int item,int low, int high)
{
    if (high <= low)
        return (item > a[low]) ?
               (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == a[mid])
        return mid + 1;

    if (item > a[mid])
        return binarySearch(a, item,
                            mid + 1, high);
    return binarySearch(a, item, low,
                        mid - 1);
}
void scanf(int a[],int n)
{

    for(int i=1; i<=n; i++)
        cin>>a[i];
}
void print( int a[],int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int n,x,j,i,vt;
    cin>>n;
    int a[n+3];

    scanf(a,n);

    for(i=2; i<=n; i++)
    {
        j=i-1;
        x=a[i];
        vt=binarySearch(a,x,1,j);
        while(j>=vt)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }

    print(a,n);
}
