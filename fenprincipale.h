#ifndef FENPRINCIPALE_H
#define FENPRINCIPALE_H

#include <QWidget>
#include <QApplication>
#include <QLayout>
#include <QTreeView>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QDirModel>
#include <QTableView>
#include <QLineEdit>
#include <QStackedWidget>
#include <QStackedLayout>

#include "sessionActuel.h"

class FenPrincipale : public QMainWindow

{
private :
    SessionActuel* _session;

    //Widget général
     QWidget *zoneCentrale;

     //View
     QTableView* viewL;
     QTreeView* viewRH;
     QTableView* viewRB;

     //Model
     QDirModel *modele;

     //PushButton
     QPushButton *modeTag;
     QPushButton *mostUse;
     QPushButton *ordreLexico;
     QPushButton *ajouter;
     QPushButton *associateFile;
     QPushButton *multiSelection;

     //LineEdit
     QLineEdit* creeTag;
     QLineEdit* rechercheFile;

     //Layout
     QGridLayout *layout;
     QGridLayout *layoutLeft;
     QGridLayout *layoutRight;
     QGridLayout *layoutCentral; // Bloc avec Ajouter Tag(s)
     QGridLayout *layoutCentral2;// Bloc avec Mode multi Séléction



public:
    FenPrincipale();

    SessionActuel* getSession();
    void setSession( SessionActuel *session);
};

#endif // FENPRINCIPALE_H
