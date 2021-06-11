#include<iostream>
#include<thread>
#include<tuple>
using namespace std;
void whatever(int sp,int ep)
{
for(int i=sp;i<=ep;i++)cout<<i<<" ";
}
template<typename p2f,typename ...whatever>
class ThreadManager
{
private:
thread *ttt;
p2f funcAddress;
tuple<whatever ...> t;
public:
ThreadManager(p2f f,whatever... n):funcAddress(f),t(n...),ttt(NULL){};
~ThreadManager()
{
if(ttt)
{
this->ttt->join();
delete ttt;
}
}
void start()
{
threadStarter(t,index_sequence_for<whatever ...>());
}
template<size_t ...c>
void threadStarter(tuple<whatever ...>&t,index_sequence<c ...>)
{
this->ttt=new thread(funcAddress,get<c>(t)...);
}
};
int main()
{
ThreadManager<void(*)(int,int),int,int> tm(whatever,100,200);
cout<<"thread is about to start on seperate thread"<<endl;
tm.start();
for(int i=15000;i<=15150;i++)cout<<i<<" ";
return 0;
}