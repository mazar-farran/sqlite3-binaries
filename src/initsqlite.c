#include "init.h"

int core_init(const char* dummy) {
    shell_sqlean_init();
    return sqlite3_auto_extension((void*)sqlite3_sqlean_init);
}
