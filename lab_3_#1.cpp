// Accept age and name. If age is even, print name 10 times. If odd, print name 5 times
#include <iostream> // This is the directive for input and output
using namespace std; // use standard namespace
int main() // main function 
{ // to open the main function block
    int age; // declare the age
    string name; // declare valuable for name
    int i ; // declare valuable i 
    cout<<"Enter name "; // ask the user to enter name
    cin>>name; // accept name
    cout<<"Enter age "; // ask the user to enter age
    cin>>age; // accept the age
    for( i=1 ; i<=10 ; ++i) // loop 10 times
{ // open the for function
    if (age%2 == 0) // declare the condition
    { // open the if function
        cout<<"\n"<<name<<""; // tell us about the name
    } // close the if function
} // close the for function block
    for( i=1 ; i<=5 ; ++i) // loop 5 times 
{ // open the for function
    if (age%2 == 1) // declare the condition
    { // open the if function 
        cout<<"\n"<<name<<""; // tell us about the name
    } // close the function
} // close the function
    return 0; // return 0 to the console 
} // close the main function
