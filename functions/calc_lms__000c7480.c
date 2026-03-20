/*
 * Program: n42.bin
 * Function: calc_lms
 * Entry: 000c7480
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_lms(void)

{
  if (DAT_003fb018 != '\0') {
    if (((B_shuerf != '\0') && (B_lsh != '\0')) && (DAT_003fb04c != '\0')) {
      if (DAT_003fb04d == DAT_003fb04c) {
        _uushob_w = uushk_w_1ms;
      }
      DAT_003fb04c = DAT_003fb04c + -1;
      if (DAT_003fb04c == '\0') {
        _uushmb_w = uushk_w_1ms;
        B_shuerf = '\0';
      }
    }
    if (((B_shuerf2 != '\0') && (B_lsh2 != '\0')) && (DAT_003fb04c != '\0')) {
      if (DAT_003fb04d == DAT_003fb04c) {
        _uushob2_w = uushk2_w_1ms;
      }
      DAT_003fb04c = DAT_003fb04c + -1;
      if (DAT_003fb04c == '\0') {
        _uushmb2_w = uushk2_w_1ms;
        B_shuerf2 = '\0';
      }
    }
  }
  return;
}

