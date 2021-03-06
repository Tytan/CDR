/****************************************
 * Author : Quentin C			*
 * Mail : quentin.chateau@gmail.com	*
 * Date : 29/11/13			*
 ****************************************/
#ifndef PARAMETERS_H
#define PARAMETERS_H

#define BAUDRATE 57600
#define SERIAL_TYPE SERIAL_8N1
#define ARDUINO_ID "A"
#define DEBUG_TARGET_SPEED 0
#define DEBUG_MAINLOOP 0

/* Simple ou Double ou Quadruple evaluation ? 
 * La quadruple evaluation utilise 4 interruption par tick
 * (une pour chaque changement de valeur des fils A et B)
 *
 * La double evaluation utilise 2 interruptions par tick
 * (une pour chaque changement de valeur du fil A
 *
 * La simple evaluation utilise 1 interruption par tick
 * (front montant du fil A)
 *
 * Ces trois méthodes sont equivalentes
 * La quadruple evaluation est plus précise mais utilise
 * plus de puissance processeur
 * Il convient de tester la plus adapté selon le processeur
 * et le nombre de ticks du codeur 
 * 
 * OPTIONS : '1' - '2 - '4' */

#define ENCODER_EVAL 2

#define USE_SHARP 1
#define EMERGENCY_STOP_DISTANCE 0.32 // m
#define EMERGENCY_WAIT_TIME 30 // seconds
#define EMERGENCY_SLOW_GO_RATIO 0.5 // spd = 0.3*max_spd in slow_go mode

#define HZ 100
#define DT (1.0/HZ)
#define AUTO_STATUS_HZ 100 // must be a divider a HZ or 0 to disable

#define SPD_MAX 500 //mm/s
#define ACC_MAX 1000  //mm/s2
#define RATIO_ROT_SPD_MAX 0.3
#define K_DISTANCE_REDUCTION 10 // réduction de la vitesse linéaire quand on tourne

#define ENC_RESOLUTION 1024 //resolution du codeur

#define ENC_LEFT_RADIUS 20.02 //REGLE PAR TEST - rayon de la roue codeuse
#define ENC_RIGHT_RADIUS 20.02 //REGLE PAR TEST - rayon de la roue codeuse
#define ENTRAXE_ENC 200.0 //REGLE PAR TES - Distance entre chaque roue codeuse en mm

#define ERROR_ANGLE 0.015 //erreur en angle(radians) maximale pour considérer l'objectif comme atteint
#define ERROR_POS 5 // erreur en position (mm)  maximale pour considérer l'objectif comme atteint
#define SPD_TO_STOP 10

#define CONE_ALIGNEMENT 100 // NEVER

#define PID_P 1.5
#define PID_I 30
#define PID_D 5
#define PID_BIAS 0

#define LEFT_P (PID_P)
#define LEFT_I (PID_I)
#define LEFT_D (PID_D)
#define LEFT_BIAS (PID_BIAS)

#define RIGHT_P (PID_P)
#define RIGHT_I (PID_I)
#define RIGHT_D (PID_D)
#define RIGHT_BIAS (PID_BIAS)

#define PID_I_RATIO (1/1000.0)
#define PID_D_RATIO (1/1000.0)

#define TIME_BETWEEN_ORDERS 1 // s
#define KEEP_LAST_GOAL 0

//DEFINES ARDUINO
#define SERIAL_MAIN Serial

#endif
