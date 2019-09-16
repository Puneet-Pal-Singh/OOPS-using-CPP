#include<conio.h>
#include<iostream.h>

int var=50;

class demo
{
  int var,new_var;
  public:
    demo()
    {
      var=5;
    }
    void input()
    {
      cout<<"\n Initial Value of 'var'in class 'demo'="<<var;
      cout<<"\n Initial Value of Global 'var'="<<::var;
      cout<<"\n \n Enter New value for 'var'=";
      cin>>new_var;
    }
    void output()
    {
      char ch;
      var=new_var;
      cout<<"\n Changed Value of 'var' in Class 'demo'="<<var;
      cout<<"\n \n Value of global 'var' is Still="<<::var;
      cout<<"\n Do You Want to Change Global 'var' value (y/n)=";
      cin>>ch;
      if(ch=='y')
      {
       cout<<"\n Changing Value of Global 'var'......";
       cout<<"\n Press Any Key to Continue....";
       getch();
       ::var=new_var;
       cout<<"\n Changed value of Global 'var'="<<::var;
      }
    }
}d;

void main()
{
 clrscr();
 d.input();
 d.output();
 getch();
}
