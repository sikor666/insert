#include <vector>

using namespace std;

int solution(vector<int> &A)
{
    int result = 0, size = A.size();

    for (int x = 0; x < size; x++)
    {
        int previousHeight = 0;
        bool error = false;

        for (int y = 0; y < size; y++)
        {
            if (x != y)
            {
                if (previousHeight > A[y])
                {
                    error = true;
                    break;
                }
                else
                {
                    previousHeight = A[y];
                }
            }
        }

        if (!error)
        {
            result++;
        }
    }

    return result;
}
