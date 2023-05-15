#include <iostream>
#include <string>

using namespace std;

void swap(int &a,int &b){
    int tmp = move(a);
    a = move(b);
    b = move(tmp);
}



string printMe(){
    return "I am print";
}

int main(){
    int a = 3;
    int b = 4;
    swap(a,b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    string s = printMe(); //copy()

    string&& ss = printMe(); //refere value

    cout << s << ss << endl;
    return 0;
}
