#include <iostream>

using namespace std;

int main()
{   
    int smallestValue;
    int largestValue;
    int userInput;

    cout << "Enter a number. Enter -99 to stop: ";
    cin >> userInput;
    smallestValue = userInput;
    largestValue = userInput;

    if(userInput == -99)
    {
        cout << "No data entered, ending program. " << endl;
    }

    else
    {
        while(userInput != -99)
        {
            if(userInput < smallestValue)
            {
                smallestValue = userInput;
            }

            else if(userInput > largestValue)
            {
                largestValue = userInput;
            }

            cout << "Enter a number. Enter -99 to stop: ";
            cin >> userInput;
        }
        
        cout << "Largest: " << largestValue << endl;
        cout << "Smallest: " << smallestValue << endl;
    }

    return 0;
}