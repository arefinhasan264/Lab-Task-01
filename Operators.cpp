#include <iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter expression: ";
    cin>>str;

    int count=1;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '=') {
            cout << "operator" << count << ": " << str[i] << endl;
            count++;
            }
        }

    return 0;
}
