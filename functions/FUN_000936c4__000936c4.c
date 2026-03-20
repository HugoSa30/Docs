/*
 * Program: n42.bin
 * Function: FUN_000936c4
 * Entry: 000936c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined FUN_000936c4(void)

{
  int iVar1;
  
  if (DAT_003f9e64 == '\x01') {
    FUN_00096aec();
    iVar1 = FUN_000973a4(&DAT_00560000,&DAT_005e1004);
    if (iVar1 == 1) {
      FUN_00096abc(0);
      DAT_003fa0f2 = 1;
    }
    else {
      FUN_00096b10();
      DAT_003fa0f2 = 0;
    }
  }
  else {
    DAT_003fa0f2 = 0;
  }
  return DAT_003fa0f2;
}

