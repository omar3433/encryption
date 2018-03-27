#include <iostream>
#include<string>
using namespace std;

int main()
{
    while(true)
    {
    int counter=0,x=0,y=0 ;
    char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string index="" ;
    cout <<"Ahlan ya user ya habibi. \n"
         <<"What do you like to do today? \n"
         <<"1-cipher message \n"
         <<"2-decipher message \n"
         <<"3-end \n";
    cin >> y;
    if (y==1)
    {
    cout << "Enter your message : " ;
    cin >> index ;
    for(int i=0;i<index.length();i++)
    {
        while(counter<26 && index[i]!=' ')
        {
            if(index[i]==alph[counter])
            {
                x=counter+13 ;
                if(x>=25)
                {
                    x-=26;
                    cout << alph[x];
                    x=0;
                    break;
                }
                else
                {
                    cout << alph[x];
                    counter=0;
                    x=0;
                    break;
                }
            }else
            {
                counter++;
            }
        }
    }
    cout << endl ;
    }
    else if (y==2)
        cout << index << endl ;
    else if (y==3)
        break ;
    else
	cout<<"false index,try again ..." <<endl ;

    return 0;
    }
}
