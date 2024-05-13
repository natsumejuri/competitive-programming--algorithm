//a底数，b指数，p模数
long long be(long long a, long long b, long long p)
{
    long long result = 1;
    while (b > 0)
    {
        if (b & 1) result = (result * a) % p;
        a = (a * a) % p;
        b >>= 1;
    }
    return result;
}
