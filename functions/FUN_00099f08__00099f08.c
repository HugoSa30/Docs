/*
 * Program: n42.bin
 * Function: FUN_00099f08
 * Entry: 00099f08
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00099f08(int param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 * 0x10 + 0x16864);
  if (((*(ushort *)(iVar4 + 0x10) >> 0xe & 1) == 0) || (*(short *)(iVar4 + 0x10) < 0)) {
    *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 0x40;
    uVar5 = 0;
  }
  else {
    uVar1 = FUN_00099dc0(iVar4,param_1);
    param_2[0x82] = (char)uVar1;
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
      iVar3 = *(int *)(&DAT_003fce3c + param_1 * 8);
      do {
        *(undefined2 *)(param_2 + uVar2 * 2 + 2) = *(undefined2 *)(iVar3 + uVar2 * 2);
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < (uVar1 & 0xff));
    }
    *param_2 = (char)uVar2;
    uVar5 = 1;
  }
  *(ushort *)(iVar4 + 0x10) = *(ushort *)(iVar4 + 0x10) & 0xbfff;
  *(ushort *)(iVar4 + 0x10) = *(ushort *)(iVar4 + 0x10) & 0x7fff;
  *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) | 0x2000;
  return uVar5;
}

