#include<iostream.h>
#include<conio.h>
class Demo
{
	int a;
	float b;
	char c;
	void get();

	public:
		void put()
		{
			get();
			cout<<"\na="<<a;
			cout<<"\nb="<<b;
			cout<<"\nc="<<c;
		}
};
void Demo::get()
{
	cout<<"Enter an int,float,char:";
	cin>>a>>b>>c;
}
void main()
{
	Demo d;
	clrscr();
	//d.get we don't this because it private
	d.put();
	getch();
}