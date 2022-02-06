# Draught
A naive draught engine

# Understanding the game of draught
Draughts is played on a 64 square chessboard. Take 12 counters of one color and place one on each of the black squares in the first 3 rows of your side. Your opponent does the same.

The object of the game is to capture all of your opponent's pieces or block them so they cannot be moved. Pieces are always moved diagonally, 1 square at a time, towards the opponent's side of the board. You play the entire game on the black squares, you do not need the white ones.

You can capture an enemy piece by hopping over it. Capturing is also done on the diagonal. You have to jump from the square directly next to your target and land on the square just beyond it. Your landing square must be vacant. The piece captured is removed from the board. If you are able to make a move that results in a capture then you must.
		
It is legal to capture more than 1 piece on a single move so long as the jumping piece has vacant landing spots in between. You cannot take 2 in a row you must land and "take off" again. The pieces are removed. If you are able to make a move that results in a capture then you must.

If you can get a piece all the way to the other side of the board, that piece becomes a king. Place a previously captured piece on top of the existing one in order to distinguish it from your other pieces. This piece can move backward or forwards diagonally. Towards the end of the game, all the pieces will be Kings, which changes the strategy significantly.
	
Capture all your opponent's pieces.


	
# Entities
  Pieces -> Kings, Pieces
  Moves
  Capture(forced or normal(game modes?))
  Board (squares)
  Win
  Notation
  
 ![Class Diagram](https://user-images.githubusercontent.com/44181657/152683299-8ae22e63-bd90-490d-8b1f-36f837138a60.png)


 

		
		

