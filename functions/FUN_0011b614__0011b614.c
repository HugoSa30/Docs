/*
 * Program: n42.bin
 * Function: FUN_0011b614
 * Entry: 0011b614
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011b614(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort local_18;
  ushort local_14 [8];
  
  uVar2 = 0;
  if (*(short *)((int)param_2 + 6) == 2) {
    local_18 = CONCAT11(*(undefined *)*param_2,*(undefined *)(*param_2 + 1));
    do {
      if ((uint)*(ushort *)(&CDKAAA + uVar2 * 2) == (uint)local_18) {
        local_14[0] = local_18;
        uVar1 = FUN_001212f8(local_14,1,*param_2);
        *(ushort *)(param_2 + 2) = uVar1 & 0xff;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0xc2);
    if (local_18 - 10000 < 0x35fc) {
      *(undefined *)*param_2 = 0;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    *(undefined *)*param_2 = 0x12;
  }
  else {
    *(undefined *)*param_2 = 0x12;
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

