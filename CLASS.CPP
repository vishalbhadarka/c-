#include<iostream.h>
#include<conio.h>
class Demo
{
	int a;
	float b;
	char c;

	public:
		void get()
		{
			cout<<"Enter an int,float,char:";
			cin>>a>>b>>c;
		}
		void put();
};
void Demo::put()
{
	cout<<"\na="<<a;
	cout<<"\nb="<<b;
	cout<<"\nc="<<c;
}
void main()
{
	Demo d;
	clrscr();
	d.get();
	d.put();
	getch();
}
/*Enter an int,float,char:12
3.4
a
a=12
b=3.4
c=a*/