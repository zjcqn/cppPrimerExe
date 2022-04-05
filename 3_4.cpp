#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;

int main(){
    string s1,s2;
    cout<<"please input two strings"<<endl;
    cin >> s1 >>s2;
    if(s1==s2)
        cout<<"equal strings"<<endl;
    else if (s1>s2){
        cout<<s1<<endl;
    }else{
        cout<<s2<<endl;
    }
}