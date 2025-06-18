#ifndef PET_H
#define PET_H
#include<string>

class Pet
{
  private:
  //data members
  std::string name;
  std::string ID_number;
  int days_in_shelter;
  //additional characteristic
  bool vaccinated;
  int age;

public:
  /**
   * @brief default constructor
   */
  Pet();

  /**
   * @brief parametrized constructor
   * @param name of the pet
   * @param ID_number of the pet
   * @param days_in_shelter of the pet
   */
  Pet(std::string name,std::string ID_number, int days_in_shelter,bool vaccinated, int age);

  /**
   * @brief the accessor for the name
   * @return the name of the pet
   */
  std::string getName()const;

  /**
   * @brief the mutator for the name
   * @param name of the pet
   */
  void setName(std::string name);

  /**
   * @brief the accessor for the id number
   * @return the id number of the pet
   */
  std::string getIDNumber()const;

  /**
   * @brief the mutator for the id number
   * @param ID_number of the pet
   */
  void setIDNumber(std::string ID_number);

  /**
   * @brief the accessor for the days in shelter
   * @return the days in the shelter of the pet
   */
  int getDaysInShelter()const;

  /**
   * @brief the mutator for the days in shelter of the pet
   * @param days_in_shelter of the pet
   */
  void setDaysInShelter(int days_in_shelter);

  /**
   *
   * @return true if the pet is vaccinated else false
   */
  bool isVaccinated()const;

  /**
   * @brief the accessor of the pet
   * @return the age of the pet
   */
  int getAge()const;

  /**
   * @brief the mutator for the age of the pet
   * @param age of the pet
   */
  void setAge(int age);

  /**
   * @brief this function will be inherited by the derived classes
   */
   virtual void makeSound();

  /**
   * @brief this is a virtual function and must be overridden
   * @return the information of the pet
   */
  virtual std::string petInfo();



  };


#endif //PET_H
