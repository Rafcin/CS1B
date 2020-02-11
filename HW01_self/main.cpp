#include <iostream>
#include "PL.h"
#include <vector>
int main() {

    //If you are reading this, this means you are reading the code of a sleepy raf who decided lets do HW at 3am.
    //Ignore the vectors ik I could just as easily do an array of size 7 and call it a day.
    std::string inputVal;
    std::cout<<"Enter Letter Based Phone Number"<<std::endl;
    std::getline(std::cin,inputVal, '\n');
    //Clean our string after we do get line to remove the space.
    /*
     * When doing 'call docb' without it it would return 225-5036 instead of 5362
     */
    inputVal.erase(std::remove_if(inputVal.begin(), inputVal.end(), ::isspace), inputVal.end());
    std::vector<int> tempNumArray = str_to_int_decoder(inputVal);
    std::cout << int_to_phonenum(tempNumArray) << std::endl;
    tempNumArray.clear();

    /*
    [Testing]
    std::string testStr = "DOCTORB";
    std::vector<int> tempV = str_to_int_decoder(testStr);
    std::cout << int_to_phonenum(tempV) << std::endl;
     */
    return 0;
    }

