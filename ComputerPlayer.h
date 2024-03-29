//computerplayer.h

#ifndef COMPUTERPLAYER_H_
#define COMPUTERPLAYER_H_

#include "Player.h"

class ComputerPlayer: public Player {
public:
	ComputerPlayer(string name, Board::Pieces piece, Board &board);
	virtual ~ComputerPlayer();
    
	void nextMove();
};

#endif /* COMPUTERPLAYER_H_ */
