#include <iostream>
using namespace std;
int main()
{
    char a[20];
    int i,flag = 1;

    cout<<"Enter: ";
    cin>>a;

    if(a[0]>='0'&&a[0]<= '9')
    {
        flag=0;
    }

    for(i=1;a[i]!='\0';i++)
    {
        if(!((a[i] >= 'A' && a[i] <= 'Z') ||
             (a[i] >= 'a' && a[i] <= 'z') ||
             (a[i] >= '0' && a[i] <= '9') ||
             a[i] == '_'))
        {
            flag = 0;
        }
    }

    if(flag==1)
        cout<<"Identifier";
    else
        cout<<"Not Identifier";

    return 0;
}
