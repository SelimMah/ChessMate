/**
* Programme La definnition des methodes de Display permettant de definir l'interface ui.
* \file		Display.cpp
* \author	Selim Mahjoub, Brice Tangmouo Manfo, Bryan Alexandre Tavares
* \date		03 mars 2024
* Créé le	25 mars 2024
*/

#include "Display.h"

namespace display
{
    Display::Display(model::ChessBoard* chessBoard, QWidget* parent)
        : QMainWindow(parent), chessBoard_(chessBoard)
    {
        ui.setupUi(this);

        QComboBox* listGamesWidget;
        listGamesWidget = findChild<QComboBox*>("listGamesWidget");

        // Ajout des choix à la liste déroulante
        ui.listGamesWidget->addItem("Default_Board");
        ui.listGamesWidget->addItem("La_Bourdonnais_vs_McDonnell");
        ui.listGamesWidget->addItem("J_Polgar_vs_Kasparov");
        ui.listGamesWidget->addItem("Random_1");
        ui.listGamesWidget->addItem("Random_2");
        ui.listGamesWidget->addItem("Random_3");
        ui.listGamesWidget->addItem("Random_with_3_kings");
        
        // Connexion du clic sur le bouton au slot startGameButtonClicked()
        connect(ui.StartGameButton, &QPushButton::clicked, this, &Display::startGameButtonClicked);
        connect(ui.listGamesWidget, &QListWidget::itemClicked, this, &Display::changeGameSelection);

        // Initialisation de la sélection et du texte du label
        selectedGame_ = GameSelection::La_Bourdonnais_vs_McDonnell;
        ui.selectionLabel->setText("La_Bourdonnais_vs_McDonnell");

        connectButtons();
        setColorLabel();

        setPieceLabel();
        ui.label_3->setText("----");

        chessBoard_ = new model::ChessBoard();
    }

    Display::~Display()
    {
        delete chessBoard_;
    }

    //Met à jour l'affichage de la couleur du joueur actuel sur l'interface graphique.
    //Si le joueur actuel est les blancs, le texte affiché sera "Player : White ".
    //Sinon, le texte affiché sera "Player : Black ".
    void Display::setColorLabel()
    {
        if (chessBoard_->getCurrentPlayer())
        {
            ui.label_1->setText("Player : White ");
        }
        else
        {
            ui.label_1->setText("Player : Black ");
        }
    }

    // Met à jour l'affichage de la situation d'échec sur l'interface graphique.
    // Si l'un des joueurs est en échec, le texte affiché sera "Situation d'échec".
    // Sinon, le texte affiché sera "Pas d'échec".
    void Display::setCheckLabel()
    {
        if (chessBoard_->isWhiteCheck() || chessBoard_->isBlackCheck())
        {
            ui.label_3->setText("Situation d'echec");
        }
        else
        {
            ui.label_3->setText("Pas d'echec");
        }
    }

    // Met à jour le texte affiché sur l'interface graphique avec une exception donnée.
    void Display::setExceptionLabel(const QString& what)
    {
        int fontSize = 8;
        QFont font = ui.label_2->font();
        font.setPointSize(fontSize);
        ui.label_2->setFont(font);

        ui.label_2->setText(what);
    }

    // Définit le texte du label de la pièce.
    // Si le texte du bouton n'est pas vide, met à jour le texte du label avec ce texte.
    // Sinon, affiche "----" dans le label.
    void Display::setPieceLabel(QString buttonText)
    {
        int fontSize = 12;
        QFont font = ui.label_2->font();
        font.setPointSize(fontSize);
        ui.label_2->setFont(font);

        if (buttonText != QChar(0x0))
        {
            ui.label_2->setText(buttonText);
        }
        else
        {
            ui.label_2->setText("----");
        }
    }

    // Gère l'événement du clic sur le bouton de démarrage de la partie.
    // Met à jour l'affichage de la couleur du joueur actuel, des boutons du plateau,
    // réinitialise les couleurs du plateau d'échecs et réinitialise le compteur de clics.
    void Display::startGameButtonClicked()
    {
        setColorLabel();
        setButtonsBoard();
        resetColorChessboard();
        nClick = 0;

    }

