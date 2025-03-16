/*
 wap to create a class name billingapp with attributes like Product name, Price
 implement a function discount()
 that calculates 10% discount on price and display result
 discount function will not modify original price of the product*/

 #include<iostream>
 using namespace std;
 class BillingApp{
    public : 
    string Productname;
    float price;
    BillingApp(string Pn, float Pr){
        Productname = Pn;
        price = Pr;
     
    }
    void Display(){
        cout<<"The name of the product is"<<Productname;
        cout<<"The orignal price of the product is"<<price;

    } 
    
 };
 void Discount(BillingApp ob1)
 {
    float dis;
    dis = ob1.price/10;
    cout<<"discount="<<dis;
    cout<<"latest price is"<<ob1.price-dis;
 }
 int main(){
    BillingApp ob2("A",999);
    ob2.Display();
    Discount(ob2);
 }