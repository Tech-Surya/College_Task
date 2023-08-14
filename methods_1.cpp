#include <iostream>  
using namespace std;  
class Book {  
   public:  
       int id;//data member (also instance variable)      
       string name;//data member(also instance variable)      
       void insert(int i, string n)    
        {    
            id = i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<endl;    
        }    
};  
int main(void) {  
    Book b1; //creating an object of Book   
    Book b2; //creating an object of Book  
    b1.insert(123, "Programming in C");    
    b2.insert(321, "Data Structures and Algorithm");    
    b1.display();    
    b2.display();  
    return 0;  
}  
