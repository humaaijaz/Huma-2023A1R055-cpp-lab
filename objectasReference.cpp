#include<iostream>
using namespace std;
class Program{
    public : int a;
    Program(int b){
        a=b;
    }
    void Display(){
        cout<<"Value of a is"<<a;
    }
};
void modify(Program &obj2) /*obj2 ref. is used as parameter to 
modify function(any change inside thus function will not modify
original object)*/
{
    obj2.a=20;
    /*any change made by object 2 will affect object 1 value */
}
int main(){
    Program obj1(10);
    obj1.Display();
    modify(obj1);
    obj1.Display();

}