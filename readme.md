# SQLite Binaries

# Versions

Prebuild binaries for the following versions are provided:

- `v3.42.0`: https://github.com/fabiospampinato/sqlite-binaries/releases/tag/v3.42.0

# Binaries

The following prebuild binaries are provided for each version:

- `sqlite3-linux-x86`: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=0a052f8c5c084a52bdf4cf240d6052e60a88c14f, for GNU/Linux 3.2.0, not stripped.
- `sqlite3-linux-arm`: ELF 64-bit LSB pie executable, ARM aarch64, version 1 (SYSV), dynamically linked, interpreter /lib/ld-linux-aarch64.so.1, BuildID[sha1]=a0843d6c17a69de1929e811856e1979b1574bfcf, for GNU/Linux 3.7.0, not stripped.
- `sqlite3-darwin-x86`: Mach-O 64-bit executable x86_64.
- `sqlite3-darwin-arm`: Mach-O 64-bit executable arm64.
- `sqlite3-darwin-universal`: Mach-O universal binary with 2 architectures: [x86_64:Mach-O 64-bit executable x86_64Mach-O 64-bit executable x86_64] [arm64].
- `sqlite3-win32-x86`: PE32+ executable (console) x86-64, for MS Windows.
<!-- - `sqlite3-win32-arm`: //TODO -->

# Flags

The following compilation flags are used for each binary:

- `SQLITE_ENABLE_DBPAGE_VTAB`: Enables the [sqlite_dbpage](https://sqlite.org/dbpage.html) virtual table.
- `SQLITE_ENABLE_DBSTAT_VTAB`: Enables the [dbstat](https://sqlite.org/dbstat.html) virtual table.
- `SQLITE_ENABLE_EXPLAIN_COMMENTS`: Makes [EXPLAIN](https://sqlite.org/lang_explain.html) output more readable.
- `SQLITE_ENABLE_FTS4`: Enables [FTS3 and FTS4](https://sqlite.org/fts3.html) extensions.
- `SQLITE_ENABLE_FTS5`: Enables the [FTS5](https://sqlite.org/fts5.html) extension.
- `SQLITE_ENABLE_GEOPOLY`: Enables the [Geopoly](https://sqlite.org/geopoly.html) extension.
- `SQLITE_ENABLE_JSON1`: Enables the [JSON1](https://sqlite.org/json1.html) extension.
- `SQLITE_ENABLE_MATH_FUNCTIONS`: Enables [math functions](https://sqlite.org/lang_mathfunc.html).
- `SQLITE_ENABLE_OFFSET_SQL_FUNC`: Enables the [sqlite_offset(x)](https://sqlite.org/lang_corefunc.html#sqlite_offset) function.
- `SQLITE_ENABLE_RTREE`: Enables the [R\*Tree](https://sqlite.org/rtree.html) extension.
- `SQLITE_ENABLE_STAT4`: Helps query planner to make better index choices.
- `SQLITE_ENABLE_STMTVTAB`: Enables the [sqlite_stmt](https://sqlite.org/stmt.html) virtual table.
- `SQLITE_ENABLE_UNKNOWN_SQL_FUNCTION`: Ignores unknown functions in EXPLAIN, useful for debugging.
- `SQLITE_HAVE_ZLIB`: Required for [SQL Archive](https://sqlite.org/sqlar.html) support. Not available on Windows.
- `SQLITE_LIKE_DOESNT_MATCH_BLOBS`: Forces LIKE and GLOB to return FALSE for BLOBs.
- `SQLITE_THREADSAFE=0`: Turns off support for multithreaded environment.
- `SQLITE_USE_URI`: Enables [URI](https://sqlite.org/uri.html) connection strings.
