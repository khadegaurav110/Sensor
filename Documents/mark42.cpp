// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     char names[5][20]={"gau","aaa","bbb","ddd","ccc"};
//     char array[20];
    
//     int i,j;
//     for(i=1;i<5;i++)
//     {
//         for(j=1;j<5;j++)
//         {
//             if(strcmp(names[j-1],names[j])>0)
//             {
//                 strcpy(array,names[j-1]);
//                 strcpy(names[j-1],names[j]);
//                 strcpy(names[j],array);
//             }
//         }
//     }
//     cout<<endl<<"sorted";
//     for(i=0;i<5;i++)
//     cout<<endl<<names[i];
    
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;
    
    // Take input from the user
    cout << "Enter a string: ";.
    cin >> input;
    
    // Loop through each character and check if it's alphabetic
    for (char c : input) {
        if (isalpha(c)) {  // Check if the character is alphabetic
            result += c;   // Add to result if it is alphabetic
        }
    }

    // Output the extracted alphabetic part
    cout << "Output: " << result << endl;

    return 0;




       string name="gaurav";

   string output;
   cout<<name.length();
   for(int i=name.length();i>=0;i--)
   {
    output+=name[i];
   }
   cout<<output;






   for(int i=0;i<name2.length();i++)
{
    char_code=name2[i];

    if(char_code==122)
    {

        name2[i]=char(97);
    }
    else if(char_code==90){
        name2[i]=char(65);


    }
    else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
    {
        name2[i]=char(char_code+1);
    }
}
cout<<name2;









    for(int i=0;i<name2.length();i++)
    {
        if(i==0||name2[i-1]==' ')
        
        {
            name2[i]=toupper(name2[i]);
        }
    }
cout<<name2;









bool flag;
    char c;
  do{

flag=false;
for (int i = 0; i <name2.length(); i++)
{
   if(name2[i]>name2[i+1])
   {
    c=name2[i+1];
    name2[i+1]=name2[i];
    name2[i]=c;
    flag=true;
   }
}

  }while (flag);



cout<<name2;





  int a=0;
    for(int i=0;i<int(name2.size());i++)
    {
        if(name2[i]=='a'||name2[i]=='e'||name2[i]=='i'||name2[i]=='o'||name2[i]=='u')
        {
a++;
        }
    }
  cout<<a;
}
