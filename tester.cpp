#include <iostream>
#include "crypto/sha1.hpp"
#include "Utility.h"
#include <omp.h>

int main(int argc, char* argv[]) {

    const std::string authdata("abcdefghijklmnoprstxwyz1234567890!@#$%^&*()_+");
    size_t length = 8;
    std::string suffix;
    suffix.reserve(length);
    SHA1 checksum;
    const size_t difficulty = 7;
    unsigned int sayac = 0;
    omp_set_num_threads(omp_get_max_threads());

    /* OpenMP does not provide a parallel while loop,
     so we're going to have to make one ourselves... */
    // @reference: https://cvw.cac.cornell.edu/OpenMP/whileloop
    int sstop =0;

    #pragma omp parallel private(tn, tj, suffix)
    {
        while (!sstop) {
            suffix.clear();
            utility::randomStr(suffix, length);
            std::string(buffer);
            buffer.append(authdata).append(suffix);
            checksum.update(buffer);
            const std::string hash = checksum.final();

            if (hash.substr(0, difficulty).find_first_not_of(definition::zero) == std::string::npos) {
                sstop = 1; // break;
                printf("suffix: %s ->\t hash: %s\n", suffix.c_str(), hash.c_str());
                #pragma omp flush(sstop)
            }

            sayac++;
        }
    }


    printf("sayac: %d\n", sayac);

    return 0;
}
