//Thread using lamda function
#include <iostream>
#include<thread>

using namespace std;

int main()

{

	std::thread t1([]{
	for(int i=1;i<=5;i++)
	cout<<9*i<<endl;
	});

	cout<<"\nExecuting main thread"<<endl;
	for(int i=0;i<25;i++)
	cout<<"in main i = "<<i<<endl;
	cout<<"\nExecuting the thread"<<endl;
	t1.join();
	return 0;
}
