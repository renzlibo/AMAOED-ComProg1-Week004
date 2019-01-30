#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer";
    cin  >>  number;

    if ( number > 0)
    (
       cout <<" You entered a positive integer:"<<number<< endl;
    )
    else if (number< 0)
    (
      cout<<"You entered a negative integer:" << endl;
    )
    else
    (
     cout<<"You entered O."<< endl;
    )

    cout <<"This statement is always executed.";

 return 0;
}
