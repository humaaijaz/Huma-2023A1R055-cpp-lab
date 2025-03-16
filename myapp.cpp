/*Write a program to create a class with name MyAPP and with functions name,
 Accept() and Display(), Accept function will accept email and password from user and
 Display() function will display the information entered by the user on screen*/
 #include<iostream>
 using namespace std;
 class MyAPP
 {
    public : voidAccept(string Email, string Password)
    {

        cout<<"\nInformation entered by user is(Accept)";
        
        cout<<"\nEmail= <<Email<<" "\n Password is=<<Password";     
    
    }                                  
 int main()
 {
    MyAPP obj;
    string Email1, Password1;
    cout<<"\n Enter your email";
    cin>>Email1;
    cout<<"\n  enter your password";
    cin>> Password1;
    obj Accept(Email1,Password1);
    return 0;
 }
 