#include<iostream>
#include<array>
using namespace std;
template<typename whatever,size_t count>
void something(array<whatever,count> &a)
{
cout<<count<<endl;
}
int main()
{
array<int,6> a({10,20,30,40,50,60});
something(a);
array<int,3> aa({40,50,60});
something(aa);
return 0;
}