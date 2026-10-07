#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter input: ";
    cin>>str;

    bool isNumeric=true;

    for(int i=0;i<str.length();i++){
        if(str[i]<'0'||str[i]>'9'){
            isNumeric=false;
            break;
        }
    }
    if(isNumeric){
        cout<<"numeric constant"<<endl;
    } else {
        cout<<"not numeric"<<endl;
    }

    return 0;
}
