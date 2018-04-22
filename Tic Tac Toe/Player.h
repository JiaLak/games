#ifndef PLAYER_H
#define PLAYER_H
/* Player.h
 *
 * Contains the interface for a Tic Tac Toe player
 *
 * Authors
 *   Ishpreet Kohli
 *
 * Last Update
 *   04-22-2018
 */

#include <string>

class Player {
public:
  // EFFECTS: Returns player's name
  virtual const std::string & get_name() const = 0;
};

// EFFECTS: Returns a pointer to a player with the given name and strategy
Player * Player_factory(const std::string &name, const std::string &strategy);

// EFFECTS: Prints player's name and letter to os
std::ostream & operator<<(std::ostream &os, const Player &p);

#endif
