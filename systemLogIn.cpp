#include <iostream>
using namespace std;
string email;
string password;
string userEmail; string userPassword;int back;
void login(); void register1(); void website(); void reset(); void exit();

int main(){
    int num = 0; back =0;
      cout << "                                      " << '\n';
        cout << "                                     " << '\n';
    cout << "______System Login______ " << '\n';
    cout << "(1) Login" << '\n';
    cout << "(2) Register" << '\n';
    cout << "(3) Reset Password" << '\n';
    cout << "(4) Exit" << '\n';
    cin >> num;

    switch(num){
        case 1: login();
        break;
        case 2: register1();
        break;
        case 3: reset();
        break;
        case 4: exit();
        break;
        default:
          cout << "                                                                                               " << '\n';
        cout << "Please enter a number" << '\n';
    }
    return 0;
};

void login(){
    userEmail = " ";
    userPassword = " ";
    do{
        if(userEmail == "1"){
            main();
        }
          cout << "                                                                                                       " << '\n';
    cout << "Please enter your email: " << '\n';
    cin >> userEmail;
    if(userEmail != email){
        cout << "Invalid email" << '\n';
        cout << "Please try again or press 1 to go back" << '\n';
    }
    } while (userEmail != email);
    do{
          if(userPassword == "1"){
            main();
        }
          cout << "                                                                                                   " << '\n';
    cout << "Please enter your password: " << '\n';
    cin >> userPassword;
    if(userPassword != password){
        cout << "Invalid password" << '\n';
        cout << "Please try again or press 1 to go back" << '\n';
    }
    } while(userPassword != password);
      cout << "                                                                                                     " << '\n';
        cout << "                                                                                                            " << '\n';
    website();
};
void register1(){
    cout << "Please choose an email: " << '\n';
    cin >> email;
    cout << "Please choose a password: " << '\n';
    cin >> password;
    cout << "Welcome to the website!" << '\n';
    main();
};
void website(){
    int input = 0;
    cout << " ______RYAN'S WEBSITE______ " << '\n';
     cout << "| Welcome Back!            |" << '\n';
     cout << "| (1) Logout               |" << '\n';
    for(int i =0; i < 10; i++){
    cout << "|                          |" << '\n';
    }
    cout << "|__________________________|" << '\n';
    cin >> input;
     if (input == 1){
        main();
     }

};
void reset(){
    string rEmail = " ";
    cout << "Please enter your email: " << '\n';
    cin >> rEmail;
    if(rEmail == email){
        cout << "Your password is " << password << '\n';
        main();
    } else if(rEmail == "1"){
        main();
    }
    else{
        cout << "Invalid email" << '\n';
        cout << "Please try again or press 1 to go back" << '\n';
        reset();
    }

};
void exit(){
    for(int i = 0; i < 3; i++)
    cout <<"                                                                                                                         " << '\n';
};