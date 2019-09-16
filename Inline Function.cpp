#include<iostream.h>
#include<conio.h>

#define largest_no(a,b,c)((a>b)?((a>c)?a:c):((b>c)?b:c))

class largest
{
  int a,b,c,lar;
  public:
    void input();
    void calc_large();
    void output();
};
inline void largest::input()
{
  cout<<"\n Enter Three Numbers = ";
  cin>>a>>b>>c;
}
inline void largest::calc_large()
{
  lar=largest_no(a,b,c);

}
inline void largest::output()
{
  cout<<"\n Entered Three Numbers = "<<a<<" "<<b<<" "<<c;
  cout<<"\n Largest of Three Numbers = "<<lar;
}

void main()
{
  clrscr();
  largest l;
  l.input();
  l.calc_large();
  l.output();
  getch();
}
