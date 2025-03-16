//method 1 call by value (passing obj as parameter)

#include<iostream>
using namespace std;
class Program{
    public : int a;
    Program(int b){
        a=b;
         }
    void Display(){
        cout<<"Value of a is "<<a;
    }
};
void modify(Program obj2)//obj2 is a parameter to modify function and 
//it will not modify original function
{
    obj2.a=20;
    obj2.Display();  //any chnage made by obj2 wont affect obj1 value
}
int main(){
    Program obj1(10); //original value passed by object 1
    obj1.Display();
    modify(obj1);
}
// in Call by Value, any change inside the function 
//accepting object as 
//parameter wont modify 