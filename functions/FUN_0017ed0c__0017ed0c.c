/*
 * Program: n42.bin
 * Function: FUN_0017ed0c
 * Entry: 0017ed0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0017ed0c(void)

{
  ushort uVar1;
  
  if ((DAT_001d2872 & 1) == 0) {
    lamka_w = 0x8000;
    lamka2_w = 0x8000;
  }
  else {
    DAT_005b8b68 = DAT_005b8772;
    uVar1 = func_0xff2189bc(&DAT_001d2830,DAT_005b8772);
    DAT_005b8b5e = uVar1;
    DAT_005b8b6a = func_0xff2187cc(&DAT_001d285c,avkatf);
    DAT_005b8b5a = (undefined2)((uint)uVar1 * (uint)DAT_005b8b6a >> 8);
  }
  return;
}

