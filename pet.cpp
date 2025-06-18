#include "pet.h"
#include<iostream>
#include<sstream>

//initializing my parametrized constructor
Pet::Pet()
{
    name="Lily";
    ID_number="AB";
    days_in_shelter=0;
    vaccinated=true;
    age=1;
}

std::string Pet::getName()const
{
    return name;
}

void Pet::setName(std::string name)
{
    this->name=name;
}

std::string Pet::getIDNumber()const
{
    return ID_number;
}

void Pet::setIDNumber(std::string ID_number)
{
    this->ID_number=ID_number;
}

int Pet::getDaysInShelter()const
{
    return days_in_shelter;
}

void Pet::setDaysInShelter(int days_in_shelter)
{
    this->days_in_shelter=days_in_shelter;
}

bool Pet::isVaccinated()const
{
     return vaccinated;
}

int Pet::getAge()const
{
    return age;
}

void Pet::setAge(int age)
{
    this->age=age;
}

void Pet::makeSound()
{
    std::cout<<"This pet is making a sound!"<<std::endl;
}

std::string Pet::petInfo()
{
    std::stringstream ss;
    ss<<"The ID of the pet is "<<ID_number<<" and its name is "<<name<<" and it is "<<age<<" years old!"<<std::endl;
    return ss.str();
}