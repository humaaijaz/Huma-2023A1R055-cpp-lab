/* Program to demonstrate implementation of Array using Direct Intialization Method
*/
# include <iostream>
using namespace std;
class Program
{
 private : int adv[5] ={1,2,3,4,5}  ;//Declaration and Initialization
 int weak[5] ={ 6,7,8,9};
 int i;
 public: void Display()
 {
    cout<<"List of Advance Learners\t";
    for(i=0;i<5;i++){
        cout<<adv[i]<<"\t";

    }
    cout<<"List of Weak Learners\t";
    for(i=0;i<5;i++){
        cout<<weak[i]<<"\t";
 }
 }
};
int main(){
    Program obj;
    obj.Display();
}
    