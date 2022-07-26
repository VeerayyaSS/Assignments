#include <5a.h>
using namespace std;

void Word::dispwords()
{
	for(int i=0;i<count;i++)
		cout<<w[i]<<" ";
		cout<<endl;
}

void Word::bool searchNReplace(char *key,char* repStr)
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
void Word::getmaxwords()
{
	int max = strlen(w[0]);
	int pos = 0;
	for(int i=0;i<count;i++)
	{
		if(max < strlen(w[i]))
		{
			max = strlen(w[i]);
			pos = i;
		}
	}
	return pos;
}
