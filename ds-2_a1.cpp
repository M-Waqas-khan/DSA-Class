#include <iostream>
using namespace std;
int main() 
{
    const int NUM_BRANCHES = 12;
    int sales[NUM_BRANCHES] = {1500, 2000, 1800, 2400, 1700, 2100, 2300, 1900, 2200, 1600, 2500, 1800};
    int totalSales = 0;
    int highestBranch = 0;
    int lowestBranch = 0;
    for (int i = 0; i < NUM_BRANCHES; ++i) {
        totalSales += sales[i];
        if (sales[i] >= sales[highestBranch]) {
            highestBranch = i;
        }
        if (sales[i] <= sales[lowestBranch]) {
            lowestBranch = i;
        }
    }
    cout << "Total annual sales: " << totalSales << endl;
    cout << "Branch with highest sales: Branch " << highestBranch + 1 << " with sales " << sales[highestBranch] << endl;
    cout << "Branch with lowest sales: Branch " << lowestBranch + 1 << " with sales " << sales[lowestBranch] << endl;
    return 0;
}
