/*
 * Program: n42.bin
 * Function: thunk_FUN_00142464
 * Entry: 00142454
 * Exported by: ExportAllDecompiledFunctions.java
 */


void thunk_FUN_00142464(void)

{
  char cVar1;
  short unaff_r28;
  int iVar2;
  undefined *unaff_r29;
  
  iVar2 = unaff_r28 + -0x2586;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  DAT_005b8c04 = (undefined2)iVar2;
  cVar1 = FUN_00142044();
  if (cVar1 == '\x02') {
    *unaff_r29 = 3;
    FUN_001424b8();
    return;
  }
  return;
}

