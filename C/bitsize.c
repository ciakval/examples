#include <stdint.h>
#include <stdio.h>

struct foobar {
	uint16_t modem_error	: 1;
	uint16_t no_modem 		: 1;
	uint16_t initializing	: 1;
	uint16_t hung_up		: 1;
	uint16_t hanging_up		: 1;
	uint16_t dialing		: 1;
	uint16_t communicating	: 1;
	uint16_t reserved1		: 8;
};

int main(void)
{
	struct foobar a;
	uint8_t *ptr;

	a.modem_error = 1;
	a.dialing = 1;

	
	ptr = (uint8_t *)&a;

	for (unsigned i = 0; i < sizeof(a); i++)
	{
		unsigned val = ptr[i];
		printf("[%u]: %02x\n", i, val);
	}
	


	printf("Value: %04x\n", (unsigned)*(uint16_t *)&a);


	return sizeof(struct foobar);
}
