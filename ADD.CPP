#include<iostream.h>
#include<conio.h>
#include<conio.h>
class calculator
{
public:
int sum(int x,int y)
{return(x+y);
}
public:
int devide(int x,int y)
{return(x/y); }
};
void main()
{ clrscr();
 calculator CAL;
 int x,y,z,r;
cout<<"enter two numbers";
cin>>x>>y;
z=CAL.sum(x,y);
r=CAL.devide(x,y);
cout<<"sum is"<<z<<"devide us\n"<<r;
   getch();
}