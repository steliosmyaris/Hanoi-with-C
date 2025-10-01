#include <iostream>
using namespace std;
int counter = 0;

void SolveTowersOfHanoi(char Left, char Mid, char Right, int N){
    if (N>0) {
        SolveTowersOfHanoi(Left, Right, Mid, N-1);
        cout << "Moving disc: "<< Left << '\t' << Right << endl;
        counter += 1;
        SolveTowersOfHanoi(Mid, Left, Right, N-1);
    }
}

int main() {

    std::cout << "How many blocks in A: " << std::endl;
    int N;
    cin >> N;
    SolveTowersOfHanoi('A', 'B', 'C', N);
    cout << "moves: " << counter;
    return 0;
}
