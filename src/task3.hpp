#pragma once

#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &ranks)
{
    if (ranks.empty())
    {
        return 0;
    }

    sort(begin(ranks), end(ranks));

    int result = 0;
    int currentRank = ranks[ranks.size() - 1];
    int previousRank = ranks[ranks.size() - 1];

    for_each(rbegin(ranks), rend(ranks), [&](int r)
    {
        if (r < currentRank && currentRank < previousRank)
        {
            previousRank = currentRank;
        }

        if (r + 1 == previousRank)
        {
            result++;
        }

        if (r < currentRank)
        {
            currentRank = r;
        }
    });

    return result;
}