/*
 * Program: n42.bin
 * Function: calc_lms2
 * Entry: 000c8034
 * Exported by: ExportAllDecompiledFunctions.java
 */


void calc_lms2(void)

{
  if (B_priph == '\0') {
    if ((DAT_003fb0a6 >> 2 & 1) != 0) {
      FUN_0009bf70(10);
      DAT_003fb0a6 = DAT_003fb0a6 & 0xfb;
    }
  }
  else {
    if ((DAT_003fb0a6 >> 2 & 1) == 0) {
      uushk_w_1ms = FUN_00099c74(0x10);
      FUN_0009bcc4(10,1);
      DAT_003fb04c = DAT_003fb04d;
      DAT_003fb0a6 = DAT_003fb0a6 & 0xfb | 4;
    }
    if (DAT_003fb04c == '\x01') {
      uushk_w_1ms = FUN_00099c74(0x10);
    }
  }
  if (B_priph2 == '\0') {
    if ((DAT_003fb0a6 >> 3 & 1) != 0) {
      FUN_0009bf70(0xb);
      DAT_003fb0a6 = DAT_003fb0a6 & 0xf7;
    }
  }
  else {
    if ((DAT_003fb0a6 >> 3 & 1) == 0) {
      uushk2_w_1ms = FUN_00099c74(0x11);
      FUN_0009bcc4(0xb,1);
      DAT_003fb04c = DAT_003fb04d;
      DAT_003fb0a6 = DAT_003fb0a6 & 0xf7 | 8;
    }
    if (DAT_003fb04c == '\x01') {
      uushk2_w_1ms = FUN_00099c74(0x11);
    }
  }
  return;
}

