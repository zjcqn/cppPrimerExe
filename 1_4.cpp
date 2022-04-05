#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){
    cout<<"请输入两个数字"<<endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << v1 << "和" << v2 << "的积为"
        << v1 * v2 << endl;
}