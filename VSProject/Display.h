/**
* Programme La declaration de la classe Display permettant de definir l'interface ui.
* \file		Display.h
* \author	Selim Mahjoub, Brice Tangmouo Manfo, Bryan Alexandre Tavares
* \date		03 mars 2024
* Créé le	25 mars 2024
*/

#pragma once

#include <QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QListWidgetItem>
#include <QComboBox>
#include <QDebug>

#include <array>
#include <vector>
#include <memory>

#include "Piece.h"

#include "ui_ChessProject.h"

// Enum class pour représenter les différents choix de jeux
enum class GameSelection {
    Default_Board,
    La_Bourdonnais_vs_McDonnell,
    J_Polgar_vs_Kasparov,
    Random_1,
    Random_2,
    Random_3,
    Random_with_3_kings
};

namespace display
{

    class Display : public QMainWindow
    {
        Q_OBJECT

    public:
        Display(model::ChessBoard* chessBoard, QWidget* parent = nullptr);
        ~Display();

    public slots:
        void setColorLabel();
        void setCheckLabel();
        void setExceptionLabel(const QString& what);
        void setPieceLabel(QString buttonText = "----");
        
        void startGameButtonClicked(); 
        void toggleBoardValid() { isBoardValid_ = !isBoardValid_; };

        QPushButton* getButtonAt(int x, int y);
        void getPositionOfButton(QPushButton* button, int& x, int& y);
        void changeButtonTextAt(QString change, int x, int y);
        void setButtonsBoard();
        void handleButtonClick();

        void changeGameSelection(QListWidgetItem* item); 
        void setDefaultBoards();
        void setBourdonnais();
        void setKasparov();
        void setRandom_1();
        void setRandom_2();
        void setRandom_3();
        void setRandom3Kings();
        
        void highlightBoxes(QPushButton* clickedButton, const std::vector<std::pair<int, int>>& offsets);
        void highlightBoxes(QPushButton* clickedButton);
        void resetColorChessboard();

        void checkBoardValidity();
        void resetToBourdonnais();

        model::ChessBoard* getChessBoard() { return chessBoard_; };
        
    private:

        void connectButtons();
        
        Ui::ChessProjectClass ui;

        int xbutton = 0;
        int ybutton = 0;
        
        int nClick = 0;

        GameSelection selectedGame_; 
        bool isBoardValid_ = true;

        model::ChessBoard* chessBoard_;
        model::Piece* toMovePiece_;
    };
}
