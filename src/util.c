#include "../include/util.h"

char* read_ascii_file(const char* path) {
	// creates file
	FILE* file = fopen(path, "r");
	if (!file) {
		printf("File could not be opened");
		return NULL;
	}

	// get file size
	fseek(file, 0, SEEK_END);
	int size = ftell(file);
	fseek(file, 0, SEEK_SET);

	// read file
	char* buf = (char*) malloc(sizeof(char) * (size + 1));
	if (!buf) {
		printf("Could not allocate memory for file!\n");
		return NULL;
	}
	fread(buf, 1, size, file);
	buf[size] = "\0";
	fclose(file);

	// return contents
	return buf;
}
