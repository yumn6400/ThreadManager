#include<iostream>
#include<tuple>
using namespace std;
void cool(int a,int b,int c,int d,int e,int f)
{
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
cout<<f<<endl;
}
template<typename whatever,size_t count,size_t ...cartoon>
void great(array<whatever,count> &a,index_sequence<cartoon ...>)
{
auto t=make_tuple(a[cartoon] ...);
cool(get<cartoon>(t)...);
}
template<typename whatever,size_t count,typename xyz=make_index_sequence<count>>
void something(array<whatever,count> &a)
{
great(a,xyz());
}
int main()
{
array<int,6> a({10,20,30,40,50,60});
something(a);
return 0;
}