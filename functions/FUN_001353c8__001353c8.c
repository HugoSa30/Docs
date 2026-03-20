/*
 * Program: n42.bin
 * Function: FUN_001353c8
 * Entry: 001353c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001353c8(void)

{
  if (inisynmon != 500) {
    (*(code *)&SUB_00fac308)(&UNK_003f9ae4,_DAT_003f9ae0);
    (*(code *)&SUB_00fac124)(0,1);
    (*(code *)&SUB_00fac124)(1,1);
    (*(code *)&SUB_00fac124)(pgmaster,3);
    (*(code *)&SUB_00fac018)((int)pgmaster);
    (*(code *)&SUB_00fabd88)();
    zphfl = 0xff;
    B_checkpg = 0;
    zphfl4 = 0xff;
    B_checkpg4 = 0;
  }
  return;
}

