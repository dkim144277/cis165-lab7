# cis165-lab7
# how to run
To run `min_max.cpp`, download the file from the repository to your computer. Then, using onlinegdb.com, click on the "Upload File" at the top left of the programming window, and upload the file you downloaded. Set the language using the dropdown to C++ 17. Press F9 on your keyboard or "Run" at the top of the screen.
# plan for the program
## min_max.cpp
1. Initialize variables for the user input, and the smallest and largest numbers
2. Ask the user for an input and store it as the input variable
3. Set the current largest and smallest variables to the inputted value as well
4. If the number is -99, spit an error and end the program
5. If not, enter a loop where the most recently inputted number is compared to the largest and smallest values. If the number is larger than the current largest number, update the variable to match. If it's smaller, do the same thing but for the small variable
6. Ask the user to enter another number and go back and compare
7. If the user exits the loop with -99, print the largest and smallest numbers and end the program
# test runs
* 4 tests can be run to check if the program is functioning
  
1. Values 1, 5, 10, and -99 should result in a smallest of 1 and a largest of 10. This verifies that the smallest and largest values are successfully stored
2. Values -1, -5, -10, and -99 should result in a smallest of -10 and a largest of -1. This should check if the program works with negative numbers (aside from -99)
3. Values 0, 0, and -99 should result in a smallest and largest of 0. Checks if 0 breaks the program
4. Inputting only -99 should display an error and end the program immediately. -99 should never be stored into a variable
  
* Upon inputting the aforementioned values, the program's output matched each of the expected results exactly
# code explanations
1. Trace one series through the loop, showing when the extrema are initialized and updated.
> Using 5, 10, and -99 as an example, when the user enters 5 the program stores 5 as the user's number, the smallest number, and the largest number. Since the number isn't -99...  

> We enter the while loop. The program checks if the user's number is smaller than the current smallest number or larger than the current largest number. Since 5 isn't greater than 5 and 5 also isn't less than 5, the program continues without doing anything. The program then asks the user to enter a number again, to which the user enters 10. We loop back to the top of the while loop.  

> The while loop begins by doing the comparison check. 10 isn't less than 5, so the smallest number isn't updated. But 10 is greater than 5, so the largest number is updated to 10. The program asks the user for another number. The user enters -99, and breaks out of the loop.

> The program displays the smallest entered number (5) and the largest entered number (10) and ends.

2. How does your code keep -99 out of the calculations?
> Almost all of the code runs inside of a while loop defined as `while(userInput != -99)`. The checking and updating of the stored numbers happens at the top of the loop before asking for a new number. As soon as the user enters -99, the loop ends without doing anything with the entered value (-99)
3. Why is initializing both extrema to zero incorrect for some series?
> If you don't enter a zero, and your entered numbers are all greater than zero, it will list the smallest number as 0 despite you never having entered it yourself
4. How do you distinguish an empty series from a series containing zero?
> If the first input is -99, the program immediately ends and says that you entered no data. If you want to add 0 to your series, you will need to enter 0 first and then -99, which will end up storing it
