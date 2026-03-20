/*
 * Program: n42.bin
 * Function: FUN_00093d38
 * Entry: 00093d38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093d38(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_TBLr;
  
  iVar3 = _DAT_003f9e74;
  do {
    FUN_00097358();
    FUN_000954e4();
    (*_DAT_003f9f8c)();
    uVar2 = in_TBLr - iVar3;
    if (0x9c3 < uVar2) {
      if (uVar2 < 10000) {
        iVar3 = iVar3 + 0x9c4;
      }
      else {
        iVar3 = iVar3 + (uVar2 / 0x9c4) * 0x9c4;
      }
      iVar3 = iVar3 + 0x9c4;
      FUN_000960ac();
      (*_DAT_003f9f8c)();
      FUN_00097504();
      (*_DAT_003f9f8c)();
      FUN_00095888();
      (*_DAT_003f9f8c)();
      FUN_00093e2c();
      (*_DAT_003f9f8c)();
      FUN_00095e00();
      (*_DAT_003f9f8c)();
    }
    cVar1 = FUN_000954bc();
  } while (cVar1 == '\0');
  FUN_00095294();
  _DAT_003f9e74 = iVar3;
  return;
}

