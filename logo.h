#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<SDL/SDL.h> 
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<math.h> 
// commande for comiling : gcc intp.c -lm -lSDL -lSDL_image -lSDL_ttf
#define MAXARG 200
#define MAXCHAR 1000
#define PI 3.14159265358979323846264338327950288419716939937510  
#define POSX_INITIAL 500
#define POSY_INITIAL 300
//////////  algo part  //////////
  struct dest{
    double x;
    double y;
  };
  typedef struct dest dest;
  double posx; 
  double posy;
  double angle_;
  int ligne_;
  int pen_;// up 0 down 1
/////////////////////////////////

//////////  image part  //////////
  SDL_Surface * ecran;
  SDL_Surface * tortue;
  SDL_Surface * interface;

  SDL_Surface * texte;
  SDL_Surface * Err_text;
  SDL_Surface * Para_img;
  TTF_Font *police;
  int shift;

//////////////////////////////////
void init(void);
void echangerEntiers(int* , int*);
void ligne(int, int, int, int, Uint32);
dest calcul_destination(int,double);
void etoile(void);
void etoile_special(void);
int isnumber(char *);
int isvariable(char *);
int compilateur(char **,char [MAXARG]);
void decoupage_input(char [MAXCHAR],char **);
int decoupage_define(char [MAXCHAR],char **,char **);
void remplace_variable(char **,int,char **,char **);
void arg_interpreteur(char **);
void input_interpreteur(char [MAXCHAR]);
void animation(void);
char ** calcul(char **);
