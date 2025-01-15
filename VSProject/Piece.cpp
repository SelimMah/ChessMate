/**
* Programme La definnition des classes Piece et ChessBoard permettant de definir la logique du jeu.
* \file		Piece.cpp
* \author	Selim Mahjoub, Brice Tangmouo Manfo, Bryan Alexandre Tavares
* \date		03 mars 2024
* Créé le	25 mars 2024
*/



#include "Piece.h"


namespace model
{
	ChessBoard::ChessBoard() {
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 4; ++j) {
				chessBoard[i][j] = new Piece(i, j, Color::BLACK, this);
			}
			for (int j = 4; j < 8; ++j) {
				chessBoard[i][j] = new Piece(i, j, Color::WHITE, this);
			}
		}
	}

	ChessBoard::ChessBoard(ChessBoard& otherChessBoard) {
		for (int x = 0; x < 8; x++) {
			for (int y = 0; y < 8; y++) {
				Piece* temp = otherChessBoard.chessBoard[x][y];
				
				if (auto king = dynamic_cast<King*>(temp)) {
					chessBoard[x][y] = new King(*king, this);
				}
				else if (auto queen = dynamic_cast<Queen*>(temp)) {
					chessBoard[x][y] = new Queen(*queen, this);
				}
				else if (auto bishop = dynamic_cast<Bishop*>(temp)) {
					chessBoard[x][y] = new Bishop(*bishop, this);
				}
				else if (auto knight = dynamic_cast<Knight*>(temp)) {
					chessBoard[x][y] = new Knight(*knight, this);
				}
				else if (auto rook = dynamic_cast<Rook*>(temp)) {
					chessBoard[x][y] = new Rook(*rook, this);
				}
				else if (auto pawn = dynamic_cast<Pawn*>(temp)) {
					chessBoard[x][y] = new Pawn(*pawn, this);
				}
				else {
					chessBoard[x][y] = new Piece(*temp, this);
				}
			}
		}

		currentPlayer = otherChessBoard.currentPlayer;
		nKing_ = otherChessBoard.nKing_;
		for (auto piece : otherChessBoard.posWhite) {
			posWhite.insert(chessBoard[piece->getCoordinates().first][piece->getCoordinates().second]);
		}
		for (auto piece : otherChessBoard.posBlack) {
			posBlack.insert(chessBoard[piece->getCoordinates().first][piece->getCoordinates().second]);
		}
	}
	
	ChessBoard::~ChessBoard() {
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				delete chessBoard[i][j];
			}
		}
	}

	// Vérifie si la case aux coordonnées spécifiées est vide.
	bool ChessBoard::isEmpty(int x, int y) 
	{ 
		return getPieceAt(x, y)->getPieceType() == PieceType::EMPTY; 
	};
	
	// Affiche le contenu de l'échiquier dans la console à des fins de débogage.
	void ChessBoard::debugChessBoard()
	{
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				switch (chessBoard[j][i]->getPieceType()) {
				case PieceType::KING:
					std::cout << "King  ";
					break;
				case PieceType::QUEEN:
					std::cout << "Queen  ";
					break;
				case PieceType::BISHOP:
					std::cout << "Bishop  ";
					break;
				case PieceType::KNIGHT:
					std::cout << "Knight  ";
					break;
				case PieceType::ROOK:
					std::cout << "Rook  ";
					break;
				case PieceType::PAWN:
					std::cout << "Pawn  ";
					break;
				case PieceType::EMPTY:
					std::cout << "Empty  ";
					break;
				default:
					break;
				}
			}
			std::cout << std::endl;
		}
	}

	// Place une pièce d'échecs sur l'échiquier aux coordonnées spécifiées.
	//piece Un pointeur vers l'objet Piece à placer sur l'échiquier.
	void ChessBoard::setChessboard(Piece* piece)
	{
		chessBoard[piece->getCoordinates().first][piece->getCoordinates().second] = piece;
	}

	// Vérifie si les coordonnées (x, y) se trouvent dans les limites du plateau d'échecs standard 8x8.
	// Retourne true si les coordonnées sont valides, sinon retourne false.
	bool ChessBoard::inChessBoard(int x, int y)
	{
		const int lengthChessBoard = 8;
	
		if (x >= 0 && x < lengthChessBoard && y >= 0 && y < lengthChessBoard) 
		{
			return true; 
		}
		else 
		{
			return false;
		}
	}

	// Ajoute une pièce au plateau d'échecs.
	// Met à jour les positions des pièces blanches et noires, gère le nombre de rois présents,
	// et lance une exception si le nombre de rois dépasse 2.
	void ChessBoard::addPiece(Piece* piece) {
		int x = piece->getCoordinates().first;
		int y = piece->getCoordinates().second;

		auto pieceTemp = getPieceAt(x, y);

		if (pieceTemp != nullptr && pieceTemp->getPieceType() != PieceType::EMPTY) {
			if (pieceTemp->getColor() == Color::WHITE) {
				posWhite.erase(pieceTemp);
			}
			else {
				posBlack.erase(pieceTemp);
			}
		}

		delete chessBoard[x][y];

		chessBoard[x][y] = piece;

		if (piece->getPieceType() == PieceType::KING) {
			nKing_++;
			//std::cout << "Le nombre de rois : " << nKing_ << std::endl;
			if ((posWhite.find(piece) != posWhite.end()) || (posBlack.find(piece) != posBlack.end())) {
				nKing_--;
			}
		}

		if (inChessBoard(piece->getCoordinates().first, piece->getCoordinates().second) && piece->getPieceType() != PieceType::EMPTY)
		{
			if (piece->getColor() == Color::WHITE) {
				posWhite.insert(piece);
			}
			else
			{
				posBlack.insert(piece);
			}
		}

		if (nKing_ > 2)
		{
			//std::cout << "Trop de roi; une erreur a été ";
			throw IncoherentKingsException("Trop de roi; une erreur a ete declanche et gere ");
		}

	}

	// Déplace une pièce à la position spécifiée sur le plateau d'échecs.
	// Si le paramètre `checkLegal` est true, vérifie d'abord la légalité du mouvement.
	// Met à jour les coordonnées de la pièce, ajoute la pièce déplacée, retire la pièce d'origine,
	// et retourne true si le déplacement est effectué avec succès, sinon retourne false.
	bool ChessBoard::movePiece(Piece* piece, int x, int y, bool checkLegal) {
		std::pair<int, int> p = piece->getCoordinates();
		if (!checkLegal || isMoveLegal(*piece, x, y)) 
		{ 
			piece->setCoordinate(x, y);
			addPiece(piece);
			chessBoard[p.first][p.second] = nullptr;
			Piece* pEmpty = new Piece();
			pEmpty->setCoordinate(p.first, p.second);
			addPiece(pEmpty);
			return true;
		}
		return false;
	}

	// Vérifie la légalité d'un mouvement pour une pièce donnée vers une destination spécifique.
	// Crée une copie temporaire de l'échiquier pour simuler le mouvement et vérifier
	// si le roi de la couleur de la pièce serait en échec après le mouvement.
	// Retourne true si le mouvement est légal, sinon retourne false.
	bool ChessBoard::isMoveLegal(Piece& piece, int destX, int destY) {
		bool isMovePossible = false;
		piece.defineValidMoves();
		for (auto& depl : piece.getPossibleMoves()) {
			if (depl.first == destX && depl.second == destY) {
				isMovePossible = true;
				break;
			}
		}
		if (not isMovePossible) {
			return false;
		}

		// Créer une copie temporaire de l'échiquier
		ChessBoard tempChessBoard(*this);

		// Déplacer la pièce sur la copie temporaire
		Piece* tempPiece = tempChessBoard.getPieceAt(piece.getCoordinates().first, piece.getCoordinates().second);
		tempChessBoard.movePiece(tempPiece, destX, destY, false);
		//tempChessBoard.debugChessBoard();

		// Vérifier si le roi de la couleur de la pièce est en échec sur la copie temporaire
		if (piece.getColor() == WHITE) {
			if (tempChessBoard.isWhiteCheck()) {
				return false;
			}
		}
		else {
			if (tempChessBoard.isBlackCheck()) {
				return false;
			}
		}
		return true;
	}

	// Vérifie si le roi blanc est en échec.
	// Parcourt toutes les pièces noires pour voir si l'une d'elles peut attaquer le roi blanc.
	// Retourne true si le roi blanc est en échec, sinon retourne false.
	bool ChessBoard::isWhiteCheck() {
		Piece* roi = nullptr;
		for (auto piece : posWhite) {
			if (getPieceAt(piece->getCoordinates().first, piece->getCoordinates().second)->getPieceType() == PieceType::KING){
				roi = getPieceAt(piece->getCoordinates().first, piece->getCoordinates().second);
				break;
			}
		}

		for (auto piece : posBlack) {
			if (piece->getPieceType() != PieceType::KING)
			{
				piece->defineValidMoves();
				std::vector<std::pair<int, int>> possibleMoves = piece->getPossibleMoves();
				auto it = std::find_if(possibleMoves.begin(), possibleMoves.end(), [&](std::pair<int, int> pair) { return pair == roi->getCoordinates(); });
				if (it != possibleMoves.end()) {
					return true;
				}
			}
		}
		return false;
	}

	// Vérifie si le roi noir est en échec.
	// Parcourt toutes les pièces blanches pour voir si l'une d'elles peut attaquer le roi noir.
	// Retourne true si le roi noir est en échec, sinon retourne false.
	bool ChessBoard::isBlackCheck() {
		Piece* roi = nullptr;
		for (auto piece : posBlack) {
			if (getPieceAt(piece->getCoordinates().first, piece->getCoordinates().second)->getPieceType() == PieceType::KING) {
				roi = getPieceAt(piece->getCoordinates().first, piece->getCoordinates().second);
				break;
			}
		}

		for (Piece* piece : posWhite) {
			if (piece->getPieceType() != PieceType::KING)
			{	
				piece->defineValidMoves();
				std::vector<std::pair<int, int>> possibleMoves = piece->getPossibleMoves();
				bool posPossible = false;
				for (auto& pos : possibleMoves) {
					if (pos.first == roi->getCoordinates().first && pos.second == roi->getCoordinates().second) {
						posPossible = true;
					}
				}
				if (posPossible) {
					return true;
				}
			}
		}
		return false;
	}

	//---------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------

	Piece::Piece(Piece& otherPiece, ChessBoard* chessBoard) {
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
	
	// Vérifie si la pièce est un ennemi en fonction de sa position.
	// Retourne true si la pièce est un ennemi, sinon retourne false.
	bool Piece::isEnnemy(std::pair<int, int> position)
	{
		auto&& [colonne, ligne] = position;
		Piece* ptrEnnemy = chessBoard_->getPieceAt(colonne, ligne);
		if (ptrEnnemy->getColor() != color_) {
			return true;
		}
		return false;
	}

	// Affiche les mouvements possibles de la pièce à des fins de débogage.
	void Piece::debugPossibleMoves_()
	{
		for (std::pair<int, int> possibleMove : possibleMoves_)
		{
			std::cout << " ( " << possibleMove.first << " " << possibleMove.second << " ) ";
		}
	}

	// Définit les mouvements valides pour le roi.
	// Crée une copie temporaire de l'échiquier pour évaluer les mouvements possibles sans mettre le roi en échec.
	// Calcule les positions des pièces ennemies et bloqueuses alliées pour déterminer les mouvements valides du roi.
	void King::defineValidMoves()
	{
		std::set<std::pair<int, int >> posEnnemy{};

		Piece* tempRoi = chessBoard_->getPieceAt(x_, y_);
		Piece* tempEmpty = new Piece(x_, y_, Color::BLACK, chessBoard_);
		chessBoard_->setChessboard(tempEmpty);

		if (color_ == Color::WHITE) {
			for (auto piece : chessBoard_->getPosBlack()) {
				if (piece->getPieceType() != PieceType::EMPTY)
				{
					if (piece->getPieceType() != PieceType::KING) {
						piece->defineValidMoves();
						for (auto& pos : piece->getPossibleMoves()) {
							posEnnemy.insert(pos);
						}
					}
					else {
						for (auto& move : piece->getMoves())
						{
							posEnnemy.insert(std::pair<int, int>{piece->getCoordinates().first + move.first, piece->getCoordinates().second + move.second});
						}
					}
					for (auto& pos : piece->getBlockingAlly()) {
						posEnnemy.insert(pos);
					}
				}
			}
		}
		else {
			for (auto piece : chessBoard_->getPosWhite()) 
			{
				if (piece->getPieceType() != PieceType::EMPTY)
				{
					if (piece->getPieceType() != PieceType::KING) 
					{
						piece->defineValidMoves();
						for (auto& pos : piece->getPossibleMoves()) 
						{
							posEnnemy.insert(pos);
						}
					}
					else {
						for (auto& move : piece->getMoves())
						{
							posEnnemy.insert(std::pair<int, int>{piece->getCoordinates().first + move.first, piece->getCoordinates().second + move.second});
						}
					}
					for (auto& pos : piece->getBlockingAlly()) {
						posEnnemy.insert(pos);
					}
				}
			}
		}
		chessBoard_->setChessboard(tempRoi);
		delete tempEmpty;

		resetPossibleMoves_();

		for (auto& move : Moves_) 
		{
			int newX = x_ + move.first;
			int newY = y_ + move.second;
			std::pair<int, int> position{ newX, newY };
			
			if (chessBoard_->inChessBoard(newX, newY))
			{
				if (posEnnemy.find(position) == posEnnemy.end())
				{
					auto it = chessBoard_->getPieceAt(newX, newY);

					if (chessBoard_->getPieceAt(newX, newY)->getColor() != color_ || chessBoard_->getPieceAt(newX, newY)->getPieceType() == PieceType::EMPTY)
					{
						possibleMoves_.push_back(position);
					}
				}
			}
		}
	}
	
	// Définit les mouvements valides pour la reine.
	// Utilise la méthode des rayons pour calculer les mouvements valides dans les directions diagonales, horizontales et verticales.
	void Queen::defineValidMoves()
	{
		resetPossibleMoves_();
		int valeurs[4] = { x_, y_, 8 - x_, 8 - y_ };
		int maxMult = *std::max_element(valeurs, valeurs + 4);
		
		for (std::pair<int, int > move : Moves_) 
		{

			for (int i = 1; i <= maxMult; i++) 
			{

				int nouveauX = x_ + i * move.first;
				int nouveauY = y_ + i * move.second;

				if (chessBoard_->inChessBoard(nouveauX, nouveauY))  // coordonnée dans le plateau
				{
					if (chessBoard_->isEmpty(nouveauX, nouveauY)) // verifier si la coordonnee voulue est vide
					{ 
						possibleMoves_.push_back({nouveauX, nouveauY});
					}
					else // la coordonnée demandée n'est pas vide
					{ 
						if (chessBoard_->getPieceAt(nouveauX, nouveauY)->getColor() == color_) // piece est allié
						{ 
							blockingAlly.push_back({ nouveauX, nouveauY });
							break;
						}
						else {
							possibleMoves_.push_back({nouveauX, nouveauY});
							break;
						}
					}
				}
				else 
				{
					break;
				}
			}
		}
	}

	// Définit les mouvements valides pour le fou.
	// Utilise la méthode des rayons pour calculer les mouvements valides dans les diagonales.
	void Bishop::defineValidMoves()
	{
		resetPossibleMoves_();
		int valeurs[4] = { x_, y_, 8 - x_, 8 - y_ };
		int maxMult = *std::max_element(valeurs, valeurs + 4);

		for (std::pair<int, int > move : Moves_) {

			for (int i = 1; i <= maxMult; i++) {

				int nouveauX = x_ + i * move.first;
				int nouveauY = y_ + i * move.second;

				if (chessBoard_->inChessBoard(nouveauX, nouveauY)) // coordonnée dans le plateau
				{ 
					if (chessBoard_->isEmpty(nouveauX, nouveauY)) // verifier si la coordonnee voulue est vide
					{ 
						possibleMoves_.push_back({nouveauX, nouveauY});
					}
					else // Coordonnée demandée n'est pas vide
					{ 
						if (chessBoard_->getPieceAt(nouveauX, nouveauY)->getColor() == color_) // piece est allié
						{ 
							blockingAlly.push_back({ nouveauX, nouveauY });
							break;
						}
						else {
							possibleMoves_.push_back({nouveauX, nouveauY});
							break;
						}
					}
				}
				else {
					break;
				}
			}
		}
	}

	// Définit les mouvements valides pour le cavalier.
	// Parcourt les mouvements possibles du cavalier et les ajoute s'ils sont valides.
	void Knight::defineValidMoves()
	{
		resetPossibleMoves_();

		for (std::pair<int, int > move : Moves_) 
		{

			int nouveauX = x_ + move.first;
			int nouveauY = y_ + move.second;

			if (chessBoard_->inChessBoard(nouveauX, nouveauY)) // coordonnée dans le plateau
			{ 
				if (chessBoard_->isEmpty(nouveauX, nouveauY)) // verifier si la coordonnee voulue est vide
				{
					possibleMoves_.push_back({nouveauX, nouveauY});
				}
				else // la coordonnée demandée n'est pas vide
				{ 
					if (chessBoard_->getPieceAt(nouveauX, nouveauY)->getColor() != color_) // piece est allié
					{ 
						possibleMoves_.push_back({nouveauX, nouveauY});
					}
					else {
						blockingAlly.push_back({ nouveauX, nouveauY });
					}
				}
			}
		}
	}

	// Définit les mouvements valides pour la tour.
	// Utilise la méthode des rayons pour calculer les mouvements valides dans les directions horizontales et verticales.
	void Rook::defineValidMoves()
	{
		resetPossibleMoves_();
		int valeurs[4] = { x_, y_, 8 - x_, 8 - y_ };
		int maxMult = *std::max_element(valeurs, valeurs + 4);

		for (std::pair<int, int > move : Moves_) {

			for (int i = 1; i <= maxMult; i++) {

				int nouveauX = x_ + i * move.first;
				int nouveauY = y_ + i * move.second;

				if (chessBoard_->inChessBoard(nouveauX, nouveauY)) // coordonnée dans le plateau
				{ 
					if (chessBoard_->isEmpty(nouveauX, nouveauY)) // verifier si la coordonnee voulue est vide
					{ 
						possibleMoves_.push_back({nouveauX, nouveauY});
					}
					else // la coordonnée demandée n'est pas vide
					{ 
						if (chessBoard_->getPieceAt(nouveauX, nouveauY)->getColor() == color_) // piece est allié
						{ 
							blockingAlly.push_back({ nouveauX, nouveauY });
							break;
						}
						else {
							possibleMoves_.push_back({nouveauX, nouveauY});
							break;
						}
					}
				}
				else {
					break;
				}
			}
		}
	}
	
	// Définit les mouvements valides pour le pion.
	// Gère le mouvement du pion en fonction de sa couleur, de sa position et de son état de première avancée.
	void Pawn::defineValidMoves()
	{
		resetPossibleMoves_();
		int valeurs[4] = { x_, y_, 8 - x_, 8 - y_ };
		int maxMult = *std::max_element(valeurs, valeurs + 4);

		int direction = (color_ == Color::WHITE) ? -1 : 1; // Direction du pion en fonction de sa couleur
		
		int nouveauX = x_;
		int nouveauY = y_ + direction;

		if ((color_ == Color::WHITE && y_ == 6) || (color_ == Color::BLACK && y_ == 1)) {
			isFirstMove = true;
		}

		if (chessBoard_->inChessBoard(nouveauX, nouveauY) && chessBoard_->isEmpty(nouveauX, nouveauY)) {
			possibleMoves_.push_back({	nouveauX, nouveauY });

		}
		if (isFirstMove)
		{
			nouveauX = x_;
			nouveauY = y_ + (2 * direction);
			if (chessBoard_->inChessBoard(nouveauX, nouveauY) && chessBoard_->isEmpty(nouveauX, nouveauY) && chessBoard_->isEmpty(nouveauX, nouveauY - direction))
			{
				possibleMoves_.push_back({ nouveauX, nouveauY });
			}
		}
		for (int i = -1; i <= 1; i += 2) {
			nouveauX = x_ + i;
			nouveauY = y_ + direction;
			if (chessBoard_->inChessBoard(nouveauX, nouveauY) && !chessBoard_->isEmpty(nouveauX, nouveauY)) {
				if (chessBoard_->getPieceAt(nouveauX, nouveauY)->getColor() != color_) {
					possibleMoves_.push_back({ nouveauX, nouveauY });
				}
				else {
					blockingAlly.push_back({ nouveauX, nouveauY });
				}
			}
		}
	}

}