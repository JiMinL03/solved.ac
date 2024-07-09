#include <stdio.h>
#include <string.h>
int main() {

	char hwan[1000];
	char doctor[1000];
	scanf("%s", &hwan);
	scanf("%s", &doctor);
	if (strlen(hwan) >= strlen(doctor)) {
		printf("go");
	}
	else {
		printf("no");
	}
}
