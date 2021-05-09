#include <iostream>
#include <string> 
//#include <unistd.h>
#include <cmath>
using namespace std;

int validate(int x)
{
  bool valid = false;
  cout << "Checking input for errors..." << endl;
  do
  {
    cout << "Enter the same number: ";
    cin >> x;
    if(cin.good())
    {
      valid = true;
    }
    else
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input" << endl << endl;
    }
  }while(!valid);

  return x;
}

int main() {
  string exit;
  do
  {
    int x = 0;
    int y = 0;
    int answer = 0;
    string z = "";

    cout << "Enter first number: ";
    cin >> x;
    x = validate(x);
    cout << endl << "Enter second number: ";
    cin >> y;
    y = validate(y);
    cout << endl << "Operation: ";
    cin >> z;

    string tolower(z);

    if(z == "+" || z == "add")
    {
      answer = x + y;
      cout << endl << "Answer: " << answer << endl;
      cout << "Continue?(q to exit)";
      cin >> exit;
    }
    else if(z == "*" || z == "multiply")
    {
      answer = x * y;
      cout << endl << "Answer: " << answer << endl;
      cout << "Continue?(q to exit)";
      cin >> exit;
    }
    else if(z == "-" || z == "minus")
    {
      answer = x - y;
      cout << endl << "Answer: " << answer << endl;
      cout << "Continue?(q to exit)";
      cin >> exit;
    }
    else if(z == "/" || z == "divid")
    {
      answer = x / y;
      cout << endl << "Answer: " << answer << endl;
      cout << "Continue?(q to exit)";
      cin >> exit;
    }
    else
    {
      cout << endl << "Could not compute" << endl;
      cout << "Continue?(q to exit)";
      cin >> exit;
    }
  }while(exit != "q" || exit != "Q");

}