#include <cstdio>
#include <vector>

using namespace std;

int sum_of_digits(int n)
{
    int sum = 0;

    while(n)
    {
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int main()
{
    vector <int> perfect_number;

    for(int i = 19; perfect_number.size() <= 1e4; i+=9)
    {
        if(sum_of_digits(i) == 10)
            perfect_number.push_back(i);
    }

    int k;
    scanf("%d", &k);
    printf("%d\n", perfect_number[k - 1]);

    return 0;
}
