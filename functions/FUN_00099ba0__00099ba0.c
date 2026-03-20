/*
 * Program: n42.bin
 * Function: FUN_00099ba0
 * Entry: 00099ba0
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_00099ba0(byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  
  bVar4 = 0;
  if ((DAT_003fa124 & (&DAT_003fce40)[(uint)param_1[1] * 8]) == 0) {
    bVar4 = 1;
  }
  else {
    bVar1 = *param_1;
    uVar5 = 0;
    if (bVar1 != 0) {
      do {
        iVar2 = uVar5 * 4;
        uVar3 = FUN_00099ef0(param_1[uVar5 + 1]);
        *(undefined2 *)(*(int *)(param_3 + iVar2) + 2) = uVar3;
        FUN_0009adc8(*(undefined4 *)(param_2 + iVar2),*(undefined4 *)(param_3 + iVar2),
                     *(undefined4 *)(param_4 + iVar2));
        bVar4 = bVar4 | *(byte *)(*(int *)(param_3 + iVar2) + 4);
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < bVar1);
    }
  }
  return bVar4;
}

