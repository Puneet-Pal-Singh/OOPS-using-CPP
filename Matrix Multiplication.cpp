#include<iostream.h>
#include<conio.h>

class matrix
{
  float a[10][10],b[10][10],c[10][10],r1,c1,r2,c2;
  public:
  int i,j,k;
  void input();
  void mult_matrix();
  void output();
};
void matrix:: input()
{
  // aa:  
  {
  cout<<"\n Enter Number Rows and Columns of First Matrix:";
  cin>>r1>>c1;
  cout<<"\n Enter Number Rows and Columns of Second Matrix:";
  cin>>r2>>c2;
  while(c1!=r2)
  {
    cout<<"ERROR!! \n COLUMN OF FIRST MATRIX IS NOT EQUAL TO ROW OF SECOND MATRIX \n";
    getch();
    // goto aa;
  cout<<"\n Enter Number Rows and Columns of First Matrix:";
  cin>>c1;
  cout<<"\n Enter Number Rows and Columns of Second Matrix:";
  cin>>r2;
  }
  cout<<"\n Enter element of Matrix 1: \n";
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      cout<<"\n Enter element a"<<i+1<<j+1<<":";
      cin>>a[i][j];
    }
  }
  cout<<"\n Enter element of Matrix 2:\n ";
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      cout<<"\n Enter element b"<<i+1<<j+1<<":";
      cin>>b[i][j];
    }
  }
  for(i=0;i<r1;i++)
    for(j=0;j<c2;j++)
      c[i][j]=0;
}
void matrix::mult_matrix()
{
  for( i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
      for( k=0;k<c1;k++)
      {
	c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
}
void matrix::output()
{
  cout<<"\n First Matrix: \n";
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
      cout<<" "<<a[i][j]<<"\t";
    cout<<endl;
  }
  cout<<"\n Second Matrix: \n";
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
      cout<<" "<<b[i][j]<<"\t";
    cout<<endl;
  }
  cout<<"\n \n Resultant Matrix:\n \n";
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    cout<<" "<<c[i][j]<<"\t";
    cout<<endl;
  }
}

matrix m;

void main()
{
  clrscr();
  m.input();
  m.mult_matrix();
  m.output();
  getch();
}
