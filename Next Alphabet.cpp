#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;

    if(c=='z')
        cout<<'a'<<endl;
    else
        cout<<char(c+1)<<endl;

}
/*Each letter has an ASCII value (a unique number for characters).
Here are the ASCII values for lowercase English letters:

'a' = 97
'b' = 98
'c' = 99
...
'y' = 121
'z' = 122


For uppercase letters:

'A' = 65
'B' = 66
...
'Z' = 90
*/
