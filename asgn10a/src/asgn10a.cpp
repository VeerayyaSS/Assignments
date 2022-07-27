#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main(int argc,char* argv[])
{
	int i;

	try
	{
		if(argc >= 2)
		{
			cout<<"Valide Arguments"<<endl;

			for(i=1; i<argc; i++)
			{
				cout<<"strings ["<<i<<"]"<< argv[i] <<endl;
			}
		}
		
		else
		{
			throw argc;
			
		}
	}
	
	catch(int argc)
	{
		cout<<"Insuffiecient arguments,enter atleast 2 arguments"<<endl;
	}
	
	return 0;
}

