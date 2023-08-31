
// Christopher Hanna
// A program for a user to input ages that responds back.

#include <iostream>
using namespace std;

int main()
{
    //Inputting age
    cout << "What is your age?  ";
    int numAge;
    cin >> numAge;

    if (numAge >= 0 && numAge <= 12)
        cout << "You are a child.\n";

    else if (numAge > 12 && numAge <= 17)
    {
        cout << "You are a teen.\n"
             << endl;
    }

    else if (numAge > 17 && numAge <= 64)
    {
        cout << "You are an adult.\n"
             << endl;
    }

    else if (numAge > 64)
    {
        cout << "You are a retiree" << endl;
    }

    else
        cout << "ERROR: Invalid age. Must not be a negative number." << endl;

    return 0;
}

/* sample output: 
[channa4@hills ~]$ ./a.out
What is your age?  0
You are a child.

[channa4@hills ~]$ ./a.out
What is your age?  15
You are a teen.

[channa4@hills ~]$ ./a.out
What is your age?  -1
ERROR: Invalid age. Must not be a negative number.

*/
