/*write a program to create a class with function name login()
 and Display_info, Login() function will accept Pin(default value 123) from user as parameter and
  Display_Info() function will accept Name , Regno, marks,
  percentage and grade fro user as parameter and display all information entered by user on screen with welcome messagae.*/
  #include <iostream>
  using namespace std;
  class Student 
  {
    public : voidLogin(int pin) {
        if(pin==123) {
            cout<<"Login Successfull";
        }
       else{
        cout<<"Login fail";
       }
    }
  }

