#include<iostream>
using namespace std;
class Book{
    public:
    int id;
    string name;
};
int main(){
    Book B1;
    B1.id = 123;
    B1.name = "Programming in C";
    cout<<"Book ID: "<<B1.id<<endl;
    cout<<"Book Name: "<<B1.name<<endl;
    return 0;
}
