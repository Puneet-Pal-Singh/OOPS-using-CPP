#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class exam
{
  protected:
    float marks[5],total,avg;
  public:
    void nums(int nn)
    {
      if(nn==1)
	cout<<"st ";
      else if(nn==2)
	cout<<"nd ";
      else if(nn==3)
	cout<<"rd ";
      else if(nn>=4)
	cout<<"th ";
    }
    void input_marks();
     void total1()
     {
       total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
       cout<<"\n Total Marks : "<<total;
     }

    void average()
    {
      avg=total/5;
      cout<<"\n Average : "<<avg;
    }
};

    void exam::input_marks()
    {
      cout<<"\n Marks of 5 Subjects : \n ";
      for(int i=0;i<5;i++)
      {
	aa:
	cout<<"\n "<<i+1;
	nums(i+1);
	cout<<"Subject : ";
	cin>>marks[i];
	if(marks[i]<0||marks[i]>100)
	{
	  cout<<"\n \n ERROR!!! \n MARKS CANNOT BE LESS THAN 0 OR GREATER THAN 100 \n ";
	  getch();
	  goto aa;
	}
      }
    }


class student:public exam
{
  protected:
    char name[30];
    int roll_no;
  public:
    void input()
    {
      cout<<"\n \t :::::::: Enter Details of Student :::::::: \n ";
      cout<<"\n Roll Number : ";
      cin>>roll_no;
      cout<<"\n Name of Student : ";
      gets(name);
      input_marks();
    }
};
class result:public student
{
  public:
    void output();
    void owner();
}r;
 
    void result::output()
    {
      cout<<"\n \n \t :::::::: Details of Sudent :::::::: \n ";
      cout<<"\n Roll Number : "<<roll_no;
      cout<<"\n Name : ";
      puts(name);
      cout<<" Marks : ";
      for(int i=0;i<5;i++)
	cout<<marks[i]<<" ";
      total1();
      average();
    }

void main()
{
  clrscr();
  r.input();
  r.output();
  getch();
}
