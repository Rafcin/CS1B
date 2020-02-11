//
// Created by raf on 2/11/20.
//

#include "User.h"

char User::getGender() const {
    return gender;
}

void User::setGender(char gender) {
    User::gender = gender;
}

float User::getWeight() const {
    return weight;
}

void User::setWeight(float weight) {
    User::weight = weight;
}

float User::getWaist() const {
    return waist;
}

void User::setWaist(float waist) {
    User::waist = waist;
}

float User::getWrist() const {
    return wrist;
}

void User::setWrist(float wrist) {
    User::wrist = wrist;
}

float User::getHip() const {
    return hip;
}

void User::setHip(float hip) {
    User::hip = hip;
}

float User::getForearm() const {
    return forearm;
}

void User::setForearm(float forearm) {
    User::forearm = forearm;
}

float User::getResults() const {
    return results;
}

void User::setResults(float results) {
    User::results = results;
}
