#include "task3.hpp"

#include <iostream>

int main()
{
    vector<int> ranks1 { 3, 4, 3, 0, 2, 2, 3, 0, 0 };
    vector<int> ranks2 { 4, 2, 0 };
    vector<int> ranks3 { 4, 4, 3, 3, 1, 0 };
    vector<int> ranks4 { 4 };
    vector<int> ranks5 { 4, 3 };
    vector<int> ranks6 { 4, 2 };
    vector<int> ranks7;

    cout << solution(ranks1) << endl;
    cout << solution(ranks2) << endl;
    cout << solution(ranks3) << endl;
    cout << solution(ranks4) << endl;
    cout << solution(ranks5) << endl;
    cout << solution(ranks6) << endl;
    cout << solution(ranks7) << endl;

    return 0;
}
