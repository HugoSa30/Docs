/*
 * Program: n42.bin
 * Function: FUN_0010cd20
 * Entry: 0010cd20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010cd20(undefined4 *param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &DAT_003fba24;
  *param_2 = 0;
  if ((DAT_003fff84 == 'U') && (DAT_003fffa0 - 2 < 2)) {
    DAT_003fff84 = '\0';
    DAT_003fba58 = 1;
    iVar2 = _DAT_003fba80 + (uint)DAT_003fffce * 0x14;
    _DAT_003fba60 = *(undefined4 **)(iVar2 + 0xc);
    DAT_003fba84 = *(byte *)(_DAT_003fba80 + (uint)DAT_003fffce * 0x14);
    DAT_003fba85 = *(undefined *)(iVar2 + 1);
    DAT_005baa14 = **(undefined4 **)(iVar2 + 0x10);
    DAT_005baa18 = (*(undefined4 **)(iVar2 + 0x10))[1];
    cVar1 = *(char *)(iVar2 + 2);
    FUN_0010b178(*_DAT_003fba60,_DAT_003fba60[1],*(undefined *)(_DAT_003fba60 + 2));
    FUN_0010b1bc(cVar1 + -1);
    FUN_0010b220(*(undefined *)(*(int *)(DAT_005baa10 + 0x10) + (uint)DAT_003fba84 * 0x18 + 0xf),
                 DAT_003fffb2);
    DAT_003fffa3 = DAT_003fbd5e;
    DAT_003fffa4 = DAT_003fbd5d;
    _8(DAT_003fffa1);
    _9(DAT_003fffa0);
    *param_2 = 1;
    _DAT_003fba18 = 2;
  }
  else {
    _DAT_003fba18 = 0;
  }
  return _DAT_003fba18;
}

