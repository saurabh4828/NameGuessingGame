#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{

 int n,k=0,p,x,z=0;
 char a[6][5]={{'A','B','C','D','E'},{'F','G','H','I','J'},{'K','L','M','N','O'},{'P','Q','R','S','T'},{'U','V','W','X','Y'},{'Z',' ',' ',' ',' '}};
 char b[10][6],name[10];
 clrscr();

 cout<<"\n\n\n\n\n\n\n\n\t\t\t WELCOME TO THE NAME GUESSING GAME !";
 getch();
 clrscr();

 cout<<"\n\n\n\n\n\n\n\n\t\t\t THINK A NAME IN YOUR MIND...";
 getch();
 clrscr();

 cout<<"\n\n\t HOW MANY ALPHABETS ARE THERE IN THE NAME : ";
 cin>>n;
 clrscr();

 while(k!=n)
 {
  cout<<"\n NOW LOOK AT THE FOLLOWING ARRANAGEMENT OF APLHABETS AND ANSWER THE QUESTION :-\n";
  for(int i=0;i<6;i++)
  {
   cout<<"\n\t";
    for(int j=0;j<5;j++)
    {
      cout<<"\t"<<a[i][j];
    }
   cout<<"\n";
  }
  cout<<"\n\n IN WHICH COLOUMN "<<k+1<<" LETTER OF THE NAME APPEARS : ";
  cin>>p;

  clrscr();

  p--;

  for(x=0;x<6;x++)
  b[k][x]=a[x][p];      // converting second arrangement

  k++ ;
 }


 while(z!=n)
 {
  cout<<"\n\n NOW LOOK AT THIS ARRANGEMENT OF ALPHABETS AND ANSWER :-\n ";
  for(int i=0;i<n;i++)
   {
    cout<<"\n\t";
     for(int j=0;j<6;j++)
     {
       cout<<"\t"<<b[i][j];
     }
    cout<<"\n";
  }
  cout<<"\n\n IN WHICH COLOUMN "<<z+1<<" LETTER OF THE NAME APPEARS : \n\n";
  cin>>p;

  p=p-1;

  clrscr();

  name[z]=b[z][p];
  z++;
 }

 name[z]=' ';

 cout<<"\n\n\n\n\t\t THE NAME WHICH YOU HAD THOUGHT IS ";
 puts(name);
 getch();
}