#include<iostream>
using namespace std;
int main ()
{
  char str1[20] = "C++";
  char str2[20] = "_Programming";
  char str3[20] = "Vrunda";
  char str4[20] = "Vrunda";
  char str5[5];

  int ab, i, j, k;

  strcpy(str5, str3);
  cout<<"THE FINAL STR AFTER STRCPY = "<<str5<<endl<<endl;

i = strcmp (str3, str4);
j = strcmp (str3, "hii");
k = strcmp (str4, "h");
cout<<"THE VALUE AFTER STRCMP WILL BE \n"<<i<<endl<<j<<endl<<k<<endl<<endl;

strcat (str1, str2);
cout<<"THE FINAL STR AFTER STRCAT = "<<str1<<endl<<endl;

ab = strlen(str4);
cout<<"LENGTH oF STRING AFTER STRLEN = "<<ab<<endl<<endl;
cout<<"AFTER STRREV = "<<strrev(str4)<<endl<<endl;
return0;
}   
