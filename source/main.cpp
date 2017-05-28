#include <string>
#include <3ds.h>
#include <stdio.h>

using namespace std;

int main() {

	// Main loop
	while (aptMainLoop()) {
		hidScanInput();
		u32 kDown = hidKeysDown();
		
		printf("You're safe now.");

	return 0;
}
