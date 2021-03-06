#ifndef GESTIONENREGISTREMENT_H_INCLUDED
#define GESTIONENREGISTREMENT_H_INCLUDED

#include <string.h>
#include <stdbool.h>
#include "define.h"

/**
 * @brief Cette fonction a pour but de créer un fichier ayant pour nom le nom du joueur et de son adversaire si le fichier existe deja nous demandons au  joueur de donner un nom au fichier
 *
 * @param joueur
 *
 */
void createGameFile(joueur joueur);

/**
 * @brief Cette fonction a pour but d'ajouter au fichier crée préalablement la ligne que vient de rentrer le joueur ainsi que les nbrBonneCouleurBonEndroit et nbrBonneCouleurMauvaisEndroit.
 *
 * @param proposition ligne proposée par le joueur 
 */
void addLigneToFile(ligne *proposition);

/**
 * @brief Cette fonction a pour objectif de retrouver le nom du fichier dans le dossier Previous-Game.
 *
 */
void *findFileName();

/**
 * @brief Cette fonction a pour objectif de creer une nouvelle ligne objectif et d'afficher les anciennes decisions qui ont été prises par le joueur afin qu'il se retrouve dans le jeu.
 * 
 * Cette fonction permet également d'instantier la combinaison secrète et les anciennes lignes proposées par le joueur. 
 *
 *@param combinaison Combinaison secrete définit dans le main 
 *
 *@param joueur joueur 
 *
 */
void createGameFromFile(Couleur *combinaison, joueur *joueur);

/**
 * @brief Cette fonction a pour objectif d'écrire la combinaison secrète sur la première ligne du fichier de sauvegarde
 *
 * @param combinaison
 */
void addFirstInfo(Couleur *combinaison, joueur *joueur);

/**
 * @brief This method is used to delete a file
 * 
 * @return void permet de rappeller la fonction autant de fois que le joueur le souhaite ?
 */
void deleteFile();

/**
 * @brief This method is used to find File Name
 * 
 * @return void* 
 */
void *findFileName();

/**
 * @brief Correspond au nom du fichier donné par le joueur
 *
 */
extern char filename[100];

#endif
