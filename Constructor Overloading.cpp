#include<iostream.h>
#include<conio.h>
#include<string.h>

class String
{
  char *str;
  public:
    String()
    {
      strcpy(str,"NULL");
      cout<<"\n \n Default or Non-Parameristed Constuctor is Invoked..... \n "<<str;
      getch();
    }
    String(char *s)
    {
      str=s;
      cout<<"\n \n Parameterised Constuctor is Invoked..... \n "<<str;
      getch();
    }
    String(String &s1)
    {
      str=s1.str;
      cout<<"\n \n Copy Constuctor is Invoked..... \n "<<str;
      getch();
    }
    ~String()
    {
      cout<<"\n \n Destructor is Invoked..... \n ";
      cout<<"Deleted "<<str;
      getch();

    }

};
 

void main()
{
  clrscr();
  String name1;
  String name2="ABC";
  String name3=name2;
  getch();
}