    // Renvoie le pointeur vers le bouton à la position (x, y) sur l'interface graphique.
    // Le nom du bouton est généré à partir des coordonnées (x, y) selon un format spécifique.
    QPushButton* Display::getButtonAt(int x, int y)
    {
        QString buttonName = QString("pushButton_%1%2").arg(QChar('a' + y)).arg(1 + x);
        return findChild<QPushButton*>(buttonName);
    }

    // Récupère les coordonnées (x, y) du bouton donné sur l'interface graphique.
    void Display::getPositionOfButton(QPushButton* button, int& x, int& y)
    {
        QString buttonName = button->objectName();

        x = buttonName.at(12).toLatin1() - '1';
        y = buttonName.at(11).toLatin1() - 'a';
    }

    // Modifie le texte du bouton à la position (x, y) sur l'interface graphique avec la chaîne spécifiée.
    void Display::changeButtonTextAt(QString change, int x, int y)
    {
        QPushButton* button = getButtonAt(x, y);
        if (button) {
            QString newText = QString(change);
            button->setText(newText);
        }
    }
    
    // Met à jour les boutons du plateau d'échecs sur l'interface graphique en fonction des pièces présentes sur le plateau.
    // Utilise des symboles Unicode pour représenter les différentes pièces et leurs couleurs.
    void display::Display::setButtonsBoard()
    {
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {   
                bool color = chessBoard_->getPieceAt(j, i)->getColor();
                QChar car;

                switch (chessBoard_->getPieceAt(j, i)->getPieceType())
                {
                case model::PieceType::BISHOP:
                    car = (color != model::Color::BLACK) ? QChar(0x2657) : QChar(0x265D);
                    changeButtonTextAt(car, j, i);
                    break;
                case model::PieceType::KING:
                    car = (color != model::Color::BLACK) ? QChar(0x2654) : QChar(0x265A);
                    changeButtonTextAt(car, j, i);
                    break;
                case model::PieceType::QUEEN:
                    car = (color != model::Color::BLACK) ? QChar(0x2655) : QChar(0x265B);
                    changeButtonTextAt(car, j, i);
                    break;
                case model::PieceType::ROOK:
                    car = (color != model::Color::BLACK) ? QChar(0x2656) : QChar(0x265C);
                    changeButtonTextAt(car, j, i);
                    break;
                case model::PieceType::KNIGHT:
                    car = (color != model::Color::BLACK) ? QChar(0x2658) : QChar(0x265E);
                    changeButtonTextAt(car, j, i);
                    break;
                case model::PieceType::PAWN:
                    car = (color != model::Color::BLACK) ? QChar(0x2659) : QChar(0x265F);
                    changeButtonTextAt(car, j, i);
                    break;
                case model::PieceType::EMPTY:
                    car = QChar(0x0);
                    changeButtonTextAt(car, j, i);
                    break;
                default:
                    break;
                }
            }
        }

    }
    
    // Gère l'événement de clic sur un bouton du plateau d'échecs sur l'interface graphique.
    // Affiche le texte du bouton cliqué dans un label spécifique.
    // Récupère les coordonnées du bouton cliqué et les affiche dans la console.
    // Réinitialise le plateau d'échecs à la disposition de départ si celui-ci n'est pas valide.
    // Met à jour l'affichage de la situation d'échec.
    // Gère le mouvement des pièces sur le plateau en fonction du nombre de clics et de la validité des mouvements.
    void Display::handleButtonClick()
    {
        QPushButton* clickedButton = qobject_cast<QPushButton*>(sender());
        if (clickedButton)
        {
            QString buttonText = clickedButton->text();
            setPieceLabel(buttonText);

            checkBoardValidity();

            int xClicked;
            int yClicked;
            getPositionOfButton(clickedButton, xClicked, yClicked);
            qDebug() << "Clicked button at position: (" << xClicked << ", " << yClicked << ")";
            
            model::Piece* clickedPiece = chessBoard_->getPieceAt(xClicked, yClicked);

            setCheckLabel();

            if (nClick == 0
                && (clickedPiece->getColor() == chessBoard_->getCurrentPlayer())
                && (clickedPiece->getPieceType() != model::PieceType::EMPTY))
            {
                toMovePiece_ = chessBoard_->getPieceAt(xClicked, yClicked);
                highlightBoxes(clickedButton);
                nClick = 1;
            }

            else if (nClick == 1)
            {
                if (toMovePiece_->getCoordinates() == std::pair<int, int>{xClicked, yClicked}) {
                    nClick = 0;
                    resetColorChessboard();
                }
                else if (chessBoard_->movePiece(toMovePiece_, xClicked, yClicked, true))
                {
                    nClick = 0;
                    resetColorChessboard();
                    chessBoard_->toggleCurrentPlayer();
                    setColorLabel();
                    setButtonsBoard();

                    if (auto it = dynamic_cast<model::Pawn*>(toMovePiece_))
                    {
                        it->disableFirstMove();
                    }

                    setPieceLabel();
                }
                else
                {
                    ui.label_2->setText("Mouvement invalide");
                    resetColorChessboard();
                    nClick = 0;
                }

                setCheckLabel();
            }
            else
            {
                resetColorChessboard();
                setCheckLabel();
                nClick = 0;
            }
        }
    }

    // Change la sélection de jeu en fonction de l'élément de la liste sélectionné.
    // Supprime l'ancien plateau d'échecs et en crée un nouveau.
    // Réinitialise le nombre de rois sur le plateau.
    // Met à jour le texte affiché pour indiquer la sélection actuelle.
    // Configure le plateau d'échecs en fonction du jeu sélectionné.
    void Display::changeGameSelection(QListWidgetItem* item)
    {
        if (item)
        {
            delete chessBoard_;
            chessBoard_ = new model::ChessBoard();
            chessBoard_->resetNKing();

            QString itemName = item->text();
            ui.selectionLabel->setText(itemName);

            if (itemName == "Default_Board")
            {
                setDefaultBoards();
            }

            else if (itemName == "La_Bourdonnais_vs_McDonnell")
            {
                setBourdonnais();
            }
            
            else if (itemName == "J_Polgar_vs_Kasparov")
            {
                setKasparov();
            }
            
            else if (itemName == "Random_1")
            {
                setRandom_1();
            }
            
            else if (itemName == "Random_2")
            {
                setRandom_2();
            }
            
            else if (itemName == "Random_3")
            {
                setRandom_3();
            }
            
            else if (itemName == "Random_with_3_kings")
            {
                setRandom3Kings();
            }
        }
       
    }

    // Définit le plateau de jeu par défaut en ajoutant les pièces appropriées pour chaque couleur.
    // Met également à jour la sélection de jeu.
    void Display::setDefaultBoards()
    {
        selectedGame_ = GameSelection::Default_Board;
        model::Pawn* blackPawn1 = new model::Pawn(0, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn2 = new model::Pawn(1, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn3 = new model::Pawn(2, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn4 = new model::Pawn(3, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn5 = new model::Pawn(4, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn6 = new model::Pawn(5, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn7 = new model::Pawn(6, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn8 = new model::Pawn(7, 1, model::Color::BLACK, chessBoard_);

        model::Rook* blackRook1 = new model::Rook(0, 0, model::Color::BLACK, chessBoard_);
        model::Rook* blackRook2 = new model::Rook(7, 0, model::Color::BLACK, chessBoard_);

        model::Knight* blackKnight1 = new model::Knight(1, 0, model::Color::BLACK, chessBoard_);
        model::Knight* blackKnight2 = new model::Knight(6, 0, model::Color::BLACK, chessBoard_);

        model::Bishop* blackBishop1 = new model::Bishop(2, 0, model::Color::BLACK, chessBoard_);
        model::Bishop* blackBishop2 = new model::Bishop(5, 0, model::Color::BLACK, chessBoard_);

        model::Queen* blackQueen = new model::Queen(3, 0, model::Color::BLACK, chessBoard_);
        model::King* blackKing = new model::King(4, 0, model::Color::BLACK, chessBoard_);


        model::Pawn* whitePawn1 = new model::Pawn(0, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn2 = new model::Pawn(1, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn3 = new model::Pawn(2, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn4 = new model::Pawn(3, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn5 = new model::Pawn(4, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn6 = new model::Pawn(5, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn7 = new model::Pawn(6, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn8 = new model::Pawn(7, 6, model::Color::WHITE, chessBoard_);

        model::Rook* whiteRook1 = new model::Rook(0, 7, model::Color::WHITE, chessBoard_);
        model::Rook* whiteRook2 = new model::Rook(7, 7, model::Color::WHITE, chessBoard_);

        model::Knight* whiteKnight1 = new model::Knight(1, 7, model::Color::WHITE, chessBoard_);
        model::Knight* whiteKnight2 = new model::Knight(6, 7, model::Color::WHITE, chessBoard_);

        model::Bishop* whiteBishop1 = new model::Bishop(2, 7, model::Color::WHITE, chessBoard_);
        model::Bishop* whiteBishop2 = new model::Bishop(5, 7, model::Color::WHITE, chessBoard_);

        model::Queen* whiteQueen = new model::Queen(3, 7, model::Color::WHITE, chessBoard_);
        model::King* whiteKing = new model::King(4, 7, model::Color::WHITE, chessBoard_);


        chessBoard_->addPiece(blackPawn1);
        chessBoard_->addPiece(blackPawn2);
        chessBoard_->addPiece(blackPawn3);
        chessBoard_->addPiece(blackPawn4);
        chessBoard_->addPiece(blackPawn5);
        chessBoard_->addPiece(blackPawn6);
        chessBoard_->addPiece(blackPawn7);
        chessBoard_->addPiece(blackPawn8);

        chessBoard_->addPiece(blackRook1);
        chessBoard_->addPiece(blackRook2);

        chessBoard_->addPiece(blackKnight1);
        chessBoard_->addPiece(blackKnight2);

        chessBoard_->addPiece(blackBishop1);
        chessBoard_->addPiece(blackBishop2);

        chessBoard_->addPiece(blackQueen);
        chessBoard_->addPiece(blackKing);


        chessBoard_->addPiece(whitePawn1);
        chessBoard_->addPiece(whitePawn2);
        chessBoard_->addPiece(whitePawn3);
        chessBoard_->addPiece(whitePawn4);
        chessBoard_->addPiece(whitePawn5);
        chessBoard_->addPiece(whitePawn6);
        chessBoard_->addPiece(whitePawn7);
        chessBoard_->addPiece(whitePawn8);

        chessBoard_->addPiece(whiteRook1);
        chessBoard_->addPiece(whiteRook2);

        chessBoard_->addPiece(whiteKnight1);
        chessBoard_->addPiece(whiteKnight2);

        chessBoard_->addPiece(whiteBishop1);
        chessBoard_->addPiece(whiteBishop2);

        chessBoard_->addPiece(whiteQueen);
        chessBoard_->addPiece(whiteKing);

        chessBoard_->toggleCurrentPlayer();
    }

    // Définit le plateau de jeu pour la partie "La Bourdonnais vs McDonnell"
    // Ajoute les pièces appropriées pour chaque couleur et met à jour la sélection de jeu.
    void Display::setBourdonnais()
    {
        selectedGame_ = GameSelection::La_Bourdonnais_vs_McDonnell;
        model::Pawn* blackPawn1 = new model::Pawn(0, 3, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn2 = new model::Pawn(3, 4, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn3 = new model::Pawn(4, 3, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn4 = new model::Pawn(5, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn5 = new model::Pawn(6, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn6 = new model::Pawn(7, 1, model::Color::BLACK, chessBoard_);


        model::Rook* blackRook1 = new model::Rook(0, 0, model::Color::BLACK, chessBoard_);
        model::Rook* blackRook2 = new model::Rook(5, 0, model::Color::BLACK, chessBoard_);

        model::Bishop* blackBishop1 = new model::Bishop(2, 0, model::Color::BLACK, chessBoard_);
        model::Bishop* blackBishop2 = new model::Bishop(5, 2, model::Color::BLACK, chessBoard_);

        model::Queen* blackQueen = new model::Queen(3, 0, model::Color::BLACK, chessBoard_);
        model::King* blackKing = new model::King(6, 0, model::Color::BLACK, chessBoard_);


        model::Pawn* whitePawn1 = new model::Pawn(0, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn2 = new model::Pawn(1, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn3 = new model::Pawn(2, 4, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn4 = new model::Pawn(5, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn5 = new model::Pawn(6, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn6 = new model::Pawn(7, 6, model::Color::WHITE, chessBoard_);

        model::Rook* whiteRook1 = new model::Rook(0, 7, model::Color::WHITE, chessBoard_);
        model::Rook* whiteRook2 = new model::Rook(3, 7, model::Color::WHITE, chessBoard_);

        model::Knight* whiteKnight1 = new model::Knight(1, 7, model::Color::WHITE, chessBoard_);

        model::Bishop* whiteBishop1 = new model::Bishop(1, 5, model::Color::WHITE, chessBoard_);

        model::Queen* whiteQueen = new model::Queen(4, 6, model::Color::WHITE, chessBoard_);
        model::King* whiteKing = new model::King(2, 7, model::Color::WHITE, chessBoard_);


        chessBoard_->addPiece(blackPawn1);
        chessBoard_->addPiece(blackPawn2);
        chessBoard_->addPiece(blackPawn3);
        chessBoard_->addPiece(blackPawn4);
        chessBoard_->addPiece(blackPawn5);
        chessBoard_->addPiece(blackPawn6);

        chessBoard_->addPiece(blackRook1);
        chessBoard_->addPiece(blackRook2);


        chessBoard_->addPiece(blackBishop1);
        chessBoard_->addPiece(blackBishop2);

        chessBoard_->addPiece(blackQueen);
        chessBoard_->addPiece(blackKing);


        chessBoard_->addPiece(whitePawn1);
        chessBoard_->addPiece(whitePawn2);
        chessBoard_->addPiece(whitePawn3);
        chessBoard_->addPiece(whitePawn4);
        chessBoard_->addPiece(whitePawn5);
        chessBoard_->addPiece(whitePawn6);


        chessBoard_->addPiece(whiteRook1);
        chessBoard_->addPiece(whiteRook2);

        chessBoard_->addPiece(whiteKnight1);

        chessBoard_->addPiece(whiteBishop1);

        chessBoard_->addPiece(whiteQueen);
        chessBoard_->addPiece(whiteKing);
    }

    // Définit le plateau de jeu pour la partie "J Polgar vs Kasparov"
    // Ajoute les pièces appropriées pour chaque couleur et met à jour la sélection de jeu.
    void Display::setKasparov()
    {
        selectedGame_ = GameSelection::J_Polgar_vs_Kasparov;
        model::Pawn* blackPawn1 = new model::Pawn(1, 2, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn2 = new model::Pawn(2, 3, model::Color::BLACK, chessBoard_);

        model::Rook* blackRook1 = new model::Rook(5, 3, model::Color::BLACK, chessBoard_);
        model::Rook* blackRook2 = new model::Rook(7, 6, model::Color::BLACK, chessBoard_);

        model::King* blackKing = new model::King(4, 0, model::Color::BLACK, chessBoard_);

        model::Pawn* whitePawn1 = new model::Pawn(0, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn2 = new model::Pawn(1, 6, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn3 = new model::Pawn(5, 6, model::Color::WHITE, chessBoard_);

        model::Rook* whiteRook1 = new model::Rook(0, 1, model::Color::WHITE, chessBoard_);
        model::Rook* whiteRook2 = new model::Rook(6, 1, model::Color::WHITE, chessBoard_);

        model::King* whiteKing = new model::King(4, 5, model::Color::WHITE, chessBoard_);

        chessBoard_->addPiece(blackPawn1);
        chessBoard_->addPiece(blackPawn2);

        chessBoard_->addPiece(blackRook1);
        chessBoard_->addPiece(blackRook2);

        chessBoard_->addPiece(blackKing);

        chessBoard_->addPiece(whitePawn1);
        chessBoard_->addPiece(whitePawn2);
        chessBoard_->addPiece(whitePawn3);

        chessBoard_->addPiece(whiteRook1);
        chessBoard_->addPiece(whiteRook2);

        chessBoard_->addPiece(whiteKing);
    }

    // Définit le plateau de jeu pour la partie "Random_1"
    // Ajoute les pièces appropriées pour chaque couleur et met à jour la sélection de jeu.
    void Display::setRandom_1()
    {
        selectedGame_ = GameSelection::Random_1;
        model::Pawn* blackPawn1 = new model::Pawn(2, 1, model::Color::BLACK, chessBoard_);
        model::King* blackKing = new model::King(5, 1, model::Color::BLACK, chessBoard_);
        model::Rook* blackRook = new model::Rook(1, 2, model::Color::BLACK, chessBoard_);

        model::Pawn* whitePawn = new model::Pawn(4, 2, model::Color::WHITE, chessBoard_);
        model::King* whiteKing = new model::King(5, 6, model::Color::WHITE, chessBoard_);
        model::Queen* whiteQueen = new model::Queen(7, 4, model::Color::WHITE, chessBoard_);

        chessBoard_->addPiece(blackPawn1);
        chessBoard_->addPiece(blackKing);
        chessBoard_->addPiece(blackRook);
        chessBoard_->addPiece(whitePawn);
        chessBoard_->addPiece(whiteKing);
        chessBoard_->addPiece(whiteQueen);

    }

    // Définit le plateau de jeu pour la partie "Random_2"
    // Ajoute les pièces appropriées pour chaque couleur et met à jour la sélection de jeu.
    void Display::setRandom_2()
    {
        selectedGame_ = GameSelection::Random_2;
        model::Pawn* whitePawn1 = new model::Pawn(3, 4, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn2 = new model::Pawn(4, 3, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn3 = new model::Pawn(7, 7, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn4 = new model::Pawn(6, 2, model::Color::WHITE, chessBoard_);
        model::Pawn* whitePawn5 = new model::Pawn(0, 5, model::Color::WHITE, chessBoard_);

        model::Rook* whiteRook = new model::Rook(2, 0, model::Color::WHITE, chessBoard_);

        model::Knight* whiteKnight1 = new model::Knight(5, 1, model::Color::WHITE, chessBoard_);

        model::Bishop* whiteBishop = new model::Bishop(1, 6, model::Color::WHITE, chessBoard_);

        model::King* whiteKing = new model::King(6, 7, model::Color::WHITE, chessBoard_);

        model::Pawn* blackPawn1 = new model::Pawn(3, 3, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn2 = new model::Pawn(4, 1, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn3 = new model::Pawn(7, 6, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn4 = new model::Pawn(0, 2, model::Color::BLACK, chessBoard_);
        model::Pawn* blackPawn5 = new model::Pawn(6, 0, model::Color::BLACK, chessBoard_);

        model::Knight* blackKnight1 = new model::Knight(2, 3, model::Color::BLACK, chessBoard_);

        model::Bishop* blackBishop = new model::Bishop(1, 0, model::Color::BLACK, chessBoard_);

        model::Queen* blackQueen = new model::Queen(5, 4, model::Color::BLACK, chessBoard_);
        model::King* blackKing = new model::King(6, 4, model::Color::BLACK, chessBoard_);

        chessBoard_->addPiece(whitePawn1);
        chessBoard_->addPiece(whitePawn2);
        chessBoard_->addPiece(whitePawn3);
        chessBoard_->addPiece(whitePawn4);
        chessBoard_->addPiece(whitePawn5);

        chessBoard_->addPiece(whiteKnight1);

        chessBoard_->addPiece(whiteBishop);

        chessBoard_->addPiece(whiteRook);

        chessBoard_->addPiece(whiteKing);

        chessBoard_->addPiece(blackPawn1);
        chessBoard_->addPiece(blackPawn2);
        chessBoard_->addPiece(blackPawn3);
        chessBoard_->addPiece(blackPawn4);
        chessBoard_->addPiece(blackPawn5);

        chessBoard_->addPiece(blackKnight1);

        chessBoard_->addPiece(blackBishop);

        chessBoard_->addPiece(blackQueen);
        chessBoard_->addPiece(blackKing);

        chessBoard_->toggleCurrentPlayer();
    }

    // Définit le plateau de jeu pour la partie "Random_3"
    // Ajoute les pièces appropriées pour chaque couleur et met à jour la sélection de jeu.
    void Display::setRandom_3()
    {
        selectedGame_ = GameSelection::Random_3;

        model::Pawn* blackPawn1 = new model::Pawn(2, 1, model::Color::BLACK, chessBoard_);
        model::King* blackKing = new model::King(5, 6, model::Color::BLACK, chessBoard_);
        model::Rook* blackRook = new model::Rook(1, 3, model::Color::BLACK, chessBoard_);

        model::Pawn* whitePawn = new model::Pawn(3, 3, model::Color::WHITE, chessBoard_);
        model::King* whiteKing = new model::King(5, 3, model::Color::WHITE, chessBoard_);
        model::Queen* whiteQueen = new model::Queen(6, 4, model::Color::WHITE, chessBoard_);

        chessBoard_->addPiece(blackPawn1);
        chessBoard_->addPiece(blackKing);
        chessBoard_->addPiece(blackRook);
        chessBoard_->addPiece(whitePawn);
        chessBoard_->addPiece(whiteKing);
        chessBoard_->addPiece(whiteQueen);
    }

    // Définit le plateau de jeu pour la partie "Random_with_3_kings"
    // Ajoute les pièces appropriées pour chaque couleur et met à jour la sélection de jeu.
    void Display::setRandom3Kings()
    {
        selectedGame_ = GameSelection::Random_with_3_kings;
        model::Pawn* blackPawn1 = new model::Pawn(2, 1, model::Color::BLACK, chessBoard_);
        model::King* blackKing = new model::King(5, 6, model::Color::BLACK, chessBoard_);
        model::Rook* blackRook = new model::Rook(1, 3, model::Color::BLACK, chessBoard_);

        model::Pawn* whitePawn = new model::Pawn(3, 3, model::Color::WHITE, chessBoard_);
        model::King* whiteKing1 = new model::King(5, 3, model::Color::WHITE, chessBoard_);
        model::King* whiteKing2 = new model::King(7, 7, model::Color::WHITE, chessBoard_);
        model::Queen* whiteQueen = new model::Queen(6, 4, model::Color::WHITE, chessBoard_);

        chessBoard_->addPiece(blackPawn1);
        chessBoard_->addPiece(blackKing);
        chessBoard_->addPiece(blackRook);
        chessBoard_->addPiece(whitePawn);
        chessBoard_->addPiece(whiteKing1);
        chessBoard_->addPiece(whiteQueen);
        chessBoard_->addPiece(whiteKing2);
    }
   
    // Met en surbrillance les cases adjacentes à une piece cliqué.
    // Utilise les offsets pour déterminer les cases adjacentes et met à jour leur style.
    void Display::highlightBoxes(QPushButton* clickedButton, const std::vector<std::pair<int, int>>& offsets)
    {
        QString buttonText = clickedButton->text();
        int x, y;
        getPositionOfButton(clickedButton, x, y);

        for (const auto& offset : offsets) {
            int newX = x + offset.first;
            int newY = y + offset.second;
            QPushButton* adjacentButton = getButtonAt(newX, newY);
            if (adjacentButton) {
                QString styleSheet = QString("background-color: yellow");
                adjacentButton->setStyleSheet(styleSheet);
            }
        }
    }

    // Met en surbrillance les cases où une piece peut se déplacer après avoir cliqué sur un bouton.
    void Display::highlightBoxes(QPushButton* clickedButton)
    {
        // Obtenir les coordonnées du bouton cliqué
        QString buttonText = clickedButton->text();
        int x, y;
        getPositionOfButton(clickedButton, x, y);

        chessBoard_->getPieceAt(x, y)->defineValidMoves();

        for (auto& offset : chessBoard_->getPieceAt(x,y)->getPossibleMoves() ) {
            int newX = offset.first;
            int newY= offset.second;

            //qDebug() << newX << " " << newY;

            QPushButton* adjacentButton = getButtonAt(newX, newY);
            if (adjacentButton) {
                QString styleSheet = QString("background-color: yellow");
                adjacentButton->setStyleSheet(styleSheet);
            }
        }
    }

    // Réinitialise les couleurs de l'échiquier en alternant entre deux couleurs spécifiques.
    void Display::resetColorChessboard()
    {
        const QColor color2(210, 140, 69);  // Couleur pour les autres cases
        const QColor color1(255, 207, 159); // Couleur pour les cases A1, A3, A5...

        for (int x = 0; x < 8; ++x) {
            for (int y = 0; y < 8; ++y) {
                QPushButton* button = getButtonAt(x, y);
                if ((x + y) % 2 == 0) { // Si la somme des coordonnées est paire (A1, A3, A5...)
                    QString styleSheet = QString("background-color: rgb(%1, %2, %3);")
                        .arg(color1.red()).arg(color1.green()).arg(color1.blue());
                    button->setStyleSheet(styleSheet);
                }
                else {
                    QString styleSheet = QString("background-color: rgb(%1, %2, %3);")
                        .arg(color2.red()).arg(color2.green()).arg(color2.blue());
                    button->setStyleSheet(styleSheet);
                }

            }
        }
    }

    // Vérifie la validité du plateau.
    // Si le plateau n'est pas valide, réinitialise-le au format Bourdonnais et marque le plateau comme valide.
    void Display::checkBoardValidity()
    {
        if (not isBoardValid_)
        {
            resetToBourdonnais();
            isBoardValid_ = true;
        }
    }

    // Réinitialise l'échiquier pour le jeu La Bourdonnais vs McDonnell.
    void Display::resetToBourdonnais()
    {
        delete chessBoard_;
        chessBoard_ = new model::ChessBoard();
        chessBoard_->resetNKing();

        setBourdonnais();

        setButtonsBoard();
        resetColorChessboard();
    }

    // Connecte les boutons de l'échiquier aux actions correspondantes
    void Display::connectButtons()
    {
        const QStringList buttonNames = {
            "pushButton_a1", "pushButton_a2", "pushButton_a3", "pushButton_a4", "pushButton_a5", "pushButton_a6", "pushButton_a7", "pushButton_a8",
            "pushButton_b1", "pushButton_b2", "pushButton_b3", "pushButton_b4", "pushButton_b5", "pushButton_b6", "pushButton_b7", "pushButton_b8",
            "pushButton_c1", "pushButton_c2", "pushButton_c3", "pushButton_c4", "pushButton_c5", "pushButton_c6", "pushButton_c7", "pushButton_c8",
            "pushButton_d1", "pushButton_d2", "pushButton_d3", "pushButton_d4", "pushButton_d5", "pushButton_d6", "pushButton_d7", "pushButton_d8",
            "pushButton_e1", "pushButton_e2", "pushButton_e3", "pushButton_e4", "pushButton_e5", "pushButton_e6", "pushButton_e7", "pushButton_e8",
            "pushButton_f1", "pushButton_f2", "pushButton_f3", "pushButton_f4", "pushButton_f5", "pushButton_f6", "pushButton_f7", "pushButton_f8",
            "pushButton_g1", "pushButton_g2", "pushButton_g3", "pushButton_g4", "pushButton_g5", "pushButton_g6", "pushButton_g7", "pushButton_g8",
            "pushButton_h1", "pushButton_h2", "pushButton_h3", "pushButton_h4", "pushButton_h5", "pushButton_h6", "pushButton_h7", "pushButton_h8"
        };

        for (const QString& buttonName : buttonNames) {
            QPushButton* button = findChild<QPushButton*>(buttonName);
            if (button) {
                connect(button, &QPushButton::clicked, this, &Display::handleButtonClick);
            }
        }
    }
}