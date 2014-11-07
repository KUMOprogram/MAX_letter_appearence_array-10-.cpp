#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
system("color f1");

		string a[10];
		string word;
		int count[256];
		int i,j,k,max;
		char c;
		
		for (i=0; i<10; ++i)
		{
			cout<<"Dwse le3h "<<i+1<<": ";
			getline(cin,a[i]);  //diabasma le3ewn me kena anamesa tous
		}
				
		for (k=0; k<256; k++)
		{
			count[k]=0;   //arxikopoihsh
		}
		
		for (i=0; i<10; i++)
		{
			word=a[i];  //8etw to keli a[i] se ena string "word" wste na xrhsimopoihsw to word san pinaka grammatwn apo katw
			for (j=0; j<word.size(); j++)
			{	
				for (k=0; k<256; k++)
				{
					if (word[j]==k)
					{
						++count[k];
					}
				}
			}
		}
		
		max=0;
		for (k=0; k<256; k++)
		{
			if (count[k]>max)
			{
				max=count[k];
				c=k;
			}
		}
		
		cout<<"Poio polles fores emfanizetai to '"<<c<<"' "<<max<<" fores"<<endl;
		
system("pause");
}
