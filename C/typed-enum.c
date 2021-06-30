#include <stdint.h>

enum foo  {
	A = 0,
	B = 1,
	C = 2,
	D = 400,
};

int main(void)
{
	enum foo bar = A;

	return sizeof(bar);
}
