#include <iostream>
#include "BMI.h"
#include "User.h"

#include <fstream>
#include <string>

int main() {

    //I'm not happy with this code, but I also need sleep so this is what I wrote
    //During a boring meeting.

    //@Todo
    /*
     * Add catches for variables of non float type
     * Output to file
     */

    //Incase this HW breaks here is some contact info
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"Bugs or issues? Contact Raf @"<<std::endl;
    std::cout<<"Rafcin.s@mail.com"<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"Please Enter # of users you would like to enter..."<<std::endl;
    int userSize = 0;
    std::cin >> userSize;
    std::cout<<"[Selected " <<userSize<<" Users]"<<std::endl;
    User userARR[userSize];
    int index = 0;
    for(User u : userARR){
        //create values each time the loop starts...
        User user("NA",0.0,0.0,0.0,0.0,0.0,0.0);
        std::string gender;
        float weight;
        float waist;
        float wrist;
        float hip;
        float forearm;
        std::cout<<"Enter a gender (M or F) for user "<<index+1<<std::endl;
        std::cin >> gender;
        std::cout<<"Gender is: "<<gender<<std::endl;
        //binary, so really just one check.
        if(gender == "M" || gender == "m"){
            user.setGender("Male");
            std::cout<<"User "<<index+1<<" Is Male"<<std::endl;
            std::cout<<"Please Enter the user weight..."<<std::endl;
            std::cin >> weight;
            user.setWeight(weight);
            std::cout<<"Please Enter the user waist size..."<<std::endl;
            std::cin >> waist;
            user.setWaist(waist);
            user.setResults(male_calc(weight,waist));
            std::cout<<"Finished User "<<index+1<<""<<std::endl;
        }else{
            //This whole segment is so hard to look at but I don't want to move it
            user.setGender("Female");
            std::cout<<"User "<<index+1<<" Is Female"<<std::endl;
            std::cout<<"Please Enter the user weight..."<<std::endl;
            std::cin >> weight;
            user.setWeight(weight);
            std::cout<<"Please Enter the user waist size..."<<std::endl;
            std::cin >> waist;
            user.setWaist(waist);
            std::cout<<"Please Enter the user wrist size..."<<std::endl;
            std::cin >> wrist;
            user.setWrist(wrist);
            std::cout<<"Please Enter the user hip size..."<<std::endl;
            std::cin >> hip;
            user.setHip(hip);
            std::cout<<"Please Enter the user forearm size..."<<std::endl;
            std::cin >> forearm;
            user.setForearm(forearm);
            user.setResults(female_calc(weight,wrist,waist,hip,forearm));
            std::cout<<"Finished User "<<index+1<<""<<std::endl;
        }
        //Oh dear
        userARR[index] = user;
        index++;
    }

    //I'm not sure if you read the code, but you'll probably find these random comments that don't mean anything. Like this one.
    std::ofstream userDataFile;
    userDataFile.open("user_data.txt");
    if(userDataFile.is_open()){
        int index = 0;
        for(User u : userARR){
            userDataFile << "User: " << index+1 << " Gender: " << u.getGender() << " Result: " <<u.getResults() <<std::endl;
            index++;
        }
    }
    //Close
    userDataFile.close();
    std::cout<<"File Saved (Check debug if you don't see it in the main path)"<<std::endl;


    return 0;
}