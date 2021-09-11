#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/util.h"
#include "../include/token.h"
#include "../include/parser.h"

// scut build out.scut

int main(int argc, char** argv) {
	if (argc < 3) {
		printf("Too few args\n");
		return 1;
	}

	if (strcmp(argv[1], "compile") == 0) {
		char* source = read_ascii_file(argv[2]);
		TokenList* tokens;

		free(tokens);
		free(source);
	}

	return 0;
}
