#ifndef PLAYERINPUT_H
#define PLAYERINPUT_H

#include <stdio.h>
#include <stdlib.h>
#include "define.h"

#define NUM_COLOR 4 // Nombre de colonne dans le jeu

/**
 * @brief Cette fonction permet d'afficher le choix du joueur au fur et à mesure que celui-ci rempli la ligne 
 * 
 * @param proposition 
 */
void displayChoice(ligne *proposition);

/**
 * @brief 
 * 
 * @param choix 
 */
void initalizePion(ligne *choix);

/**
 * @brief Cette fonction permet de savoir si la ligne est remplie ou non 
 * 
 * @param choix 
 * @return true si la ligne est remplie
 * @return false si il y a des cases vides dans la ligne
 */
bool isFull(ligne *choix);

/**
 * @brief Cette fonction permet de completer la ligne en fonction de la chaine de caractere representant la couleur donnée par le joueur 
 * 
 * @param choix ligne actuellement en jeu
 * @param index index de la position de la couleur choisie
 * @param colorName chaine de caractere representant la couleur 
 */
void fillChoixWithColor(ligne *choix, int index, char *colorName);

/**
 * @brief Cette fonction permet de convertir la couleur donnée par l'utilisateur en majuscule afin d'eviter les malentendus 
 * 
 * @param name 
 * @return char* 
 */
char *charPointerToUpperCase(char *name);

/**
 * @brief Cette fonction permet d'afficher ce que vient de jouer le joueur 
 * Cette fonction peut etre utiliser pour faire du debug ou de l'affichage
 * 
 * @param joueur 
 */
void displayPlayerChoice(joueur *joueur);

#endif