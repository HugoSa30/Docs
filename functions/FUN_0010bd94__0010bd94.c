/*
 * Program: n42.bin
 * Function: FUN_0010bd94
 * Entry: 0010bd94
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010bd94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  _DAT_003fbd94 = _DAT_003fbda8;
  _DAT_003fbd90 = &DAT_003fbda8;
  iVar3 = 0;
  if (DAT_003fffc7 != 0) {
    puVar2 = (undefined *)(_DAT_003fbda8 + -1);
    puVar1 = &DAT_003fffbc;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_003fffc7);
  }
  DAT_003fbd9b = 1;
  DAT_003fbd9a = DAT_003fffa2;
  _DAT_003fbd98 = (ushort)DAT_003fffc7;
  _DAT_003fbd70 = &DAT_003fbd90;
  DAT_003fbd74 = 1;
  _DAT_003fbe24 = 0xf0bf8c;
  return;
}

