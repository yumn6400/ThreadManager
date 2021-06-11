#include<iostream>
#include<array>
using namespace std;

void something(array<int,6> a)
{
cout<<"********"<<endl;
}
int main()
{
array<int,6> a({10,20,30,40,50,60});
something(a);
return 0;
}