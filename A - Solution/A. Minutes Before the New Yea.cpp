#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int t;
 cin>>t;
 while(t--)
 {
     int h,m;
     cin>>h>>m;
     cout<<1440-(60*h)-(m)<<endl;
 }
 return 0;
}