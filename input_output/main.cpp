#include <iostream>
#include <string>
using namespace std;

int main()
{
    // print msg to console
    cout << "Hi This is going to be print in console" << endl;

    int num{10};
    // print number to console
    cout << num << endl;

    // print error msg to console
    cerr << "something happened!" << endl;

    // print log msg to console
    clog << "Log Message: Some issue occured" << endl;

    // reading input form terminal
    cout << "Please Enter Age and Name;" << endl;
    int age;
    string full_name;
    string name;
    // cin >> age;
    // cin >> full_name;

    cin >> age >> name;

    cout << "Name: " << name << " Age :  " << age << endl;

    // read data with spaces
    cout << "Enter full name:" << endl;
    /* if here is a newline character left in the input stream,
    so it doesn't read your c-string. Use cin.ignore() before calling getline()
    */
    cin.ignore();
    getline(cin, full_name);
    cout << "Your full Name" << full_name << endl;
    return 0;
}