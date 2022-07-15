#include <iostream>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<csignal>

using namespace std;
int pid,i;
static void func1(int id)
{
	cout<<"\n i= "<<i<<endl;
	cout<<"Child dies"<<endl;
	wait(NULL);
	cout<<"id "<< id<<endl;
}
int main(int argc,char* argv[])

{
    int N;
   // cout<<"Enter the N Value"<<endl;
 //   cin>>N;
 //   int pid;
   N=atoi(argv[1]);
    signal(SIGCHLD,func1);
    pid = fork();
    if(pid == 0){
       for(int i=0; i<=N; i++)
    
        if(i%2 != 0)
     {
        cout<<"odd numbers are"<<i<<endl;
     }
    }
    else{
	    int ret;
	wait(0);
	cout<<"Parents "<<endl;
       for(int i=0;i<=N;i++)
        if(i%2 == 0)
        {
         cout<<"even numbers are" << i <<endl;
	}
	 cout<<"parent died"<<endl;
        
    }
   
     return 0;
}
