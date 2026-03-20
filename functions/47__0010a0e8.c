/*
 * Program: n42.bin
 * Function: 47
 * Entry: 0010a0e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void _7(undefined4 *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 local_10;
  undefined2 uStack_e;
  
  iVar3 = *(int *)((uint)*(byte *)((int)param_1 + 5) * 4 + 0xf09940);
  _5();
  if ((*(byte *)((int)param_1 + 7) & 1) == 0) {
    uVar2 = *(byte *)(param_1 + 2) | 0x40;
  }
  else {
    uVar2 = *(byte *)(param_1 + 2) | 0x80;
  }
  uVar1 = _8(*param_1,*(undefined *)(param_1 + 1));
  iVar3 = iVar3 + (uint)*(byte *)((int)param_1 + 6) * 0x10;
  uStack_e = (undefined2)uVar1;
  *(undefined2 *)(iVar3 + 0x84) = uStack_e;
  local_10 = (undefined2)((uint)uVar1 >> 0x10);
  *(undefined2 *)(iVar3 + 0x82) = local_10;
  *(ushort *)(iVar3 + 0x80) = uVar2;
  _6();
  return;
}

