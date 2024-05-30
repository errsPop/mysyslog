#include <getopt.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libmysyslog.h"

int main(int argc, char *argv[]) {
	int opt;
	int log_level = LOG_LEVEL_INFO; // Default log level
	const char *log_text = "";
	const char *log_format = "%s %s\n";
	const char *log_path = "log.txt";
	const char *driver = "stdout";

	while ((opt = getopt(argc, argv, "t:l:d:f:p:")) != -1) {
		switch (opt) {
			case 't':
				log_text = optarg;
				break;
			case 'l':
				log_level = atoi(optarg);
				break;
			case 'd':
				driver = optarg;
				break;
			case 'f':
				log_format = optarg;
				break;
			case 'p':
				log_path = optarg;
				break;
			default:
				fprintf(stderr, "Usage: %s -t <log_text> -l <log_level> -d <driver> -f <log_format> -p <log_path>\n", argv[0]);
				exit(EXIT_FAILURE);
			}
		}
	return 0;
}
