/*
 * Program: n42.bin
 * Function: FUN_000d2e40
 * Entry: 000d2e40
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d2e40(short **param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_20 [6];
  
  if ((*(byte *)param_1[9] & 0x20) != 0) {
    uVar1 = *param_1[0xb];
    uVar2 = *param_1[0xd];
    piVar4 = (int *)param_1[10];
    iVar5 = *(int *)(&UNK_003fb7c0 + (uint)*(byte *)(param_1 + 0x1d) * 4);
    iVar6 = *piVar4;
    *param_1[0xd] = uVar1;
    *piVar4 = iVar5;
    sVar3 = FUN_000b5508((int)(((uint)uVar1 - (uint)uVar2) * 0x80) / (iVar5 - iVar6));
    **param_1 = sVar3;
  }
  FUN_000e2db8(local_20);
  sVar3 = FUN_000b54d0(((int)**param_1 *
                        (local_20[0] - *(int *)(&UNK_003fb7c0 + (uint)*(byte *)(param_1 + 0x1d) * 4)
                        ) >> 7) + (uint)(ushort)*param_1[0xb]);
  *param_1[0xe] = sVar3;
  return;
}

