#include <iostream>
#include <string>
#include "hello.h"

std::string current_version="2.0";

void hello(){
    std::cout << "C'est la lib HELLO/"<< current_version<< "\n" << std::endl;
}

void hello_print_vector(const std::vector<std::string> &strings) {
    for(std::vector<std::string>::const_iterator it = strings.begin(); it != strings.end(); ++it) {
        std::cout << "hello/1.0 " << *it << std::endl;
    }
}
