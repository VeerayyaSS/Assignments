#include <asgn8b.h>

void Stack::content(int argc,char* argv[])
{
	for(int i=1;i<argc;i++)
    	{
	    	str=argv[i];
	     	ll.push_back(str);
        }
	
	itr=ll.begin();
	ll.unique();
	
	cout<<"Here is the list\n";
	
	while(itr!=ll.end())
	{
		cout<<"\n"<<*itr++<<endl;
	}
   
    	itr=ll.begin();
    	ll.unique();
	
	stack<string>st;
												    
	while(itr!=ll.end())
	{
	   st.push(*itr++);
    	}

	cout<<"Here is the stack\n";
	
	while(itr!=ll.end())
	{
		cout<<"\n"<<st.top();
		st.pop();
	}
}
																			 
int main(int argc, char* argv[])
{
	Stack S;
	S.content(argc,argv);														   
}
