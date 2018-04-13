int fun(int n, int sum)
{
	if (n == 1)
		return sum;
	else
		return fun(n - 1, 2 *(sum + 1));
}