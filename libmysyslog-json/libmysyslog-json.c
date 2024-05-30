#include "libmysyslog.h"

int log_to_json(const char* msg, int level, const char* path) {
	return mysyslog(msg, level, 1, 1, path);
}
