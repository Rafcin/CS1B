//
// Created by Rafael Szuminski on 1/23/20.
//

#include "PL.h"
#include <string>
#include <vector>

int decoder(char value){
    switch(value){
        case 'A': case 'a':
        case 'B': case 'b':
        case 'C': case 'c':
            return 2;
        case 'D': case 'd':
        case 'E': case 'e':
        case 'F': case 'f':
            return 3;
        case 'G': case 'g':
        case 'H': case 'h':
        case 'I': case 'i':
            return 4;
        case 'J': case 'j':
        case 'K': case 'k':
        case 'L': case 'l':
            return 5;
        case 'M': case 'm':
        case 'N': case 'n':
        case 'O': case 'o':
            return 6;
        case 'P': case 'p':
        case 'Q': case 'q':
        case 'R': case 'r':
        case 'S': case 's':
            return 7;
        case 'T': case 't':
        case 'U': case 'u':
        case 'V': case 'v':
            return 8;
        case 'W': case 'w':
        case 'X': case 'x':
        case 'Y': case 'y':
        case 'Z': case 'z':
            return 9;
        default:
            return 0;
    }
}

std::vector<int> str_to_int_decoder(std::string value){
    std::vector<int> tmpArray;
    for(char x : value){
        tmpArray.push_back(decoder(x));
    }
    return tmpArray;
}

std::string int_to_phonenum(std::vector<int> val ){
    std::string tmpStr =
            std::to_string(val[0])+std::to_string(val[1])+std::to_string(val[2])+
            '-'+
            std::to_string(val[3])+std::to_string(val[4])+std::to_string(val[5])+std::to_string(val[6]);
    return tmpStr;
}

