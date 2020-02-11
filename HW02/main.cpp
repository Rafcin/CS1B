#include <iostream>
#include "BMI.h"
#include "User.h"

#include <fstream>
#include <string>

int main() {
    /*
     * Proc take input file and each line is a new person with a def of:
     * {Index, Gender, Details}
     */

    std::cout<<"**Please Enter # of users you would like to enter...**"<<std::endl;
    int userSize = 0;
    std::cin >> userSize;
    std::cout<<"[Selected " <<userSize<<" Users]"<<std::endl;
    User userARR[userSize];
    int index = 0;
    for(User u : userARR){
        char gender;
        float weight;
        float waist;
        float wrist;
        float hip;
        float forearm;
        std::cout<<"Enter a gender (M or F) for user "<<index+1<<std::endl;
        std::cin >> gender;
        std::cout<<"Gender is: "<<gender<<std::endl;
        u.setGender(gender);
        if(gender == 'M' || gender == 'm'){
            std::cout<<"User "<<index+1<<" Is Male"<<std::endl;
            std::cout<<"Please Enter the user weight..."<<std::endl;
            std::cin >> weight;
            u.setWeight(weight);
            std::cout<<"Please Enter the user waist size..."<<std::endl;
            std::cin >> waist;
            u.setWaist(waist);
            u.setResults(male_calc(weight,waist));
            std::cout<<"Finished User "<<index+1<<""<<std::endl;
        }else{
            std::cout<<"User "<<index+1<<" Is Female"<<std::endl;
            std::cout<<"Please Enter the user weight..."<<std::endl;
            std::cin >> weight;
            u.setWeight(weight);
            std::cout<<"Please Enter the user waist size..."<<std::endl;
            std::cin >> waist;
            u.setWaist(waist);
            std::cout<<"Please Enter the user wrist size..."<<std::endl;
            std::cin >> wrist;
            u.setWrist(wrist);
            std::cout<<"Please Enter the user hip size..."<<std::endl;
            std::cin >> hip;
            u.setHip(hip);
            std::cout<<"Please Enter the user forearm size..."<<std::endl;
            std::cin >> forearm;
            u.setForearm(forearm);
            u.setResults(female_calc(weight,wrist,waist,hip,forearm));
            std::cout<<"Finished User "<<index+1<<""<<std::endl;
        }
        index++;
    }
    for(User u : userARR){
        std::cout<<u.getResults()<<std::endl;
    }



    return 0;
}