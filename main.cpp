#include "task4.hpp"

#include <iostream>

int main()
{
    cout << solution(vector<int>{ 3, 4, 5, 4 }) << endl;
    cout << solution(vector<int>{ 4, 5, 2, 3, 4 }) << endl;
    cout << solution(vector<int>{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << endl;
    cout << solution(vector<int>{ 1, 2, 3, 4, 5, 6, 8, 7, 9, 10 }) << endl;
    cout << solution(vector<int>{ 1, 2, 4, 3, 5, 6, 8, 7, 9, 10 }) << endl;

    int h = 0;
    vector<int> trees1;
    vector<int> trees2;
    vector<int> trees3;

    for (int i = 0; i < 100000; i++)
    {
        trees1.push_back(++h);
    }

    cout << solution(trees1) << endl;

    for (int j = 1; j < 100001; j++)
    {
        if (j == 50000)
        {
            trees2.push_back(50001);
        }
        else if (j == 50001)
        {
            trees2.push_back(50000);
        }
        else
        {
            trees2.push_back(j);
        }
    }

    cout << solution(trees2) << endl;

    for (int x = 1; x < 100001; x++)
    {
        if (x == 50)
        {
            trees3.push_back(51);
        }
        else if (x == 51)
        {
            trees3.push_back(50);
        }
        else if (x == 50000)
        {
            trees3.push_back(50001);
        }
        else if (x == 50001)
        {
            trees3.push_back(50000);
        }
        else
        {
            trees3.push_back(x);
        }
    }

    cout << solution(trees3) << endl;

    return 0;
}
