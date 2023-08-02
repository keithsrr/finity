//
// Created by jinhai on 23-8-2.
//

#include "compilation_config.h"

#include <iostream>

int
main(int argc, char** argv) {
    std::cout << "Startup Finity console, version: "
              << VERSION_MAJOR << "."
              << VERSION_MINOR << "."
              << VERSION_PATCH << " built on "
              << BUILD_TIME << " from branch: "
              << GIT_BRANCH_NAME << ", commit-id: "
              << GIT_COMMIT_ID << std::endl;

    std::string input;
    while(true) {
        std::cin >> input;
        if(input == "quit") {
            break;
        } else {
            std::cout << input << std::endl;
        }
    }
}