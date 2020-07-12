//Definitions

//LED Setup
//RED Kathodes
#define AchR 0 //defines the "A" (RED)string for the tlc5940 -->OUTPUT 0 first TLC5940
#define BchR 1 //defines the "B" (RED)string for the tlc5940 -->OUTPUT 1
#define CchR 2 //defines the "C" (RED)string for the tlc5940 -->OUTPUT 2
#define DchR 3 //defines the "D" (RED)string for the tlc5940 -->OUTPUT 3
#define EchR 4 //defines the "E" (RED)string for the tlc5940 -->OUTPUT 4
#define FchR 5 //defines the "F" (RED)string for the tlc5940 -->OUTPUT 5
#define GchR 6 //defines the "G" (RED)string for the tlc5940 -->OUTPUT 6
#define HchR 7 //defines the "H" (RED)string for the tlc5940 -->OUTPUT 7

//GREEN Kathodes
#define AchG 8 //defines the "A" (GREEN)string for the tlc5940 -->OUTPUT 8
#define BchG 9 //defines the "B" (GREEN)string for the tlc5940 -->OUTPUT 9
#define CchG 10//defines the "C" (GREEN)string for the tlc5940 -->OUTPUT 10
#define DchG 11//defines the "D" (GREEN)string for the tlc5940 -->OUTPUT 11
#define EchG 12//defines the "E" (GREEN)string for the tlc5940 -->OUTPUT 12
#define FchG 13//defines the "F" (GREEN)string for the tlc5940 -->OUTPUT 13
#define GchG 14//defines the "G" (GREEN)string for the tlc5940 -->OUTPUT 14
#define HchG 15//defines the "H" (GREEN)string for the tlc5940 -->OUTPUT 15

//BLUE Kathodes
#define AchB 16//defines the "A" (BLUE)string for the tlc5940 -->OUTPUT 0 second TLC5940
#define BchB 17//defines the "B" (BLUE)string for the tlc5940 -->OUTPUT 1
#define CchB 18//defines the "C" (BLUE)string for the tlc5940 -->OUTPUT 2
#define DchB 19//defines the "D" (BLUE)string for the tlc5940 -->OUTPUT 3
#define EchB 20//defines the "E" (BLUE)string for the tlc5940 -->OUTPUT 4
#define FchB 21//defines the "F" (BLUE)string for the tlc5940 -->OUTPUT 5
#define GchB 22//defines the "G" (BLUE)string for the tlc5940 -->OUTPUT 6
#define HchB 23//defines the "H" (BLUE)string for the tlc5940 -->OUTPUT 7

//LED Colors going to be safed in matrizes according to their layout on the board.
byte RedLeds[8][8];
byte GreenLeds[8][8];
byte BlueLeds[8][8];
