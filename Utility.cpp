/**
 * @author: summer
 *
 */

#include <random>
#include "Utility.h"

void utility::randomStr (std::string& result, size_t length) {

    std::random_device seed;
    thread_local static std::mt19937 rg{seed()};
    thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(definition::charset) - 1);

    while (length--) {
        result += definition::charset[pick(rg)];
    }
}

