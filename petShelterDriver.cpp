#include"Pet.h"
#include<iostream>
#include<fstream>

int main()
{

Pet pet;
//std::cout<<pet.petInfo()<<std::endl;

//greeting the user
std::cout<<"***Hello! WELCOME TO LILY'S PET SHELTER***"<<std::endl
       <<"Before you start, let me introduce our program to you!"<<std::endl
       <<"Our program is to help the pets find their own homes!"<<std::endl
       <<"Would you like to adopt a pet?(Yes/No)"<<std::endl;

std::string yesOrNo;
std::cin>>yesOrNo;

if(yesOrNo=="Yes")
{
std::cout<<"Do you have the pet inventory with the size of 20?(Yes/No)"<<std::endl;
    std::cin>>yesOrNo;
    if(yesOrNo=="Yes")
    {
        std::cout<<"Please enter your file for the pets!"<<std::endl;
        //I am asking the user for the file name and putting the file name in a string
        std::string fileName;
        std::cin>>fileName;

        //then I created the file and open the file
        std::ifstream petFile;
        petFile.open(fileName);

}
else if(yesOrNo=="No")
{
std::cout<<"Thank you for visiting Lily's Pet Shelter!"<<std::endl;
}else
{
std::cout<<"Please enter Yes or No."<<std::endl;
}
//at the end of the adoption, write to the user saying "Promise to take care of "the name of the pet"? and that congrats you are the new owner of hin
//try to give more option for the old pet






}


  return 0;

  };