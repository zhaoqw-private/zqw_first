#include <cstdlib>
#include<iostream>
using namespace std;
//extern int globalx;
int globalx=10;

struct student{
    int id;
    student(){
        id=0;
        cout <<"student ::student():id="<<id<<endl;
    }
}; 
int main ()
{
    char s []= "helloworld";
    cout<<s<<endl;
    s[0]='b';
    cout<<s<<endl;
    

}
