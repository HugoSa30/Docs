/*
 * Program: n42.bin
 * Function: FUN_00118080
 * Entry: 00118080
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00118080(void)

{
  int in_r12;
  undefined4 *unaff_r31;
  
  if (in_r12 == 0) {
    B_btev1 = 0;
    B_btev2 = 0;
    B_btev3 = 1;
    B_btev4 = 0;
    FUN_00117228(unaff_r31);
  }
  else {
    *(undefined *)*unaff_r31 = 0x22;
    *(undefined2 *)(unaff_r31 + 2) = 1;
    *(undefined *)((int)unaff_r31 + 10) = 2;
  }
  return;
}

