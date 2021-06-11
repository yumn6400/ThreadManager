#include<iostream>
#include<tuple>
using namespace std;
template<size_t ...whatever>
void great(index_sequence<whatever ...>)
{
auto t=make_tuple(whatever ...);
cout<<get<0>(t)<<endl;
cout<<get<1>(t)<<endl;
cout<<get<2>(t)<<endl;
cout<<get<3>(t)<<endl;
cout<<get<4>(t)<<endl;
cout<<get<5>(t)<<endl;
}
template<typename xyz=make_index_sequence<6>>
void something()
{
great(xyz());
}
int main()
{
something();
return 0;
}