#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Word{
	private:
		char *w[5];
		int count;
	public:
		Word(){ count =0;}
		~Word()
		{
			for(int i=0;i<count;i++)
			delete w[i];
		}

		int getcount()
		{
			return count;
		}
		char *getmaxword(int pos)
		{
			return w[pos];
		}
		void setvalues(char *line)
		{
			char * tokens = strtok(line, " ");
			while(tokens != NULL)
			{
				if(tokens!= NULL)
					break;
				w[count] = new char[strlen(tokens)+1];
				strcpy(w[count],tokens);
				tokens = strtok(NULL," ");
				count+=1;
			}
		}
		void dispwords();

		bool searchNReplace(char *, char* );
		int getmaxwords();
};

