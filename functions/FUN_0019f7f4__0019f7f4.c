/*
 * Program: n42.bin
 * Function: FUN_0019f7f4
 * Entry: 0019f7f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019f7f4(ushort **param_1)

{
  int iVar1;
  undefined uVar3;
  ushort *puVar2;
  
  iVar1 = (uint)*(byte *)(param_1 + 7) * 2;
  if (((uint)**param_1 <
       (uint)*(ushort *)(&SPRZG_AN + iVar1) + (uint)*(ushort *)(&DAT_001cb70c + iVar1)) &&
     ((int)((uint)*(ushort *)(&SPRZG_AN + iVar1) - (uint)*(ushort *)(&DAT_001cb70c + iVar1)) <
      (int)(uint)**param_1)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined *)param_1[5] = uVar3;
  if (DAT_001cb715 <= nmot) {
    *(undefined *)param_1[6] = 1;
  }
  if (((nmot < DAT_001cb715) && (*(char *)param_1[6] != '\0')) && (*(char *)param_1[5] == '\0')) {
    *(char *)param_1[6] = '\0';
    *(char *)param_1[2] = *(char *)param_1[2] + '\x01';
    puVar2 = param_1[4];
    if (*(byte *)puVar2 < 4) {
      *(byte *)puVar2 = *(byte *)puVar2 + 1;
    }
    else {
      *(byte *)puVar2 = 0;
    }
    *(byte *)((int)param_1[3] + (uint)*(byte *)param_1[4]) = tmot;
    param_1[1][*(byte *)param_1[4]] = kmstand;
  }
  return;
}

