#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int rem,count=0;
    while(n!=0)
    {
      rem=n%10;
      n=n/10;
      if(rem==5)
      count++;
    }
    cout<<count<<"\n";
  }
  return 0;
}
