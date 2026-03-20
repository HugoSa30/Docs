/*
 * Program: n42.bin
 * Function: FUN_00093aa4
 * Entry: 00093aa4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00093aa4(void)

{
  char cVar2;
  undefined4 uVar1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  _DAT_003f9e70 = &DAT_001c05a8;
  uVar3 = 0xfc0000;
  iVar5 = 0xfc0000;
  if (((((_DAT_00fc0018 < &DAT_00fc0000) || (uVar4 = 0xfcffff, (int *)0xfcffff < _DAT_00fc0018)) ||
       (_DAT_00fc0008 < 0xfc0000)) ||
      ((0xfcffff < _DAT_00fc0008 || (*_DAT_00fc0018 != _DAT_00fc0000)))) ||
     ((cVar2 = FUN_00093a08(), cVar2 == '\0' ||
      ((*(uint *)(iVar5 + 0x20) < uVar3 || (uVar4 < *(uint *)(iVar5 + 0x20))))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

