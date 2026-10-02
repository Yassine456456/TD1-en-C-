#include <iostream>
#include "Complex2D.h"

int main()
{
    // Constructeur par défaut
    Complex2D z1;

    // Constructeur réel + imaginaire
    Complex2D z2(3, 4);

    // Constructeur avec une seule valeur
    Complex2D z3(5);

    // Constructeur par copie
    Complex2D z4(z2);

    std::cout << "z1 = "
              << z1.getReel() << " + "
              << z1.getImaginaire() << "i"
              << std::endl;

    std::cout << "z2 = "
              << z2.getReel() << " + "
              << z2.getImaginaire() << "i"
              << std::endl;

    std::cout << "z3 = "
              << z3.getReel() << " + "
              << z3.getImaginaire() << "i"
              << std::endl;

    std::cout << "z4 = "
              << z4.getReel() << " + "
              << z4.getImaginaire() << "i"
              << std::endl;


    // Addition
    Complex2D somme = z2 + z3;

    std::cout << "z2 + z3 = "
              << somme.getReel() << " + "
              << somme.getImaginaire() << "i"
              << std::endl;


    // Soustraction
    Complex2D difference = z2 - z3;

    std::cout << "z2 - z3 = "
              << difference.getReel() << " + "
              << difference.getImaginaire() << "i"
              << std::endl;


    // Multiplication
    Complex2D produit = z2 * z3;

    std::cout << "z2 * z3 = "
              << produit.getReel() << " + "
              << produit.getImaginaire() << "i"
              << std::endl;


    // Division
    Complex2D quotient = z2 / z3;

    std::cout << "z2 / z3 = "
              << quotient.getReel() << " + "
              << quotient.getImaginaire() << "i"
              << std::endl;


    // Comparaison
    if (z2 > z3)
    {
        std::cout << "z2 > z3" << std::endl;
    }

    if (z2 < z3)
    {
        std::cout << "z2 < z3" << std::endl;
    }

    return 0;
}