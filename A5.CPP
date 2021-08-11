#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char* my_itoa(int i,char[]);

void main()
{
	char *str;
	int no;

	clrscr();

	cout<<"\n Enter No : ";
	cin>>no;

	str = my_itoa(no,str);

	cout<<"\n No is : "<<str;

	getch();
}

char* my_itoa(int i,char b[])
{
	itoa(i,b,10);

	return(b);
}