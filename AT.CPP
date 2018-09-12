#include<iostream.h>
 class donor
 {
  char name[20];
  char address[20];
  char email[20];
  char bg[5];
  char gender;
  long phone_no;
  int age;

public: void get_data()
 {
  cout<<"enter name\n";
  cin>>name;
  cout<<"enter age\n";
  cin>>age;
  cout<<"enter adress\n";
  cin>>address;
  cout<<"enter email\n";
  cin>>email;
  cout<<"enter blood group\n";
  cin>>bg;
  cout<<"enter gender\n";
  cin>>gender;
  cout<<"enter mobile number\n";
  cin>>phone_no;
 }
public: void show_data()
  {
  cout<< name << age<< address<< email<< bg<< gender<< phone_no;
  }
 };
 void main()
 {
 donor list;
 char ch;
 do
 {
 list.get_data();
 list.show_data();
 cout<<"enter choice:Y or y";
 cin>>ch;
 }
while(ch=='Y'||ch=='y');
}