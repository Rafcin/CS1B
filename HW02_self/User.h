//
// Created by raf on 2/11/20.
//

#ifndef HW02_USER_H
#define HW02_USER_H

#include <system_error>
#include <string>

class User {

    std::string gender;
    float weight;
    float waist;
    float wrist;
    float hip;
    float forearm;

    float results;

    public:
        std::string getGender() const;

        void setGender(std::string gender);

        float getWeight() const;

        void setWeight(float weight);

        float getWaist() const;

        void setWaist(float waist);

        float getWrist() const;

        float getResults() const;

        void setResults(float results);

        void setWrist(float wrist);

        float getHip() const;

        void setHip(float hip);

        float getForearm() const;

        void setForearm(float forearm);

        User(const std::string &gender, float weight, float waist, float wrist, float hip, float forearm, float results);
        User();
};


#endif //HW02_USER_H
