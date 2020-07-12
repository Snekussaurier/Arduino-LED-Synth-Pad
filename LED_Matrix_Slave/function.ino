
void MatrixUpdate(int columnno) {
  switch (columnno) {
    case 1:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[0][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[0][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[0][2]* 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[0][3]* 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[0][4]* 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[0][5]* 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[0][6]* 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[0][7]* 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathodes
      Tlc.set(AchG, GreenLeds[0][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[0][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[0][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[0][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[0][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[0][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[0][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[0][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathodes
      Tlc.set(AchB, BlueLeds[0][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[0][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[0][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[0][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[0][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[0][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[0][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[0][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnOne, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;

    case 2:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[1][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[1][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[1][2] * 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[1][3] * 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[1][4] * 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[1][5] * 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[1][6] * 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[1][7] * 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathodes
      Tlc.set(AchG, GreenLeds[1][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[1][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[1][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[1][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[1][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[1][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[1][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[1][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathodes
      Tlc.set(AchB, BlueLeds[1][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[1][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[1][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[1][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[1][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[1][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[1][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[1][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnTwo, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;

    case 3:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[2][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[2][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[2][2] * 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[2][3] * 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[2][4] * 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[2][5] * 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[2][6] * 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[2][7] * 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathodes
      Tlc.set(AchG, GreenLeds[2][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[2][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[2][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[2][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[2][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[2][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[2][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[2][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathodes
      Tlc.set(AchB, BlueLeds[2][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[2][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[2][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[2][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[2][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[2][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[2][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[2][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnThree, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;

    case 4:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[3][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[3][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[3][2] * 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[3][3] * 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[3][4] * 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[3][5] * 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[3][6] * 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[3][7] * 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathodes
      Tlc.set(AchG, GreenLeds[3][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[3][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[3][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[3][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[3][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[3][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[3][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[3][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathodes
      Tlc.set(AchB, BlueLeds[3][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[3][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[3][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[3][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[3][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[3][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[3][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[3][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnFour, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;

    case 5:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[4][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[4][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[4][2] * 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[4][3] * 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[4][4] * 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[4][5] * 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[4][6] * 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[4][7] * 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathodes
      Tlc.set(AchG, GreenLeds[4][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[4][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[4][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[4][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[4][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[4][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[4][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[4][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathode4
      Tlc.set(AchB, BlueLeds[4][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[4][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[4][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[4][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[4][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[4][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[4][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[4][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnFive, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;

    case 6:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[5][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[5][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[5][2] * 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[5][3] * 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[5][4] * 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[5][5] * 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[5][6] * 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[5][7] * 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathodes
      Tlc.set(AchG, GreenLeds[5][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[5][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[5][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[5][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[5][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[5][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[5][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[5][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathodes
      Tlc.set(AchB, BlueLeds[5][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[5][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[5][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[5][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[5][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[5][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[5][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[5][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnSix, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;

    case 7:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[6][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[6][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[6][2] * 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[6][3] * 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[6][4] * 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[6][5] * 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[6][6] * 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[6][7] * 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathode
      Tlc.set(AchG, GreenLeds[6][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[6][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[6][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[6][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[6][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[6][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[6][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[6][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathode
      Tlc.set(AchB, BlueLeds[6][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[6][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[6][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[6][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[6][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[6][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[6][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[6][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnSeven, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;

    case 8:
      // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set
      //RED Kathodes
      Tlc.set(AchR, RedLeds[7][0] * 16);             // set A1R brightness to AchR OUTPUT(OUTPUT 0); first TLC5940
      Tlc.set(BchR, RedLeds[7][1] * 16);             // set B1R brightness to BchR OUTPUT(OUTPUT 1);
      Tlc.set(CchR, RedLeds[7][2] * 16);             // set C1R brightness to CchR OUTPUT(OUTPUT 2);
      Tlc.set(DchR, RedLeds[7][3] * 16);             // set D1R brightness to DchR OUTPUT(OUTPUT 3);
      Tlc.set(EchR, RedLeds[7][4] * 16);             // set E1R brightness to EchR OUTPUT(OUTPUT 4);
      Tlc.set(FchR, RedLeds[7][5] * 16);             // set F1R brightness to FchR OUTPUT(OUTPUT 5);
      Tlc.set(GchR, RedLeds[7][6] * 16);             // set G1R brightness to GchR OUTPUT(OUTPUT 6);
      Tlc.set(HchR, RedLeds[7][7] * 16);             // set H1R brightness to HchR OUTPUT(OUTPUT 7);
      //GREEN Kathodes
      Tlc.set(AchG, GreenLeds[7][0] * 16);             // set A1G brightness to AchG OUTPUT(OUTPUT 0); second TLC5940
      Tlc.set(BchG, GreenLeds[7][1] * 16);             // set B1G brightness to BchG OUTPUT(OUTPUT 1);
      Tlc.set(CchG, GreenLeds[7][2] * 16);             // set C1G brightness to CchG OUTPUT(OUTPUT 2);
      Tlc.set(DchG, GreenLeds[7][3] * 16);             // set D1G brightness to DchG OUTPUT(OUTPUT 3);
      Tlc.set(EchG, GreenLeds[7][4] * 16);             // set E1G brightness to EchG OUTPUT(OUTPUT 4);
      Tlc.set(FchG, GreenLeds[7][5] * 16);             // set F1G brightness to FchG OUTPUT(OUTPUT 5);
      Tlc.set(GchG, GreenLeds[7][6] * 16);             // set G1G brightness to GchG OUTPUT(OUTPUT 6);
      Tlc.set(HchG, GreenLeds[7][7] * 16);             // set H1G brightness to HchG OUTPUT(OUTPUT 7);
      //BLUE Kathodes
      Tlc.set(AchB, BlueLeds[7][0] * 16);             // set A1B brightness to AchB OUTPUT(OUTPUT 0); third TLC5940
      Tlc.set(BchB, BlueLeds[7][1] * 16);             // set B1B brightness to BchB OUTPUT(OUTPUT 1);
      Tlc.set(CchB, BlueLeds[7][2] * 16);             // set C1B brightness to CchB OUTPUT(OUTPUT 2);
      Tlc.set(DchB, BlueLeds[7][3] * 16);             // set D1B brightness to DchB OUTPUT(OUTPUT 3);
      Tlc.set(EchB, BlueLeds[7][4] * 16);             // set E1B brightness to EchB OUTPUT(OUTPUT 4);
      Tlc.set(FchB, BlueLeds[7][5] * 16);             // set F1B brightness to FchB OUTPUT(OUTPUT 5);
      Tlc.set(GchB, BlueLeds[7][6] * 16);             // set G1B brightness to GchB OUTPUT(OUTPUT 6);
      Tlc.set(HchB, BlueLeds[7][7] * 16);             // set H1B brightness to HchB OUTPUT(OUTPUT 7);


      digitalWrite(ColumnOne, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnTwo, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnThree, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnFour, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF
      digitalWrite(ColumnFive, HIGH);   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
      digitalWrite(ColumnSix, HIGH);   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
      digitalWrite(ColumnSeven, HIGH); // sets LayerThree (pin A2) High (not active)--> Layer three OFF
      digitalWrite(ColumnEight, HIGH);  // sets LayerFour (pin A3) High (not active)--> Layer four OFF

      Tlc.update();                   // writes the values for the LEDs brightness to the tlc
      delay(0);                                // give the tlc some time to let the value settle
      digitalWrite(ColumnOne, LOW);    // sets LayerOne (pin A0) Low (active)--> Layer one ON
      break;
  }
}


void reset() {                // we set all LEDs to 0 brightness
  for (int i = 0; i < 8; i++) {
    for (int j = 0; i < 8; i++) {
      RedLeds[i][j] = 0;
      GreenLeds[i][j] = 0;
      BlueLeds[i][j] = 0;
    }
  }
}


//set all leds only red
void allred() {  //
  for (int i = 0; i < 8; i++) {
    for (int j = 0; i < 8; i++) {
      RedLeds[i][j] = bright;
      GreenLeds[i][j] = 0;
      BlueLeds[i][j] = 0;
    }
  }
}


//set all leds only green
void allgreen() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; i < 8; i++) {
      GreenLeds[i][j] = bright;
      RedLeds[i][j] = 0;
      BlueLeds[i][j] = 0;
    }
  }
}

//set all leds only blue
void allblue() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; i < 8; i++) {
      BlueLeds[i][j] = bright;
      GreenLeds[i][j] = 0;
      RedLeds[i][j] = 0;
    }
  }
}
