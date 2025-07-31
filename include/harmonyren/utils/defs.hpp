#ifndef HARMONYREN_UTILS_DEFS_HPP
#define HARMONYREN_UTILS_DEFS_HPP

#include <filesystem>

#ifdef _WIN32
#include <windows.h>
#else
#include <limits.h>
#include <unistd.h>
#endif

namespace harmonyren::utils {

namespace fs = std::filesystem; // NOLINT(misc-unused-alias-decls)

inline fs::path USER_HOME =
#ifdef _WIN32
    std::getenv("USERPROFILE")
#else
    std::getenv("HOME")
#endif
    ;

} // namespace harmonyren

#endif