#include<iostream.h>
#include<conio.h>

class fibonacci
{
  private:
   int n,a[20];

  public:
   int i;
   void input()
   {
     cout<<"Enter the limit of Fibonacci Series:-";
     cin>>n;
   }
   void calc_fib()
   {
     a[0]=0;
     a[1]=1;
     for(i=2;i<n;i++)
     a[i]=a[i-1]+a[i-2];
   }
   void output()
   {
     cout<<"\n Fibonacci Series:- "<<a[0]<<" "<<a[1];
     for(i=2;i<n;i++)
	cout<<" "<<a[i];
   }
};

void main()
{
  fibonacci f;
  clrscr();
  f.input();
  f.calc_fib();
  f.output();
  getch();
}
