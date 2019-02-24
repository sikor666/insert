#include "test.hpp"

int main()
{
    vector<int> A{ 1, 3, 6, 4, 1, 2 };
    vector<int> B{ -1, -3 };
    vector<int> C{ 1, 2, 3 };

    cout << solution(A) << endl;
    cout << solution(B) << endl;
    cout << solution(C) << endl;

    return 0;
}
