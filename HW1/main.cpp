#include <bits/stdc++.h>

using namespace std;

float length(const float* x, int n)
{
    float m = 1;
    float res = 0;

    for (int i = 0; i < n; i++)
    {
        float q = fabs(x[i]);

        if (q > res)
        {
            res *= (m / q) * (m / q);
            m = q;
        }

        res += (q / m) * (q / m);
    }
    return m * sqrt(res);
}

int main()
{
    float a[7] = {2.0, 5.0, 1.0, 4.0, 7.0};
    cout << length(a, 7) << endl;
    cout << "real: " << sqrt(95) << endl;
}
