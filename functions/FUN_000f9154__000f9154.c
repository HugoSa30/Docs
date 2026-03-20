/*
 * Program: n42.bin
 * Function: FUN_000f9154
 * Entry: 000f9154
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9154(uint param_1,byte *param_2)

{
  char cVar3;
  undefined4 uVar1;
  int iVar2;
  
  cVar3 = (*(code *)&SUB_00069008)(param_1);
  if (cVar3 == '\0') {
    uVar1 = 0;
  }
  else if (*(int *)(&UNK_003fc7f8 + param_1 * 4) == 1) {
    if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
      (**_DAT_003fc7f0)(7,0x36,param_1 & 0xff);
    }
    uVar1 = 0;
  }
  else {
    iVar2 = _DAT_003fc7f4 + param_1 * 0xc;
    if (*(char *)(iVar2 + 9) == '\0') {
      *param_2 = (byte)((ushort)**(undefined2 **)(iVar2 + 4) >> 0xf);
      uVar1 = 1;
    }
    else {
      if ((_DAT_003fc7f0 != (code **)0x0) && (*_DAT_003fc7f0 != (code *)0x0)) {
        (**_DAT_003fc7f0)(7,0x37,param_1 & 0xff);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

