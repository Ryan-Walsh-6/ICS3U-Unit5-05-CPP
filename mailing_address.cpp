// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 7 2021
// this program formats a mailing address

#include <iostream>
#include <string>
#include <iomanip>

std::string format_address(std::string addressee_from_user,
        std::string street_number_from_user, std::string street_name_from_user,
        std::string city_from_user, std::string province_from_user,
        std::string postal_code_from_user,
        std::string apt_number_from_user = "") {
    // calculates volume
    std::string mailing_address;

    // process & output
    if (apt_number_from_user != "") {
        mailing_address =  (addressee_from_user + "\n" + apt_number_from_user +
        "-" + street_number_from_user + " " + street_name_from_user + "\n"
        + city_from_user + " " + province_from_user + "  " +
        postal_code_from_user);
    } else {
        mailing_address = (addressee_from_user + "\n" +
        street_number_from_user + " " + street_name_from_user + "\n"
        + city_from_user + " " + province_from_user + "  " +
        postal_code_from_user);
    }

    return mailing_address;
}

int main() {
// this program formats a mailing address
    std::string addressee_from_user_string;
    std::string street_number_from_user_string;
    std::string street_name_from_user_string;
    std::string city_from_user_string;
    std::string province_from_user_string;
    std::string postal_code_from_user_string;
    std::string live_apt_from_user_string;
    std::string apt_number_from_user_string;
    std::string address_string;
    std::string format_address_string;

    std::cout << "Enter your name: ";
    std::getline(std::cin, addressee_from_user_string);
    std::cout << "Enter your street number: ";
    std::getline(std::cin, street_number_from_user_string);
    std::cout << "Enter your street name: ";
    std::getline(std::cin, street_name_from_user_string);
    std::cout << "Enter your city: ";
    std::getline(std::cin, city_from_user_string);
    std::cout << "Enter your province: ";
    std::getline(std::cin, province_from_user_string);
    std::cout << "Enter your postal code: ";
    std::getline(std::cin, postal_code_from_user_string);
    std::cout << "Do you live in a apartment? (y/n): ";
    std::getline(std::cin, live_apt_from_user_string);
    if (live_apt_from_user_string == "Y" || live_apt_from_user_string ==
    "YES") {
        std::cout << "Enter an apartment number: ";
        std::getline(std::cin, apt_number_from_user_string);
    std::cout << "" << std::endl;
    }


    // call functions
    if (apt_number_from_user_string != "") {
        address_string = format_address(addressee_from_user_string,
        street_number_from_user_string, street_name_from_user_string,
        city_from_user_string, province_from_user_string,
        postal_code_from_user_string, apt_number_from_user_string);
    } else {
        address_string = format_address(addressee_from_user_string,
        street_number_from_user_string, street_name_from_user_string,
        city_from_user_string, province_from_user_string,
        postal_code_from_user_string);
    }

    std::cout << address_string << std::endl;
}
