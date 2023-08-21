#include <iostream>
#include <string>

using namespace std;

int main()
{

    cout << "\n Welcome to String and Loop Practice" << endl;

    string myTestStr = "The dog is very big and fluffy";

    //For Strings

    //find()
    int myIndex = myTestStr.find("Dog");
    //at()
    cout << "\n at() is " << myTestStr.at(5) << endl;
    //size()
    cout << "\n size() is " << myTestStr.size() << endl;
    //append()
    cout << "\n append() is " << myTestStr.append("xyz") << endl;
    //length()
    cout << "\n length() is" << myTestStr.length() << endl;
    //clear()
    //cout << "\n clear() is " << myTestStr.clear() << endl;
    //empty()
    if (myTestStr.empty()){
        cout << " \n the string is empty";
    }
    else {
        cout <<  " \n The string is not empty";
    }

    //substr()
    //find the five character starting at 8
    string mySubStr = myTestStr.substr(7, 5);
    cout << "\n\n mySubstr(7,5) = " << mySubStr << endl;

    //For Loops & While Loops

    //The factorial of a number
    //61=1*2*3*4*5*6=720

    int number;
    cout << "\n Enter a number: ";
    cin >> number;

    int factor = 1;

    for(int i = 1; i <= number;i++)
    {
        factor = factor * i;
        cout << "Your number is " << factor << endl;
    }

    system("pause>0");

    return 0;
}
