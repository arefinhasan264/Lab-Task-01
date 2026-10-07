#include <iostream>
using namespace std;
int main()
{
    char a,b;
    cout << "Enter first two characters: ";
    cin >> a >> b;

    if(a =='/'&&b=='/')
    {
        cout<<"Comment Line";
    }
    else if(a=='/' && b == '*')
    {
        cout<<"Comment Line";
    }
    else
    {
        cout<<"Not a Comment Line";
    }

    return 0;
}
