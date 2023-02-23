#include<bits/stdc++.h>
using namespace std;
int input[1000],tansuat[1000],output[1000];
void print( int a[],int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
        tansuat[input[i]]++;
    }
    int maxa=input[0];

    for(int i=1;i<n;i++)
    {
        if(input[i]>maxa){maxa=input[i];}
    }

    for(int i=0; i<=maxa; i++)
    {
        tansuat[i]=tansuat[i]+tansuat[i-1];
    }

    for(int i=0; i<n; i++)
    {
        output[tansuat[input[i]]-1]=input[i];
        tansuat[input[i]]--;
    }

    for(int i=0; i<n; i++)
    {
        cout<<output[i]<<" ";
    }

}
