/*
 * Program: n42.bin
 * Function: FUN_0012f97c
 * Entry: 0012f97c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0012f97c(void)

{
  byte bVar1;
  
  (*(code *)&SUB_00fb12f4)(0x1c9ec,0x1ca4c);
  DAT_003f9b22 = 1;
  bVar1 = 0;
  do {
    if ((DAT_005b8e34 & 1) == 1) {
      (*(code *)&SUB_00fb0e64)(0,bVar1);
    }
    else {
      (*(code *)&SUB_00fb0e64)(1,bVar1);
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 4);
  return;
}

