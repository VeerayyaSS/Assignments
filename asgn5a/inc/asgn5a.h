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
		void dispwords()
		{
			for(int i=0;i<count;i++)
				cout<<w[i]<<" ";
			cout<<endl;
		}

		bool searchNReplace(char *key,char* repStr)
		{
			for(int i=0;i<count;i++)
			{
				if(strcmp(w[i],key)== 0)
				{
					w[i] = new char[strlen(repStr)+1];
					strcpy(w[i],repStr);
					return true;
				}
			}
			return false;

		}
		int getmaxwords()
		{
			int max = strlen(w[0]);
			int pos = 0;
			for(int i=0;i<count;i++)
			{
				if(max < strlen(w[i]))
				{
					max =strlen(w[i]);
					pos = i;
				}
			}
			return pos;
		}
};
