#include<iostream>
using namespace std;

template  <class X> void fun( X a)
{

    cout<<"inside"<<end;

};
int main()
{
    int a=20;
    fun(a);
}