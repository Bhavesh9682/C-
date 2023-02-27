#include<iostream>
using namespace std;
struct student
{
    char Name[20];
    int Id;
    int DOB;
    char Branch[20];
    int Marks;

};
int main(){
student s;
cout<<"Enter the studnet name=";
cin>>s.Name;
cout<<"Enter the Id=";
cin>>s.Id;
cout<<"Enter the DOB=";
cin>>s.DOB;
cout<<"Enter the Branch=";
cin>>s.Branch;
cout<<"Enter the Marks=";
cin>>s.Marks;

cout<<"Enter the student Name="<<s.Name<<endl;
cout<<"Enter the Id"<<s.Id<<endl;
cout<<"Enter the DOB="<<s.DOB<<endl;
cout<<"Enter the Branch="<<s.Branch<<endl;
cout<<"Enter the Marks="<<s.Marks<<endl;
}