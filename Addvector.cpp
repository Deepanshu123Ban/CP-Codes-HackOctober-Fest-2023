#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v;
int n,num;
cout<<"Enter n ";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Enter num for push in vector ";
cin>>num;
v.push_back(num);
}

for(int i=0;i<v.size();i++)
{
cout<<v[i]<<" ";
}
return 0;
}
