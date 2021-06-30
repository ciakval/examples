void foo(int c, ...)
{
}

int main(void)
{
	int i = 10;
	foo(i, &i);
}
