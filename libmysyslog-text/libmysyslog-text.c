#include "libmysyslog-text.h"

int log_to_text(const char* msg, int level, const char* path) {
	return mysyslog(msg, level, 0, 0, path);
	return 0;
}

