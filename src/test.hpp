#pragma once

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> &A)
{
    sort(begin(A), end(A));

    int s = 1;

    for (auto &a : A)
    {
        if (s < a)
        {
            return s;
        }
        else if (s == a)
        {
            s++;
        }
    }

    return s;
}