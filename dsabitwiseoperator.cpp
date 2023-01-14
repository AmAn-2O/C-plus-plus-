#include<iostream>
using namespace std;
int main(){
  
//fibonacci series
int n;
cout<<"enter the no. ";
cin>>n;
cout<<"aman"<<endl;
int a=0;
int b=1;
cout<<a<<" "<<b<<endl;
cout<<"fibonacci series:\n";
for (int i = 1; i <=n; i++)
{
    int next_no=a+b;
    cout<<next_no<<" ";
    a=b;
    b=next_no;
}



return 0;   
}