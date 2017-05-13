#include<iostream.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416
void main()
{
clrscr();
float radious,circlearea;
cout<<"Enter The Value Of Redious:";
cin>>radious;
circlearea=PI*radious*radious;
cout<<"The Area Of Circle is:"<<circlearea;
getch();
}