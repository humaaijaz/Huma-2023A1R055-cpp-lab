# include <iostream>
using namespace std;
 class shapes{
    private:float res=0;float l1;float b;

   public : void area (float radius){
       res=3.14*radius*radius;
       cout<<"\n Area of circle is "<<res;



    }
   public : void area (float l,float h){
         res=0.5*l*h;
         cout<<"\n arear of triangle is "<<res;
    }
   public :void area(){
         l1=6,b=9;
        res=l1*b;
        cout<<"Area of rectangle is "<<res;


    }


 };
 int main(){
shapes obj;
  obj.area();
 obj.area(6);
 obj.area(4,5);
  return 0;


 }



