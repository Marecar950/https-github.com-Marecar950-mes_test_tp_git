#if QT_VERSION >= 0x050000
#include <QtWidgets> /* tous les widgets de Qt5 */
#else
#include <QtGui> /* tous les widgets de Qt4 */
#endif

#ifndef MAFENETRE_H
#define MAFENETRE_H
#define CELCIUS_FARENHEIT 0
#define FARENHEIT_CELCIUS 1
#include <QtWidgets>

class MaFenetre : public QDialog
{
Q_OBJECT
public:
MaFenetre(QWidget *parent=0);

private:
QLineEdit *valeur;
QLabel *resultat;
QLabel *unite;
QComboBox *choixConversion;
QPushButton *bConvertir;
QPushButton *bQuitter;
QDoubleValidator *doubleValidator;

void afficherUnite();
signals:
void actualiser();
private slots:
void convertir();
void permuter();
};
#endif
