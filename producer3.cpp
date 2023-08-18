#include<iostream>
#include<string.h>
using namespace std;

class Parame{
	public :
		int x,y,z;
		char name[100];
		Parame(int x, int y){
			this->x = x;
			this->y = y;
			  z = x+y;
			  
			  cout<<"Sum of X + Y = "<<z<<endl;	
		}
		Parame()
		{
				cout<<"Defualt Constructor"<<endl;
		}
		Parame(char name[])
		{
			strcpy(this->name,name);
			cout<<endl<<"Name = "<<name<<endl;
		}
		
		
		
	
	
};

int main()
{
	Parame p(15,35);	
	Parame q(10,20);
	Parame z("utsav");
	
	return 0;
}
