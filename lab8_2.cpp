#include <iostream>
#include <string.h>
using namespace std;

int main()
{
string a,b,c,x;
int y;

cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
cout << "?????: ";
getline(cin,x);

cout <<"Fahsai: Wow!!! "<<x<<" is a really cool name.\n";
cout <<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout <<x<<": ";

cin>> y;
cin.ignore();

int z= (y/10000000)-12;
cout <<"Fahsai: I think you may be GEAR "<<z<<". I have a free movie ticket for you.\n";
cout<<"Fahsai: Let's go to the cinema together!!!\n";
cout<<"Fahsai: What movie do you want to watch?\n";
cout<<x<<": "<< a;
getline(cin,a);

cout <<"Fahsai: So....which day are you free to go with me?\n";
cout <<x<<": "<<b;

getline(cin,b);

cout <<"Fahsai: "<<b<<"....that is OK!!! I'm looking forward to watching "<<a<<" with you.\n";
cout <<x<<": "<<c;

getline(cin,c);

cout <<"Fahsai: 555+ see you "<<b<<". Bye Bye "<<'\\'<<"(^ ^)/";
    return 0;
}
