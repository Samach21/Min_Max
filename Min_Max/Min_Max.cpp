#include<stdio.h>

#define ll long long

ll processMin(ll A, ll B)
{
    ll resultt;
    if (A < B)
    {
        resultt = A;
    }
    else if (A > B)
    {
        resultt = B;
    }
    else if (A = B)
    {
        resultt = A;
    }
    return resultt;
}

ll processMax(ll A, ll B)
{
    ll result;
    if (A > B)
    {
        result = A;
    }
    else if (A < B)
    {
        result = B;
    }
    else if (A = B)
    {
        result = A;
    }
    return result;
}

int main()
{
    ll N, k[1000];
    ll* n = k;
    ll Min = 2000000000, Max = 0;
    printf("INPUT N: ");
    if (scanf_s("%lld", &N) != 1) {
        printf("ERROR\n");
        return 1;
    }

    else if (N < 0 || N > 1000) {
        printf("ERROR \n1 <= N <= 1000\n");
        return 1;
    }
    printf("INPUT ALL N: ");
    for (int i = 0; i < N; i++)
    {
        if (scanf_s("%lld", &k[i]) != 1) {
            printf("ERROR\n");
            return 1;
        }
        else if (k[i] < -2000000000 || k[i] > 2000000000) {
            printf("ERROR \n-2000000000 <= k <= 2000000000\n");
            return 1;
        }
    }
    for (int j = 0; j < N - 1; j++)
    {
        ll preMin;
        preMin = processMin(*n, *(n + 1));
        if (Min > preMin)
        {
            Min = preMin;
        }
        n++;
    }
    printf("Min: %lld\n", Min);
    for (int j = 0; j < N - 1; j++)
    {
        ll preMax;
        preMax = processMax(*n, *(n - 1));
        if (Max < preMax)
        {
            Max = preMax;
        }
        n--;
    }
    printf("Max: %lld", Max);
	return 0;
}