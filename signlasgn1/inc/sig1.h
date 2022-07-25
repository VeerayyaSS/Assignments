#include <iostream>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <cstring>
#include <sys/wait.h>
#include <string>
#include <stdlib.h>
#include <signal.h>


#define MAXBUFF 1024

using namespace std;


static void func1(int signum)
{
//      cout<<" Sig Num : "<<signum<<endl;
        if(signum == SIGSEGV)
        {
                cout<<"sig num :"<<signum<<endl;

                cout<<"seg fault error occured"<<endl;
                exit(EXIT_FAILURE);
        }
        if(signum == SIGUSR1)
        {
                cout<<"Welcome user"<<endl;
        }

}

void mystrcat(char *str1,char *str2)
{
        int i;
        signal(SIGSEGV,func1);
 	str1 = new char [strlen(str2)+1];

        for(i=0;i<strlen(str2);i++)

                str1[i] = str2[i];

        str1[i] = '\0';
}
