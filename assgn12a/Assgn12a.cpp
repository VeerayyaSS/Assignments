#include<iostream>
#include<string>
#include<cstring>
#include<thread>
#include<vector>
#include<ostream>
#include<sstream>

using namespace std;

 void validate(string s){
	  if(isalpha(s[0])){
		      
		  string s1=s.substr(s.length()-4);
		 
      		  if(s1==".com" || s1==".edu"){

			  cout <<s<<" - Valid"<<endl;

		  }

		  else{

			  cout <<s<<" - Not Valid"<<endl;

		  }

	  }
	    else{

		    cout <<s<<" -Not Valid"<<endl;

	    }

 }

int main(int argc, char* argv[])

{

	int i;
	cout<<"Enter the arguments "<< argc <<endl;

	for(i=0; i<argc; i++)
		{
			cout<<argv[i]<<endl;
		}

	char *ptr;	
		
	string str;

	str=argv[1];

	string s[100],s1,T;

	stringstream X(str);

	int j=0;

	int m=0;

	if(str.length()>1){

		j=0;

		while(getline(X,T,',')){

			s[j++]=T;

			m+=1;

		}

	}



	for(int i=0;i<=m;i++){

		thread* t1=new thread(validate,s[i]);

	}

	return 0;

}
