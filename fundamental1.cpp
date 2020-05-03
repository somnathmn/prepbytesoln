#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int X;
  int Y;
  cin>>X;
  cin>>Y;
  
   if (X<Y)
     { 
         cout<<X<<" is smaller than "<<Y; 
     }
     else  if (X>Y)
     { 
         cout<<X<<" is greater than "<<Y; 
     }
     else
     {
      cout<<X<<" is equal to "<<Y; 
     }
     
     return 0;
}
