# SQLite Binaries

# Versions

Prebuild binaries for the following versions are provided:

- `v3.42.0`:

# Binaries

The following prebuild binaries are provided for each version:

- `sqlite3-linux-x86`
- `sqlite3-linux-arm`
- `sqlite3-darwin-x86`
- `sqlite3-darwin-arm`
- `sqlite3-darwin-universal`
- `sqlite3-win32-x86`
- `sqlite3-win32-arm`

# Flags

The following compilation flags are used for each binary:

- `SQLITE_ENABLE_DBPAGE_VTAB`. Enables the [sqlite_dbpage](https://sqlite.org/dbpage.html) virtual table.
- `SQLITE_ENABLE_DBSTAT_VTAB`. Enables the [dbstat](https://sqlite.org/dbstat.html) virtual table.
- `SQLITE_ENABLE_EXPLAIN_COMMENTS`. Makes [EXPLAIN](https://sqlite.org/lang_explain.html) output more readable.
- `SQLITE_ENABLE_FTS4`. Enables [FTS3 and FTS4](https://sqlite.org/fts3.html) extensions.
- `SQLITE_ENABLE_FTS5`. Enables the [FTS5](https://sqlite.org/fts5.html) extension.
- `SQLITE_ENABLE_GEOPOLY`. Enables the [Geopoly](https://sqlite.org/geopoly.html) extension.
- `SQLITE_ENABLE_JSON1`. Enables the [JSON1](https://sqlite.org/json1.html) extension.
- `SQLITE_ENABLE_MATH_FUNCTIONS`. Enables [math functions](https://sqlite.org/lang_mathfunc.html).
- `SQLITE_ENABLE_OFFSET_SQL_FUNC`. Enables the [sqlite_offset(x)](https://sqlite.org/lang_corefunc.html#sqlite_offset) function.
- `SQLITE_ENABLE_RTREE`. Enables the [R\*Tree](https://sqlite.org/rtree.html) extension.
- `SQLITE_ENABLE_STAT4`. Helps query planner to make better index choices.
- `SQLITE_ENABLE_STMTVTAB`. Enables the [sqlite_stmt](https://sqlite.org/stmt.html) virtual table.
- `SQLITE_ENABLE_UNKNOWN_SQL_FUNCTION`. Ignores unknown functions in EXPLAIN, useful for debugging.
- `SQLITE_HAVE_ZLIB`. Required for [SQL Archive](https://sqlite.org/sqlar.html) support. Not available on Windows.
- `SQLITE_LIKE_DOESNT_MATCH_BLOBS`. Forces LIKE and GLOB to return FALSE for BLOBs.
- `SQLITE_THREADSAFE=0`. Turns off support for multithreaded environment.
- `SQLITE_USE_URI`. Enables [URI](https://sqlite.org/uri.html) connection strings.
