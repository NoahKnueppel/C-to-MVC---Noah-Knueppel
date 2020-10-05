#ifndef f
#define f

#include <iostream>
#include <string>


using namespace std;


class ForceBeing {
  private:
  int power_level;
  std::string name;
  bool evil;



  protected:
  ForceBeing(int level) {
    power_level = level;
  }

  void setName(string characterName) {
    name = characterName;
  }

  void setPowerlevel(int level) {
      power_level = level;
  }

  public: 
  virtual int getPowerLevel() {
    return power_level;
  }
  void setEvil() {
    evil = true;
  }
  virtual string getName() {
    return name;
  }
  void setGood() {
    evil = false;
  }

};
#endif