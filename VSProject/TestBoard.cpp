#include "Piece.h"
#include "Display.h"

#if __has_include("gtest/gtest.h")
#include "gtest/gtest.h"
#endif

using namespace model;
using namespace display;

#ifdef TEST
TEST(Piece, TestColor) 
{
	Piece piece = Piece();
	EXPECT_EQ(piece.getColor(), Color::WHITE);
}

TEST(Piece, TestCoordante) 
{
	ChessBoard chessBoard;
	Piece piece = Piece(1, 2, model::Color::BLACK, &chessBoard);
	std::pair<int, int> expectedResult { 1, 2 };

	EXPECT_EQ(piece.getCoordinates(), expectedResult);
}

TEST(Piece, TestAddPiece)
{
	ChessBoard chessBoard;
	model::Pawn* blackPawn = new model::Pawn(1, 0, model::Color::BLACK, &chessBoard);
	chessBoard.addPiece(blackPawn);

	EXPECT_EQ(chessBoard.getPieceAt(1, 0), blackPawn);
}

TEST(Piece, TestPossibleMoves)
{
	ChessBoard chessBoard;
	model::Pawn* blackPawn = new model::Pawn(1, 0, model::Color::BLACK, &chessBoard);
	model::Rook* blackRook = new model::Rook(1, 2, model::Color::BLACK, &chessBoard);
	model::Pawn* whitePawn = new model::Pawn(4, 2, model::Color::WHITE, &chessBoard);

	chessBoard.addPiece(blackPawn);
	chessBoard.addPiece(blackRook);
	chessBoard.addPiece(whitePawn);

	blackRook->defineValidMoves();

	std::set<std::pair<int, int>> expectedPossibleMoves{ 
		{1,1}, {1,3}, {1,4}, {1,5}, {1,6}, {1,7}, {2,2}, {3,2}, {4,2}, {0,2} };

	std::vector<std::pair<int, int>> possibleMoves = chessBoard.getPieceAt(1, 2)->getPossibleMoves();
	std::set<std::pair<int, int>> possibleMovesSet (possibleMoves.begin(), possibleMoves.end());
	
	EXPECT_EQ(possibleMovesSet, expectedPossibleMoves);
}

TEST(Piece, TestMove)
{
	ChessBoard chessBoard;
	model::Pawn* blackPawn = new model::Pawn(1, 0, model::Color::BLACK, &chessBoard);
	model::Rook* blackRook = new model::Rook(1, 2, model::Color::BLACK, &chessBoard);
	model::Pawn* whitePawn = new model::Pawn(4, 2, model::Color::WHITE, &chessBoard);
	
	model::King* whiteKing = new model::King(0, 7, model::Color::WHITE, &chessBoard);
	model::King* blackKing = new model::King(7, 7, model::Color::BLACK, &chessBoard);

	chessBoard.addPiece(blackPawn);
	chessBoard.addPiece(blackRook);
	chessBoard.addPiece(whitePawn);

	chessBoard.addPiece(whiteKing);
	chessBoard.addPiece(blackKing);

	blackRook->defineValidMoves();
	chessBoard.movePiece(blackRook, 1, 6, true);

	EXPECT_EQ(chessBoard.getPieceAt(1, 6), blackRook);

	blackRook->defineValidMoves();
	chessBoard.movePiece(blackRook, 5, 6, true);

	EXPECT_EQ(chessBoard.getPieceAt(5, 6), blackRook);
}

TEST(Piece, TestCheck)
{
	ChessBoard chessBoard;
	model::Rook* blackRook = new model::Rook(1, 2, model::Color::BLACK, &chessBoard);
	model::King* blackKing = new model::King(7, 7, model::Color::BLACK, &chessBoard);
	model::King* whiteKing = new model::King(4, 2, model::Color::WHITE, &chessBoard);

	chessBoard.addPiece(blackRook);
	chessBoard.addPiece(whiteKing);
	chessBoard.addPiece(blackKing);

	EXPECT_EQ(chessBoard.isWhiteCheck(), true);
}

TEST(Piece, TestLegalMove)
{
	ChessBoard chessBoard = ChessBoard();
	model::Rook* blackRook = new model::Rook(1, 4, model::Color::BLACK, &chessBoard);
	model::King* blackKing = new model::King(5, 6, model::Color::BLACK, &chessBoard);

	model::King* whiteKing = new model::King(5, 4, model::Color::WHITE, &chessBoard);
	model::Pawn* whitePawn = new model::Pawn(3, 3, model::Color::WHITE, &chessBoard);

	chessBoard.addPiece(blackRook);
	chessBoard.addPiece(blackKing);

	chessBoard.addPiece(whiteKing);
	chessBoard.addPiece(whitePawn);

	chessBoard.toggleCurrentPlayer();

	EXPECT_EQ(chessBoard.movePiece(whitePawn, 3, 2, true), false);
}
TEST(Piece, TestExeption)
{
	ChessBoard chessBoard = ChessBoard();
	model::King* blackKing = new model::King(5, 6, model::Color::BLACK, &chessBoard);
	
	model::King* whiteKing1 = new model::King(5, 4, model::Color::WHITE, &chessBoard);
	model::King* whiteKing2 = new model::King(5, 4, model::Color::WHITE, &chessBoard);


	chessBoard.addPiece(blackKing);
	chessBoard.addPiece(whiteKing1);

	EXPECT_THROW(chessBoard.addPiece(whiteKing2), IncoherentKingsException);
}

#endif