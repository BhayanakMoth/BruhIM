#include "IMWorker.h"

using namespace IMWorker;

IMWorker() : value(0);
void reset() {
	value = 0;
}

int getValue() {
	return value;
}

void setValue(int number) {
	value = number;
}