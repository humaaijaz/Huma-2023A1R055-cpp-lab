/*Write a program to print the area of a rectangle 
by creating a class named 'Area' having one function.
Length and breadth of the rectangle are entered through keyboard 
using parameterized constructor*/
# include <iostream>
using namespace std;
class Area{
    
public :  Area(float length, float breadth) // Parameterized Constructor
{
    
    float res= length *breadth;
    cout<<"Area of rectangle is\n" <<res;
}
};
int main(){
   
    float length,breadth;
    cout<<"enter length";
    cin>>length;
    cout<<"enter breadth";
    cin>>breadth;
    Area obj(length,breadth);

    return 0;

}