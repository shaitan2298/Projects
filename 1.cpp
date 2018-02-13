#include<iostream>
using namespace std;
int main()
{
   int a;
   cin>>a;
   if(a%3==0)
     cout<<"Dead"<<endl;
   if(a%5==0)
     cout<<"Man"<<endl;
   if(a%3==0 && a%5==0)
     cout<<"DeadMan"<<endl;
  return 0;
}
