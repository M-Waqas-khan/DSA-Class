#include <iostream>
using namespace std;
const int MAX_SCORES = 1000;
int main() 
{
    int scores[MAX_SCORES] = {90, 85, 90, 70, 85, 80};
    int size = 6;  
    cout << "Original scores: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << scores[i] << " ";
    }
    cout << endl;
    int uniqueSize = 0;
    for (int i = 0; i < size; ++i) 

    {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueSize; ++j) 
        {
            if (scores[i] == scores[j]) 
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) 
        {
            scores[uniqueSize] = scores[i];
            uniqueSize++;
        }
    }
    cout << "Scores after removing duplicates: ";
    for (int i = 0; i < uniqueSize; ++i) 
    {
        cout << scores[i] << " ";
    }
    cout << endl;
    return 0;
}
