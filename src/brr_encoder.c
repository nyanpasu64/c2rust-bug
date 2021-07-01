#include <stdbool.h>

// both bool and int reproduce the bug
extern bool x;

int main() {
	bool initial_block = false;
	initial_block |= x;
}
