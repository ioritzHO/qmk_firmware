#ifndef KEYMAP_ES_ES_H
#define KEYMAP_ES_ES_H

#include "keymap.h"

// Alt gr
#define NO_ALGR KC_RALT

// Normal characters
#define ES_OVRR KC_GRV  //º
#define ES_1    KC_1    //1
#define ES_2    KC_2    //2
#define ES_3    KC_3    //3
#define ES_4    KC_4    //4
#define ES_5    KC_5    //5
#define ES_6    KC_6    //6
#define ES_7    KC_7    //7
#define ES_8    KC_8    //8
#define ES_9    KC_9    //9
#define ES_0    KC_0    //0
#define ES_APOS	KC_MINS //'
#define ES_IEXL	KC_EQL  //¡

#define ES_Q    KC_Q    //q
#define ES_W    KC_W    //w
#define ES_E    KC_E    //e
#define ES_R    KC_R    //r
#define ES_T    KC_T    //t
#define ES_Y    KC_Y    //y
#define ES_U    KC_U    //u
#define ES_I    KC_I    //i
#define ES_O    KC_O    //o
#define ES_P    KC_P    //p
#define ES_GRV	KC_LBRC //`
#define ES_PLUS	KC_RBRC //+

#define ES_A    KC_A    //a
#define ES_S    KC_S    //s
#define ES_D    KC_D    //d
#define ES_F    KC_F    //f
#define ES_G    KC_G    //g
#define ES_H    KC_H    //h
#define ES_J    KC_J    //j
#define ES_K    KC_K    //k
#define ES_L    KC_L    //l
#define ES_NN   KC_SCLN //ñ
#define ES_ACUT	KC_QUOT //´
#define ES_CCED	KC_NUHS //ç

#define ES_LESS	KC_NUBS //<
#define ES_Z    KC_Z    //z
#define ES_X    KC_X    //x
#define ES_C    KC_C    //c
#define ES_V    KC_V    //v
#define ES_B    KC_B    //b
#define ES_N    KC_N    //n
#define ES_M    KC_M    //m
#define ES_COMM KC_COMM //,
#define ES_DOT  KC_DOT  //.
#define ES_MINS KC_SLSH //-

// Shifted characters
#define ES_ASML LSFT(ES_OVRR)   //ª
#define ES_EXCL LSFT(ES_1)      //!
#define ES_QUOT LSFT(ES_2)      //"
#define ES_OVDT LSFT(ES_3)      //·
#define ES_DOLL LSFT(ES_4)      //$
#define ES_PERC LSFT(ES_5)      //%
#define ES_AMPR LSFT(ES_6)      //&
#define ES_SLSH LSFT(ES_7)      ///
#define ES_LPRN LSFT(ES_8)      //(
#define ES_RPRN LSFT(ES_9)      //)
#define ES_EQL  LSFT(ES_0)      //=
#define ES_QUES LSFT(ES_APOS)	//?
#define ES_IQUE LSFT(ES_IEXL)	//¿

#define ES_CIRC	LSFT(ES_GRV)    //^
#define ES_ASTR	LSFT(ES_PLUS)   //*

#define ES_UMLT	LSFT(ES_ACUT)   //¨

#define ES_GRTR	LSFT(ES_LESS)   //>
#define ES_SCLN	LSFT(ES_COMM)   //;
#define ES_COLN	LSFT(ES_DOT)    //:
#define ES_UNDS	LSFT(ES_MINS)   //_

// Alt Gr-ed characters
#define ES_BSLS	ALGR(ES_OVRR)   //\ //
#define ES_PIPE	ALGR(ES_1)      //|
#define ES_AT 	ALGR(ES_2)      //@
#define ES_HASH	ALGR(ES_3)      //#
#define ES_TILD ALGR(ES_4)      //~
#define ES_NOT	ALGR(ES_6)      //¬

#define ES_EURO	ALGR(ES_E)      //€
#define ES_LBRC	ALGR(ES_GRV)    //[
#define ES_RBRC ALGR(ES_PLUS)   //]

#define ES_LCBR	ALGR(ES_ACUT)   //{
#define ES_RCBR	ALGR(ES_CCED)   //}

#endif

