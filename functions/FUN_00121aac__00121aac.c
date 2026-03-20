/*
 * Program: n42.bin
 * Function: FUN_00121aac
 * Entry: 00121aac
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00121aac(undefined4 param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined local_18;
  undefined uStack_17;
  ushort local_14;
  
  if (*(short *)((int)param_2 + 6) == 2) {
    local_14 = CONCAT11(*(undefined *)*param_2,*(undefined *)(*param_2 + 1));
    if (local_14 - 10000 < 0x35fc) {
      uVar2 = 1;
      do {
        if ((uint)*(ushort *)(&CDKAAA + uVar2 * 2) == (uint)local_14) {
          uVar1 = *(undefined2 *)(&UNK_003fde62 + uVar2 * 2);
          local_18 = (undefined)((ushort)uVar1 >> 8);
          *(undefined *)*param_2 = local_18;
          uStack_17 = (undefined)uVar1;
          *(undefined *)(*param_2 + 1) = uStack_17;
          *(undefined2 *)(param_2 + 2) = 2;
          *(undefined *)((int)param_2 + 10) = 1;
          return;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 0xc2);
      *(undefined *)*param_2 = 0;
      *(undefined *)(*param_2 + 1) = 0;
      *(undefined2 *)(param_2 + 2) = 2;
      *(undefined *)((int)param_2 + 10) = 1;
    }
    else {
      *(undefined *)*param_2 = 0x12;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
    }
  }
  else {
    *(undefined *)*param_2 = 0x12;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  return;
}

