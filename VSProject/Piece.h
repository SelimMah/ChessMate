/**
* Programme La declaration des classes Piece et ChessBoard permettant de definir la logique du jeu.
* \file		Piece.h
* \author	Selim Mahjoub, Brice Tangmouo Manfo, Bryan Alexandre Tavares
* \date		03 mars 2024
* Créé le	25 mars 2024
*/

#pragma once

#include <string>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <memory> 
#include <algorithm>
#include <set>

namespace model
{
	class IncoherentKingsException : public std::exception
	{
	public:
		using std::exception::exception;
	};

	class InvalidMovementException : public std::exception
	{
	public:
		using std::exception::exception;
	};

	const std::vector<std::pair<int, int>> PawnMoves = { {0, 1}, {1, 1}, {1, -1} };
	const std::vector<std::pair<int, int>> RookMoves = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
	const std::vector<std::pair<int, int>> KnightMoves = { {1, 2}, {2, 1}, {-1, 2}, {1, -2}, {-2, 1}, {-2, -1}, {-1, -2}, {2, -1} };
	const std::vector<std::pair<int, int>> BishopMoves = { {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
	const std::vector<std::pair<int, int>> QueenMoves = { {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
	const std::vector<std::pair<int, int>> KingMoves = { {0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };

	enum class PieceType { KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN, EMPTY };

	enum Color { BLACK = 0, WHITE = 1 };

	class Piece;

	class ChessBoard
	{
	public:
		friend class Piece;
		ChessBoard();
		ChessBoard(ChessBoard& chessBoard);
		~ChessBoard();

		void debugChessBoard();

		static bool inChessBoard(int x, int y);
		Piece* getPieceAt(int x, int y) { return chessBoard[x][y]; };
		
		void setChessboard(Piece* piece);
		void resetNKing() { nKing_ = 0; }
		
		bool getCurrentPlayer() const { return currentPlayer; };
		void toggleCurrentPlayer() { currentPlayer = !currentPlayer; };
		
		std::set<Piece*> getPosBlack() const { return posBlack; };
		std::set<Piece*> getPosWhite() const { return posWhite; };
		
		bool isEmpty(int x, int y);
		void addPiece(Piece* piece);
		
		bool isWhiteCheck();
		bool isBlackCheck();
		
		bool isMoveLegal(Piece& piece, int destX, int destY);
		bool movePiece(Piece* piece, int x, int y, bool checkLegal);

	protected:
		Piece* chessBoard[8][8] = {};
		
		bool currentPlayer = 0;
		int nKing_ = 0;
		
		std::set<Piece*> posWhite;
		std::set<Piece*> posBlack;
	};

	class Piece
	{
	public:
		Piece() : x_(0), y_(0), color_(WHITE), pieceType_(PieceType::EMPTY), chessBoard_(nullptr){};
		Piece(int x, int y, Color pieceColor, ChessBoard* chessBoard) : x_(x), y_(y), color_(pieceColor), pieceType_(PieceType::EMPTY), chessBoard_(chessBoard) {};
		Piece(int x, int y, Color pieceColor, PieceType pieceType, ChessBoard* chessBoard) : Piece(x, y, pieceColor, chessBoard) { pieceType_ = pieceType; };
		Piece(Piece& otherPiece, ChessBoard* chessBoard);
		
		virtual ~Piece() = default;

		std::pair<int, int> getCoordinates() const { return { x_, y_ }; };
		std::vector<std::pair<int, int>> getPossibleMoves() const { return possibleMoves_; }; //Tout les Position de déplacement (vrai coord)
		std::vector<std::pair<int, int>> getMoves() const { return Moves_; }; // Mouvement basique
		std::vector<std::pair<int, int>> getBlockingAlly() const { return blockingAlly; };
		PieceType getPieceType() const { return pieceType_; };
		bool const getColor() const { return color_; };
		
		void setCoordinate(int x, int y) { x_ = x; y_ = y; };
		void resetPossibleMoves_() {possibleMoves_.erase(possibleMoves_.begin(), possibleMoves_.end()); }

		Color getEnnemyColor() { return (color_ == Color::BLACK) ? Color::WHITE : Color::BLACK; };
		bool isEnnemy(std::pair<int, int> position);

		virtual void defineValidMoves() { std::cout << "Rien"; };

		void debugPossibleMoves_();

	protected:
		bool color_ = WHITE;
		PieceType pieceType_;

		int x_ = 0;
		int y_ = 0;

		ChessBoard* chessBoard_;

		std::vector<std::pair<int, int>> possibleMoves_;
		std::vector<std::pair<int, int>> Moves_;
		std::vector<std::pair<int, int>> blockingAlly;
	};

	class King : public Piece
	{
	public:
		King(int x, int y, Color pieceColor, ChessBoard* chessBoard) : Piece(x, y, pieceColor, PieceType::KING, chessBoard) { Moves_ = KingMoves; };
		King(King& otherPiece, ChessBoard* chessBoard) {
			color_ = otherPiece.color_;
			pieceType_ = otherPiece.pieceType_;
			x_ = otherPiece.x_;
			y_ = otherPiece.y_;
			chessBoard_ = chessBoard;
			for (auto pair : otherPiece.possibleMoves_) {
				possibleMoves_.push_back(pair);
			}
			for (auto pair : otherPiece.Moves_) {
				Moves_.push_back(pair);
			}
			for (auto pair : otherPiece.blockingAlly) {
				blockingAlly.push_back(pair);
			}
		}
		void defineValidMoves();

	};

	class Queen : public virtual Piece
	{
	public:
		Queen(int x, int y, Color pieceColor, ChessBoard* chessBoard) : Piece(x, y, pieceColor, PieceType::QUEEN, chessBoard) { Moves_ = QueenMoves; };
		Queen(Queen& otherPiece, ChessBoard* chessBoard) {
			color_ = otherPiece.color_;
			pieceType_ = otherPiece.pieceType_;
			x_ = otherPiece.x_;
			y_ = otherPiece.y_;
			chessBoard_ = chessBoard;
			for (auto pair : otherPiece.possibleMoves_) {
				possibleMoves_.push_back(pair);
			}
			for (auto pair : otherPiece.Moves_) {
				Moves_.push_back(pair);
			}
			for (auto pair : otherPiece.blockingAlly) {
				blockingAlly.push_back(pair);
			}
		}
		void defineValidMoves() override;

	};

	class Bishop : public virtual Piece
	{
	public:
		Bishop(int x, int y, Color pieceColor, ChessBoard* chessBoard) : Piece(x, y, pieceColor, PieceType::BISHOP, chessBoard) { Moves_ = BishopMoves; };
		Bishop(Bishop& otherPiece, ChessBoard* chessBoard) {
			color_ = otherPiece.color_;
			pieceType_ = otherPiece.pieceType_;
			x_ = otherPiece.x_;
			y_ = otherPiece.y_;
			chessBoard_ = chessBoard;
			for (auto pair : otherPiece.possibleMoves_) {
				possibleMoves_.push_back(pair);
			}
			for (auto pair : otherPiece.Moves_) {
				Moves_.push_back(pair);
			}
			for (auto pair : otherPiece.blockingAlly) {
				blockingAlly.push_back(pair);
			}
		}

		void defineValidMoves() override;
	};

	class Knight : public virtual Piece
	{
	public:
		Knight(int x, int y, Color pieceColor, ChessBoard* chessBoard) : Piece(x, y, pieceColor, PieceType::KNIGHT, chessBoard) { Moves_ = KnightMoves; };
		Knight(Knight& otherPiece, ChessBoard* chessBoard) {
			color_ = otherPiece.color_;
			pieceType_ = otherPiece.pieceType_;
			x_ = otherPiece.x_;
			y_ = otherPiece.y_;
			chessBoard_ = chessBoard;
			for (auto pair : otherPiece.possibleMoves_) {
				possibleMoves_.push_back(pair);
			}
			for (auto pair : otherPiece.Moves_) {
				Moves_.push_back(pair);
			}
			for (auto pair : otherPiece.blockingAlly) {
				blockingAlly.push_back(pair);
			}
		}
		void defineValidMoves() override;

	};

	class Rook : public virtual Piece
	{
	public:
		Rook(int x, int y, Color pieceColor, ChessBoard* chessBoard) : Piece(x, y, pieceColor, PieceType::ROOK, chessBoard) { Moves_ = RookMoves; };
		Rook(Rook& otherPiece, ChessBoard* chessBoard) {
			color_ = otherPiece.color_;
			pieceType_ = otherPiece.pieceType_;
			x_ = otherPiece.x_;
			y_ = otherPiece.y_;
			chessBoard_ = chessBoard;
			for (auto pair : otherPiece.possibleMoves_) {
				possibleMoves_.push_back(pair);
			}
			for (auto pair : otherPiece.Moves_) {
				Moves_.push_back(pair);
			}
			for (auto pair : otherPiece.blockingAlly) {
				blockingAlly.push_back(pair);
			}
		}
		void defineValidMoves() override;

	};

	class Pawn : public virtual Piece
	{
	public:

		Pawn(int x, int y, Color pieceColor, ChessBoard* chessBoard) : Piece(x, y, pieceColor, PieceType::PAWN, chessBoard) { Moves_ = PawnMoves; };
		Pawn(Pawn& otherPiece, ChessBoard* chessBoard) {
			color_ = otherPiece.color_;
			pieceType_ = otherPiece.pieceType_;
			x_ = otherPiece.x_;
			y_ = otherPiece.y_;
			isFirstMove = otherPiece.isFirstMove;
			chessBoard_ = chessBoard;
			for (auto pair : otherPiece.possibleMoves_) {
				possibleMoves_.push_back(pair);
			}
			for (auto pair : otherPiece.Moves_) {
				Moves_.push_back(pair);
			}
			for (auto pair : otherPiece.blockingAlly) {
				blockingAlly.push_back(pair);
			}
		}
		void defineValidMoves() override;
		void disableFirstMove() { isFirstMove = false; }

	protected:
		bool isFirstMove = false;
	};
}