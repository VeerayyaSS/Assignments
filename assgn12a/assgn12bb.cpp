//Thread created by function calling
#include <iostream>
#include <thread>
using namespace std;
void Function()
{
	for(int i=1;i<=10;i++)
	cout<<10*i<<endl;
}
int main()
{
	thread t1(Function); 
	for(int i=0;i<30;i++)
	cout<<"Thread"<<i<<" = "<<i<<endl;
	t1.join();
	t1.detach();
	return 0;
}
