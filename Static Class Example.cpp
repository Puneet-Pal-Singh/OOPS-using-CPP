#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

class auditorium
{
  char name[30];
  int id,seat_no;
  static int count;
  public:
    void input()
    {
      cout<<"\n \n \t :::: Enter Details of Guest ::::";
      cout<<"\n Enter the ID = ";
      cin>>id;
      cout<<"\n Enter the Name = ";
      gets(name);
      cout<<"\n Enter the Seat Number = ";
      cin>>seat_no;
      count++;
    }
    void output()
    {
      cout<<"\n \n \t :::::: Details of Guest :::::: ";
      cout<<"\n ID          : "<<id;
      cout<<"\n Name        : ";
      puts(name);
      cout<<" Seat Number : "<<seat_no;
    }
    static void total()
    {
      cout<<"\n \n ---------------------------------------------------";
      cout<<"\n  Total Number of Guests = "<<count;
      cout<<"\n ---------------------------------------------------";
    }
};
    void owner()
    {
      

int auditorium::count=0;
void main()
{
  auditorium a[100],a1;
  clrscr();
  int n;
  cout<<"\n How Many Guest Details Do You Want to Enter = ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    a[i].input();
    a[i].output();
  }
  a1.total();
  owner();
  getch();
}
