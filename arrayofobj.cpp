/* Program to demonstrate working of Array of Object
*/
# include <iostream>
using namespace std;
class Books_Records
{
    private:int BookNo; string BookName;
    public: Books_Records(int B,string N){//Parameterized class
      BookNo = B;
      BookName= N;

    }
    public:void Display(){
        cout<<"\n Book Number is"<<BookNo<<"\t Book Name is "<<BookName;

    }
};
int main()
{
    Books_Records obj[5]={{1,"CPP"},{2,"Java"},{3,"C"},{4,"c#"},{5,"PHP"}};//Array of objects
    int i;
    for(i=0;i<5;i++){
        obj[i].Display();
    }
}