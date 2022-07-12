int main()
{
    long long n = 0;
    long long m = 0;
    long long k = 0;
    scanf("%lld %lld", &n, &m);
    long long a = n;
    long long b = m;
    while(k=a%b)
    {
        a = b;
        b = k;
    }
    printf("%lld\n", b+m*n/b);
    
    return 0;
}
