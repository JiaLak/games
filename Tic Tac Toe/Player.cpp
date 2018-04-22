/* Player.cpp
 *
 * Contains the implementation for a Tic Tac Toe player
 *   Type 1: Human Player
 *   Type 2: Simple AI Player
 *   Type 3: Advanced AI Player
 *
 * Authors
 *   Ishpreet Kohli
 *
 * Last Update
 *   04-22-2018
 */

#include "Player.h"
#include <string>

using namespace std;

class Human : public Player {
public:
  // REQUIRES: letter_in is 'x' or 'o'
  // EFFECTS: Constructs a human player with the given name and letter
  Human(string name_in) : name(name_in) { }
  
  // EFFECTS: Returns player's name
  virtual const std::string & get_name() const override {
    return name;
  }
  
private:
  string name;
};

class Simple : public Player {
public:
  // EFFECTS: Returns player's name
  virtual const std::string & get_name() const override {
    return name;
  }
  
private:
  string name = "AI Player";
};

class Advanced : public Player {
public:
  // EFFECTS: Returns player's name
  virtual const std::string & get_name() const override {
    return name;
  }
  
private:
  string name = "AI Player";
};

Player * Player_factory(const std::string &name, const std::string &strategy) {
  if (strategy == "Simple") {
    return new Simple();
  }
  else if (strategy == "Advanced") {
    return new Advanced();
  }
  else {
    return new Human(name);
  }
}

std::ostream & operator<<(std::ostream &os, const Player &p) {
  os << p.get_name();
  return os;
}
