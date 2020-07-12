
#include "Tlc5940.h"
#define ColumnOne 14      //Gate of 1.MOSFET which connects to Column "1" (anodes of all Strings in Column "1")
#define ColumnTwo 15      //Gate of 2.MOSFET which connects to Column "2" (anodes of all StringS in Column "2")
#define ColumnThree 16    //Gate of 3.MOSFET which connects to Column "3" (anodes of all Strings in Column "3")
#define ColumnFour 17     //Gate of 4.MOSFET which connects to Column "4" (anodes of all Strings in Column "4")
#define ColumnFive 18      //Gate of 5.MOSFET which connects to Column "5" (anodes of all Strings in Column "5")
#define ColumnSix 19      //Gate of 6.MOSFET which connects to Column "6" (anodes of all StringS in Column "6")
#define ColumnSeven 2    //Gate of 7.MOSFET which connects to Column "7" (anodes of all Strings in Column "7")
#define ColumnEight 4     //Gate of 8.MOSFET which connects to Column "8" (anodes of all Strings in Column "8")



int ColumnDuration = 4000;     // ON time of each Layer in microseconds
int column = 0;                // starting with Column 0
unsigned long oldMicros = 0;// starting counter to decide when if(micros()>=oldMicros)is true to change active layer, count++1, MatrixUpdate(); don't know what micros() is? Look here: http://arduino.cc/de/Reference/Micros#.UygzAIWmWd4
int count = 0;              // starting counter which is included in if() statement to change the shown picture, not necessary when using a static picture
int stretch = 200;           // set timer for the change of the shown picture, if animation should move really fast then low stretch value, if animation should move really slow than big stretch value
int bright = 250;          // set brightness for all Strings(4095=20mA, 0=0ma, 1000=4.88mA,....). If you want individually brightness for a String you have to change the value in tab "function"


void setup() 
{
  Serial.begin(9600);
  pinMode(ColumnOne, OUTPUT);  // declare arduino nano pin A0(ColumnOne) as OUTPUT
  pinMode(ColumnTwo, OUTPUT);  // declare arduino nano pin A1(ColumnTwo) as OUTPUT
  pinMode(ColumnThree, OUTPUT);// declare arduino nano pin A2(ColumnThree) as OUTPUT
  pinMode(ColumnFour, OUTPUT); // declare arduino nano pin A3(ColumnFour) as OUTPUT
  pinMode(ColumnFive, OUTPUT);  // declare arduino nano pin A4(ColumnFive) as OUTPUT
  pinMode(ColumnSix, OUTPUT);  // declare arduino nano pin A5(ColumnSix) as OUTPUT
  pinMode(ColumnSeven, OUTPUT);// declare arduino nano pin D2(ColumnSeven) as OUTPUT
  pinMode(ColumnEight, OUTPUT); // declare arduino nano pin D4(ColumnrEight) as OUTPUT
  Tlc.init();               // configures the arduino to use the tlc5940, be sure to connect the arduino correctly to the tlc
  reset(); //set all LED's brightness to 0
}

void loop() {

  if (micros() >= oldMicros) {                                        // waits until LayerDuration is reached and than goes through cycle
    oldMicros = micros() + ColumnDuration;                             // updates oldMicros value by adding the micros() with LayerDuration
    if (count == 0) {
      reset();  // shows first static picture when count==0, so right at the beginng
      allred();
    }
    if (count == stretch) {
      reset();  // shows second static picture when count==2*stretch
      allgreen();
    }
    if (count == 2 * stretch) {
      reset();  // .
      allblue();
    }
    if (count == 3 * stretch) {
      reset();  // .
      allgreen();
      allblue();
    }
    if (count == 4 * stretch) {
      reset();  // .
      allgreen();
      allred();
    }
    if (count == 5 * stretch) {
      reset();  // .
      allred();
      allblue();
    }
    if (count == 6 * stretch) {
      reset();  // .
      allgreen();
      allred();
      allblue();
    }

    MatrixUpdate(column);                                                 // sets the values for the tlc5940 Outputs and puts all MOSFET Gates HIGH (not active) except for one MOSFET Low (active) -->this layer is ON, also look under tab "function"
    column++;                                                           // layer counter +1, so MatrixUpdate(layer) will affect the next layer during the next if() cycle
    count++;                                                           // count counter +1, to change the picture in next if() cycle
    if (column == 9) {
      column = 1; // we only have 8 columns, so we start with layer 1 again if column counter goes to 9
    }
    if (count == 7 * stretch) {
      count = 0; // there are only 6 led pictures to show
    }
  }
}
