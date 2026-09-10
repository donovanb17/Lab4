#include <iostream>
#include <iomanip> // for returning only two decimal places after
using namespace std; // to avoid writing std before cin and cout

// no nested functions in c++ (initial mistake)
void getScores(int scores[], int size){
        
            cout << "Please enter 5 test scores." << endl;
            for (int i = 0; i < size; i++){
                do {
                cout << "Score " << i << ":";
                cin >> scores[i];
            
                if (scores[i] < 0 || scores[i] > 100){
                    cout << "Invalid score. Please enter a value between 0 and 100." << endl;
                }
            } while (scores[i] < 0 || scores[i] > 100);  // input validation 
       
    }
}

// This function should use a for loop to display all the scores stored in the array
void printScores(const int scores[], int size){
    for (int i = 0; i < size; i++){
        cout << scores[i];

    }


}

int getLowest(const int scores[], int size){
    int lowest = scores[0];
    for (int i = 0 + 1; i < size; i++){
        if (scores[i] < lowest){
            lowest = scores[i];
        }


    }
return lowest;

}

double calculateAverage(const int scores[], int size){
    int totalscore = scores[0];

    for (int i = 0 + 1; i < size; i++){
        
        totalscore = totalscore + scores[i];
    }
        int lowestofscores = getLowest(scores, size);
        int lowest = totalscore - lowestofscores;
        double average = static_cast<double>(lowest)/(size-1);
return average;
    


}


int main(){
    const int NUMSCORES = 5;
    int scores[NUMSCORES];

    getScores(scores, NUMSCORES); // pass in scores array and const int for the size of the array
    printScores(scores, NUMSCORES);

    double avg = calculateAverage(scores, NUMSCORES); 

    //make sure outputting only two decimal places
    cout << "After dropping the lowest score, the average is: " << fixed << setprecision(2)<<  avg << endl;



}