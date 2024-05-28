#include "../tinyexpr.h"
#include <catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char** argv)
    {
    std::cout << te_parser::info();

    Catch::Session session;

    session.applyCommandLine(argc, argv);

    session.run();

    return EXIT_SUCCESS;
    }
