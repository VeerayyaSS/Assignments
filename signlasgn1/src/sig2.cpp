#include <iostream>
#include <signal.h>
#include <cstring>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string>
#include <fstream>


#define MAXBUFF 1024

using namespace std;

static void func(int signum)
{
	switch(signum)
	{
		case SIGSEGV:
			cout<<"Sig Number: "<<signum<<endl;
			cout<<"Segmentation fault error ocurred :"<<endl;

			exit(EXIT_FAILURE);

			break;

		case SIGUSR1:
			cout<<"Wel come User!"<<endl;
			break;

		case SIGHUP:
			cout<<"Signal hangup ocurred!: "<<signum<<endl;
			break;

		case SIGCHLD:
			cout<<"Signal child ocurred!: "<<signum<<endl;
			break;

		default:
			cout<<"\n unhandled signal: "<<signum<<endl;
	}
}

int main ()
{
	sighandler_t ret = signal(SIGUSR1,func);

	if(ret == SIG_ERR)
	{
		perror("signal() error");
		exit(EXIT_FAILURE);
	}

	int pid,status;
	
	pid = fork();

	if(pid == 0)
	{
		cout<<"Child's process ID: "<< getpid() <<endl;
		cout<<"child's Parent ID: "<< getppid() <<endl;
		
		for(;;);
		
	}
	else
	{
		signal(SIGCHLD, func);
		
		waitpid(pid, &status, 0);
		
		cout<<"Parent PID: "<< getpid() <<endl;
		cout<<"Parent's Parent ID: "<< getppid() <<endl;
		cout<<"Status : "<< status <<endl;
	}
	
	return (EXIT_SUCCESS);
}


