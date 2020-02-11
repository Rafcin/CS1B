//
// Created by raf on 2/11/20.
//

#ifndef HW02_USER_H
#define HW02_USER_H

#include <system_error>

class User : public std::error_code {
    public:
        char gender;
        float weight;
        float waist;
        float wrist;
        float hip;
        float forearm;

        float results;

        char getGender() const;

        void setGender(char gender);

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
};


#endif //HW02_USER_H
