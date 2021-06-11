#include<iostream>
#include<tuple>
using namespace std;
template<typename whatever,size_t count,size_t ...cartoon>
void great(array<whatever,count> &a,index_sequence<cartoon ...>)
{
auto t=make_tuple(a[cartoon] ...);
cout<<get<0>(t)<<endl;
cout<<get<1>(t)<<endl;
cout<<get<2>(t)<<endl;
cout<<get<3>(t)<<endl;
cout<<get<4>(t)<<endl;
cout<<get<5>(t)<<endl;
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