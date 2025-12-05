#include<iostream>
using namespace std;
int main(){

    int space,str,row;
    cout<<"enter row "<<endl;
    cin>>row;

    for(int i=1;i<=row;i++)
	{
        for(space=1;space<=row-i;++space)
		{
           cout<<" ";
		}
           for(str=1;str<=i*2-1;str=str+1)
		   {
           cout<<"*";

           }
    cout<<endl;
    }
    return 0;
}
