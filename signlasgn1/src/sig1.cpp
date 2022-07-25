#include <sig1.h>

using namespace std;

int main()
{
	sighandler_t ret = signal(SIGINT,func1);
	
	if(ret == SIG_ERR)
	{
		perror("signal() error");
		exit(EXIT_FAILURE);
	}
	
	if(raise(SIGUSR1)!= 0)
	{
		perror("raise() error");
		exit(EXIT_FAILURE);
	}
//	while(1)
//	{
//		sleep(2);
//		cout<<"signal demo"<<endl;
//	}
	
	char *str1,str2[10];
	cin >>str2;
	char *str3 = NULL;
	
	str1 = new char[strlen(str2)+1];
	mystrcat(str1,str3);

	cout<<"str1: "<<str1<<endl;
	cout<<"str2: "<<str2<<endl;

	return EXIT_SUCCESS;
}
