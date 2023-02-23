#include<bits/stdc++.h>
using namespace std;
string add(string a, string b)
{
    string result = "";
    int s = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        s += ((i >= 0) ? a[i] - '0' : 0);
        s += ((j >= 0) ? b[j] - '0' : 0);
        result = char(s % 2 + '0') + result;
        s /= 2;
      i--; j--;
    }
    return result;
}
string DectoBin(int n)
{
 string r="",s="";
  while(n>0)
  {
    r+= char((n%2)+'0');
    n=n/2;
  }
 for(int i=r.size()-1;i>=0;i--)
  {
      s+=r[i];
  }
  return s;
}
int main()
{ int num1=11,num2=49,shifter=0;
  string a,b,c="0",p="0";
  a=DectoBin(num1);
  b=DectoBin(num2);

for(int j=b.size()-1;j>=0;j--)
{ if(b[j]=='1')
     {c=a;
     c.append(shifter,'0');// Hàm để nối 0 vào xâu shifter lần khi ta thêm 0 thì kết quả sẽ không bị thay đổi
     p=add(p,c);
     }
     ++shifter;

}
cout<<p;
}
