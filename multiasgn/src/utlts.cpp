#include <multiasgn.h>


void Wfile(char *fName)
{
        string line;
        fstream f;

        f.open(fName,ios::out);

        if(!f)
        {
                cout<<"unable to open file"<<endl;
                exit(EXIT_FAILURE);
        }

        for(int i=0;i<2;i++)
        {
                getline(cin,line);
                f<< line <<endl;
        }
        f.close();
}

void Rfile(char *fName)
{
        string line;
        fstream f;

        f.open(fName,ios::in);

        if(!f)
        {
                cout<<"unable to open file for reading"<<endl;
                exit(EXIT_FAILURE);
        }

        line = "";

        while(getline(f,line))
        {
                cout<< line <<endl;
                line = "";
        }
	f.close();
}
