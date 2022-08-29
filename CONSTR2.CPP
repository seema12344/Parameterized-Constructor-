// A C++ Program using Parameterized Constructor 

#include<iostream.h>
#include<conio.h>

class Student
{
private:  
      int Roll_No;
	float Percentage;
public:
       Student(int R, float P)
       {
          Roll_No = R;
	  Percentage = P;
       }
      void displaydata()
       {
		cout<<"\n Roll No.:" << Roll_No;
		cout<<"\n Percentage:" << Percentage;
       }
 };


void main()
{
	clrscr();
	Student S(1, 90.00);

	S.displaydata();
	getch();
}

