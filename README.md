# Lab4
Lab 4: Functions and Arrays
Objective: The goal of this lab is to practice designing programs in a modular way using functions to process data stored in arrays. You will write a single, comprehensive program that acts as a simple gradebook, using functions for each distinct task like input validation, calculation, and finding values.
Project: Test Score Analyzer
Task: Create a program that asks the user for some test scores, stores them in an array, and performs calculations on them. It must be built using several functions that work together.
Requirements:
Create a new C++ project named Gradebook.
In main, declare a const int variable to hold the number of scores to be entered. Set it to a reasonable number, like 5.
Declare an integer array of that size to hold the test scores.
You must implement and use the following functions in your program:
void getScores(int scores[], int size)
This function should use a for loop to ask the user to enter each test score.
It must include input validation. Use a while loop to ensure that the user enters a score between 0 and 100. If the input is invalid, display an error message and ask them to enter the score for that same day again.
void printScores(const int scores[], int size)
This function should use a for loop to display all the scores stored in the array.
int getLowest(const int scores[], int size)
This function should search the array to find the lowest score and return that value.
Hint: Initialize a variable lowest to the value of the first element, then loop through the rest of the array, updating lowest whenever you find a smaller element.
double calculateAverage(const int scores[], int size)
This function should first calculate the sum of all scores in the array.
Then, it should drop the lowest score. Find the lowest score by calling your getLowest function and subtract that value from the sum.
Finally, calculate the average of the remaining scores. Remember, if you drop one score, you are averaging size - 1 scores.
This function should return the final calculated average.
Your main function should orchestrate the program flow:
Call getScores to fill the array with user data.
Call printScores to display the scores the user entered.
Call calculateAverage and store the returned value in a variable.
Display the final calculated average, formatted to two decimal places.
Example Output:
Please enter 5 test scores.
Score 1: 95
Score 2: -10
Invalid score. Please enter a value between 0 and 100.
Score 2: 85
Score 3: 101
Invalid score. Please enter a value between 0 and 100.
Score 3: 78
Score 4: 92
Score 5: 60

The scores you entered are: 95 85 78 92 60 
After dropping the lowest score, the average is: 87.50
