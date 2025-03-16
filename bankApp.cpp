/*wap to demonstrate working of passing object as referrence to function , create a class with name bankapp
 implement parametrized constructor to initialize class attributes like accountnumber , account balance
 implement display() function to display information on screen ,
 implement updatedamount() function that accept object as value and update account balance without changing original balance*/

 #include <iostream>
 using namespace std;
 
 class Bank_App
 {
 public:
     int accountnumber;
     float accountbalance;
     Bank_App(int an, float ab)
     {
         accountnumber = an;
         accountbalance = ab;
     }
 
     void display()
     {
         cout << "account number is " << accountnumber << " \n balance is " << accountbalance;
     }
 };
 
 void updateamount(Bank_App obj2)
 {
     float updateamt;
     cout << "enter the update amount";
     cin >> updateamt;
     cout << " the updated amount is " << updateamt;
 }
 int main()
 {
     int accountnumber;
     float accountbalance;
 
     cout << " enter account number";
     cin >> accountnumber;
     cout << " enter account balance ";
     cin >> accountbalance;
 
     Bank_App obj(accountnumber, accountbalance);
     obj.display();
     updateamount(obj);
     obj.display();
 }