#include <vector>

using namespace std;

int solution(vector<int> &A)
{
    int result = 0, size = A.size(), exit = 0;

    for (int x = 0; x < size;)
    {
        int previousHeight = 0, error = 0;

        for (int y = 0; y < size; y++)
        {
            if (x != y)
            {
                if (previousHeight > A[y])
                {
                    if (exit)
                    {
                        return result;
                    }

                    exit++;
                    error = y;
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
            if (exit == 0)
            {
                return size - x;
            }
            else
            {
                result++;
                x++;
            }
        }
        else
        {
            x = error - 1;
        }
    }

    return result;
}
