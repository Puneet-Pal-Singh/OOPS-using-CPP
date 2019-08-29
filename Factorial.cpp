#include<iostream.h>
#include<conio.h>

class factorial
{
  private:
  float num,fact;
  public:
  void input()
  {
    cout<<"Enter the Number:";
    cin>>num;
  }
  void calc_fact()
  {
    int i;
    fact=1;
    for(i=1;i<=num;i++)
      fact=fact*i;
  }
  void output()
  {
    cout<<"\n Factorial of "<<num<<" = "<<fact;
  }
};

void main()
{
  factorial f;
  clrscr();
  f.input();
  f.calc_fact();
  f.output();
  getch();
}
