#include <cmath>
#include <string>

using namespace std;

int solution(int N)
{
    auto n = pow(11, N);
    auto str = to_string(n);

    int result = 0;

    for (auto c : str)
    {
        if (c == '1')
        {
            result++;
        }
    }

    return result;
}
