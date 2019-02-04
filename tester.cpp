#include <iostream>
#include "crypto/sha1.hpp"
#include "Utility.h"
#include <omp.h>

int main() {

    const std::string authdata("abcdefghijklmnoprstxwyz1234567890!@#$%^&*()_+");
    size_t length = 8;
    std::string suffix;
    suffix.reserve(length);
    SHA1 checksum;
    const size_t difficulty = 6;
    const char zero = '0';
    unsigned int sayac = 0;

    while (true) {
        suffix.clear();
        utility::randomStr(suffix, length);
        std::string(buffer);
        buffer.append(authdata).append(suffix);
        checksum.update(buffer);
        const std::string hash = checksum.final();
        const bool result = (hash.substr(0, difficulty).find_first_not_of(zero) == std::string::npos);

        if (result) {
            printf ("suffix: %s ->\t hash: %s\n", suffix.c_str(), hash.c_str());
            // printf ("size of charset %d ->\t", sizeof(charset));
            break;
        }

        sayac++;
    }

    printf("sayac: %d\n", sayac);

    return 0;
}
