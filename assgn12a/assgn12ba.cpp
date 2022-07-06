// thread created using function object
 #include <iostream>
 #include <thread>

 using namespace std;
 class Person
 {
	 public:
 	void operator()(){
 		for(int i=1;i<=10;i++)
 			cout<<17*i<<endl;
 			}
};
int main()
{
 	thread t1((Person())); 
 	cout<<"\nExecuting main thread"<<endl;
 	for(int i=0;i<20;i++)
 	cout<<"Main Thread"<<i<<" = "<<i<<endl;
 	cout<<"\nExecuting the thread"<<endl;
 	t1.join();

 	return 0;
				
			
}
