/*prog to demonstrate working of a passing object as a parameter to*/
#include<iostream>
using namespace std;
class Program{
    public : int a=10;
    void display(){
        cout<<"\n Value of a is "<<a;
    }
};

    void method1(Program obj1){//Pass by value
        obj1.a=20;
        cout<<"\n Value of a in method1 is"<<obj1.a;
    }
    void method2(Program &obj){ //pass by reference
        obj.a=30;
        cout<<"\n Value of a in method2 is"<<obj.a;
    }
    void method3(Program *obj){//pass by pointer
        obj->a=40;
        cout<<"\n Value of a in method3 is"<<obj->a;
    }
    void method4(const Program obj2){/*pass by constant reference(
        read only )*/
      
        cout<<"\n Value of a in method1 is"<<obj2.a;
    }
    int main(){
        Program obj;
        obj.display();
        method1(obj);
        obj.display();
        method2(obj);
        obj.display();
        method3(&obj);
        obj.display();
        method4(obj);
        obj.display();
        return 0;
    }