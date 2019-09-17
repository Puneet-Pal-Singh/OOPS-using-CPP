//This program finds greatest of two given numbers in two different classes using freind function.

#include<iostream.h>
#include<conio.h>

class B;
class A
{
  int i;
  public:
    void input()
    {
      cout<<"\n Enter the First Number = ";
      cin>>i;
    }
    friend void largest(A,B);
};

class B
{
  int j;
  public:
    void input()
    {
      cout<<"\n Enter the Second Number = ";
      cin>>j;
    }
    friend void largest(A,B);
};

void largest(A a1,B b1)
{
  if(a1.i>b1.j)
    cout<<"\n Largest Number = "<<a1.i;

  else
    cout<<"\n Largest Number = "<<b1.j;
}

 main()
{
  clrscr();
  A a1;
  B b1;
  a1.input();
  b1.input();
  largest(a1,b1);
  getch();
}
