#include <asgn5a.h>

int main()
{
	Word wd;
	string line;
	
	getline(cin,line);
	wd.setvalues((char*)line.c_str());
	wd.dispwords();

	cout<<"max word : "<<wd.getmaxword(wd.getmaxwords())<<endl;
	cout<<"\n enter the word to searched : "<<endl;
	string key;
	cin>>key;
	cout<<"\n enter the word to be replace with:"<<endl;
	string repStr;
	cin>>repStr;
	if(wd.searchNReplace((char*) key.c_str(),(char *)repStr.c_str())==true)
	{
		cout<<"after replacing a word"<<endl;
		wd.dispwords();
	}
	return 0;
}
