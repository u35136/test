#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    string str;
    while( getline( cin, str ))
    {
        int start=0,CF=1;
        for(int i=0;i<str.length();++i)
        {
            if(str[i]==' ' && CF==0)
            {
                reverse(str.begin()+start,str.begin()+i);
                CF=1;
            }
            else if(CF==1 && str[i]!=' ')
            {
                start=i;
                CF=0;
            }
        }
        if(CF==0)
        {
            reverse(str.begin()+start,str.begin()+str.length());
        }
        cout << str << endl;
    }
}

/*
I love you.
You love me.
We're a happy family.

*/
