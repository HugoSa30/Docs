/*
 * Program: n42.bin
 * Function: FUN_000a411c
 * Entry: 000a411c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined FUN_000a411c(int param_1)

{
  undefined uVar1;
  
  if (param_1 < 0x80) {
    uVar1 = (&UNK_003fa5b2)[param_1 * 2];
  }
  else {
    uVar1 = (&DAT_005ba734)[param_1 * 6];
  }
  return uVar1;
}

