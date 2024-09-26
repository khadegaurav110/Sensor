#include<iostream>
using namespace std;
#include<memory>
#include<string>

// for (int i=0;i<name2.length();i++)
// {
//     char_code=int(name2[i]);
//    cout<<char_code<<endl;
// } 


void stringconversion(string name2)
{
    int count=0;
    for(int i=0;i<name2.length();i++)
{
    if(name2[i]==' ')
    {count++;}

}  
cout<<count+1;
}  


int main()
{
  
string name ="aeiou ccc";
 stringconversion(name);

}