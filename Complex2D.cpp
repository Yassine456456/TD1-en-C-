#include <iostream>
#include "Complex2D.h"

// Constructeur par défaut
Complex2D::Complex2D()
{
    reel = 0;
    imaginaire = 0;
}

// Constructeur réel + imaginaire
Complex2D::Complex2D(double r, double i)
{
    reel = r;
    imaginaire = i;
}

// Constructeur avec une seule valeur
Complex2D::Complex2D(double valeur)
{
    reel = valeur;
    imaginaire = 0;
}

// Constructeur par copie
Complex2D::Complex2D(const Complex2D& autre)
{
    reel = autre.reel;
    imaginaire = autre.imaginaire;
}

// Getter réel
double Complex2D::getReel() const
{
    return reel;
}

// Getter imaginaire
double Complex2D::getImaginaire() const
{
    return imaginaire;
}

// Setter réel
void Complex2D::setReel(double r)
{
    reel = r;
}

// Setter imaginaire
void Complex2D::setImaginaire(double i)
{
    imaginaire = i;
}


// =========================
// OPERATEUR +
// =========================

Complex2D Complex2D::operator+(const Complex2D& autre) const
{
    return Complex2D(
        reel + autre.reel,
        imaginaire + autre.imaginaire
    );
}


// =========================
// OPERATEUR -
// =========================

Complex2D Complex2D::operator-(const Complex2D& autre) const
{
    return Complex2D(
        reel - autre.reel,
        imaginaire - autre.imaginaire
    );
}


// =========================
// OPERATEUR *
// =========================

Complex2D Complex2D::operator*(const Complex2D& autre) const
{
    double nouveauReel =
        reel * autre.reel
        - imaginaire * autre.imaginaire;

    double nouveauImaginaire =
        reel * autre.imaginaire
        + imaginaire * autre.reel;

    return Complex2D(nouveauReel, nouveauImaginaire);
}


// =========================
// OPERATEUR /
// =========================

Complex2D Complex2D::operator/(const Complex2D& autre) const
{
    double denominateur =
        autre.reel * autre.reel
        + autre.imaginaire * autre.imaginaire;

    if (denominateur == 0)
    {
        std::cerr << "Erreur : division par zero." << std::endl;
        return Complex2D();
    }

    double nouveauReel =
        (reel * autre.reel
        + imaginaire * autre.imaginaire)
        / denominateur;

    double nouveauImaginaire =
        (imaginaire * autre.reel
        - reel * autre.imaginaire)
        / denominateur;

    return Complex2D(nouveauReel, nouveauImaginaire);
}


// =========================
// OPERATEUR <
// =========================

bool Complex2D::operator<(const Complex2D& autre) const
{
    double moduleCarre =
        reel * reel + imaginaire * imaginaire;

    double autreModuleCarre =
        autre.reel * autre.reel
        + autre.imaginaire * autre.imaginaire;

    return moduleCarre < autreModuleCarre;
}


// =========================
// OPERATEUR >
// =========================

bool Complex2D::operator>(const Complex2D& autre) const
{
    double moduleCarre =
        reel * reel + imaginaire * imaginaire;

    double autreModuleCarre =
        autre.reel * autre.reel
        + autre.imaginaire * autre.imaginaire;

    return moduleCarre > autreModuleCarre;
}