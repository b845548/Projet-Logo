#include"logo.h"

void main(void){
  init();
  animation();
}

/////////////////////////////////////////////////////////////////////
/*

L'utilisation de programme

La fonction init() initialise la position et l'angle et charge l'image de l'interface

La liste de commande:
'av' : avancer(changement de position)
're' : reculer(changement de position)
'td' : tourner droit(changement d'angle)
'tg' : tourner gauche(changement d'angle)
'lc' : lever le stylo
'bc' : baisser le stylo 
'<','>' : operateur de comparaison('<=','>=','<>' non defini)
'+','-','*','%','/','^' : operateur de calcul 
'repete' : repete n fois, equivalent a 'for' en c
'pour','fin' : pour definir une fonction dans l'interpreteur	
	example : pour example_fct :nb :long repete :nb [av :long tg 360/:nb] fin
	
	le programme cree un fichier comme ceci
  	nom de fichier: 
		example_fct.logo
	contenu de fichier: 
		:nb :long repete :nb [ av :long tg 360 / :nb ]

	tous les fichiers finient par *.logo
	les arguments sont etes decoupés et le programme enleve 'pour','fin' et le nom 		de fichier.
	Egalement on peux combiner plusieurs fonctions avec la recursivite(fonction 		chapeau)
	
	forme.logo
	pour forme :nb :long repete :nb [ av :long tg 360 / :nb ] fin

	dessine.logo
	pour dessine:nb :long forme :nb :long si :nb < 12 [ dessine :nb + 1 :long ] fin

	polygon.logo
	pour polygon :x dessine 3 :x fin
	
	C'est une fonction recursive, dans la fonction 'dessine' :nb incremente 	jusqu'a 12 chaque fois on appelle la fonction avec 'dessine :nb + 1' 
	il suiffit de tapper polygon 100 à l'interpreteur

//////////////////////////////////////////////////////////////////////////////////////

Comparaison entre mon programme et le programme standard(http://tortue-logo.fr/fr/tortue-logo)
	
Ce programme est capable d'excecuter les examples sur le site
Carrés gigognes, Etoile, Rosace, Polygone
Mon programme marche et affiche le meme

Il y a des ameliorations par rapport au programme standard

Point amelioré 1:
Le compilateur rejete les mauvaises instructions avant d'executer
example : av 10 [ 
Je viens de constater que le programme standard ne rejete pas tous les instructions
il execute quand meme 'av 10' et rejete '['
Dans ce cas il ne faut pas executer cet instruction.
ce programme rejete cet instruction et n'execute rien. 

Point amelioré 2:
On peux voir les positions X Y et l'angle

Point amelioré 3:
Le probleme du programme standard est qu'il ne garde pas les definitions
Apres l'excecution, il faut redefinir chaque fois les fonctions precedents
Par contre, avec ce programme, les fonctions definies sauvgardent dans les fichiers 

Point amelioré 4:
Dans le meme repectoire que le fichier executable 'logo'
il y a des fichiers comme 
'Logo_sucess.logfile'
'Logo_ERR.logfile'
ces deux fichiers sauvegardent l'historique des executions
'Logo_sucess.logfile' : ce fichier ne sauvegarde que les commandes qui sont etes excutes
'Logo_ERR.logfile' : ce fichier ne sauvegarde que les erreurs de compilateur


*/
/////////////////////////////////////////////////////////////////////
