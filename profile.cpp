/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 11
    - Functions revolving around the profile class.
*/
#include <iostream>
#include "profile.h"


Profile::Profile(std::string usrn, std::string dspn) {
    username = usrn;
    displayname = dspn;
}


Profile::Profile() {
    username = "";
    displayname = "";
}


std::string Profile::getUsername() {

    return username;
}


std::string Profile::getFullName() {
    return displayname + " (@" + username + ")";
}

std::string Profile::getDisplayName() {
    return displayname;
}


void Profile::setDisplayName(std::string dspn) {
    displayname = dspn;
}


