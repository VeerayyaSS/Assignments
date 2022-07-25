#include <multiasgn.h>

void func()
{
	cout<<"killed PID: "<<getpid()<<endl;

	kill(getpid(),SIGUSR1);
}


static void process_display_exit_code(int exitstatus)
{
	cout<<"interrupt signal("<<exitstatus<<") received"<<endl;
}


static void signalHandler(int ID)
{
	cout<<"ID:" <<ID<<endl;
}


void ReigsterSignal()
{
	signal(SIGINT, process_display_exit_code);
	signal(SIGILL, process_display_exit_code);
	signal(SIGFPE, process_display_exit_code);
	signal(SIGSEGV, process_display_exit_code);
	signal(SIGTERM, process_display_exit_code);
	signal(SIGABRT, process_display_exit_code);
	signal(SIGCHLD, process_display_exit_code);
}


int main(int argc,char *argv[])
{
	if(argc != 2)
	{
		cout<<"file : input.txt"<<endl;
		exit(EXIT_FAILURE);
	}
	
//	fstream f;
	char *fName = argv[1];
	
//	f.open(fName,ios::out|ios::in);
	
//	Wfile(fName,f);
	
//	f.seekg(0,f.beg);
	
//	Rfile(fName,f);
	
//	f.close();
	int pid,status;
	time_t t;
	pid = fork();
	if(pid<0)
	{
		perror("fork() error");
		exit(EXIT_FAILURE);
	}

	else if(pid == 0)
	{
		atexit(func);

		cout<<"Child process starts"<<endl;
		cout<<"Child process ID: "<<getpid()<<endl;
		cout<<"child parent pid: "<<getppid()<<endl;
		cout<<"Enter 2 lines"<<endl;
		Wfile(fName);
		sleep(25);
		exit(EXIT_FAILURE);

	}
	else 
	{
		atexit(func);

		do
		{
			if((pid = waitpid(pid,&status,0)) == -1)
			{
				signal(SIGCHLD,signalHandler);
				perror("wait() error");
			}
			else if(pid == 0)
			{
				
				time(&t);
				cout<<"\nChild is still running at"<< ctime(&t) <<endl;
				sleep(15);
			}
			else
			{
				signal(SIGCHLD,process_display_exit_code);
				
				if(WIFEXITED(status))
				{
					
					cout<<"child exited with the status "<< WEXITSTATUS(status)<<endl;
				}
				else if(WIFSIGNALED(status))
				{
					signal(SIGCHLD,process_display_exit_code);
					
					cout<<"Signaled: "<< status <<endl;
				}
				else
				{
					cout<<"child did not exit successfully"<<endl;
					cout<<"Parent process starts"<<endl;
					cout<<"Parent process ID"<< getpid() <<endl;
					cout<<"Parent's Parent pid:"<< getppid() <<endl;
					cout<<"Parent Reading the file"<<endl;
					
					Rfile(fName);
				}
			}
		}
		while(pid == 0);
	}

	return 0;
}
