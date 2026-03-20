/*
 * Program: n42.bin
 * Function: FUN_0013f200
 * Entry: 0013f200
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013f200(void)

{
  int in_r9;
  int unaff_r28;
  undefined *unaff_r29;
  int unaff_r30;
  char unaff_r31;
  
  *(bool *)unaff_r28 = unaff_r30 != in_r9;
  *(char *)(unaff_r28 + 1) = (char)unaff_r30;
  DAT_003fb32b = B_ko != DAT_003fb32c;
  DAT_003fb32c = B_ko;
  if (((unaff_r30 != in_r9) || ((bool)DAT_003fb32b)) || (unaff_r31 != '\0')) {
    *unaff_r29 = 2;
  }
  else {
    DAT_003fb323 = DAT_003fbe9b != DAT_003fb324;
    DAT_003fb324 = DAT_003fbe9b;
    if ((bool)DAT_003fb323) {
      *unaff_r29 = 1;
    }
  }
  return;
}

