#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c;
cout<<" Enter the Valu OF a,b,c:";
cin>>a>>b>>c;
if((a>b)&&(a>c))
{
cout<<"the Lergest number is a:"<<a;
}
else if((b>a)&&(b>c))
{
cout<<"The Lergest number is b:"<<b;
}
else{
cout<<"The Lergest number is c:"<<c;
}
getch();
}