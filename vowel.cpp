#include<iostream.h>
#include<conio.h>
void main()
{
char vowel;
clrscr();
cout<<"Enter a character";
cin>>vowel;
if(vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u')
{
cout<<"The character is vowel";
}
else
{
cout<<"The character is invalid";
}
getch();
}
