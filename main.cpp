#include "task4.hpp"

#include <iostream>

int main()
{
    cout << solution(vector<int>{ 3, 4, 5, 4 }) << endl;
    cout << solution(vector<int>{ 4, 5, 2, 3, 4 }) << endl;
    cout << solution(vector<int>{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << endl;

    int h = 0;
    vector<int> trees;

    for (int i = 0; i < 100000; i++)
    {
        trees.push_back(++i);
    }

    cout << solution(trees) << endl;

    return 0;
}
