/*
 * Program: n42.bin
 * Function: FUN_001085c4
 * Entry: 001085c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001085c4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_TBLr;
  
  if ((undefined *)*param_1 == &DAT_00305000) {
    if ((1 < param_3) && (*(char *)(param_1[1] + 0x3b) == '\0')) {
      _5();
      iVar3 = param_1[1];
      *(int *)(iVar3 + 0x10) = param_2;
      *(short *)(iVar3 + 0x2c) = (short)param_3;
      if (param_3 < 0x11) {
        _DAT_00305028 = (short)param_3 - 1U | 0x40;
        *(undefined2 *)(iVar3 + 0x38) = 0;
      }
      else {
        _DAT_00305028 = 0x35f;
        *(undefined2 *)(iVar3 + 0x38) = 0x300;
        param_3 = 0x10;
      }
      iVar1 = *param_1;
      uVar2 = 0;
      if (*(char *)(iVar3 + 0x44) == '\0') {
        if (0 < param_3) {
          do {
            *(undefined2 *)(&UNK_0030502c + uVar2 * 2) = *(undefined2 *)(param_2 + uVar2 * 2);
            uVar2 = uVar2 + 1 & 0xffff;
          } while ((int)uVar2 < param_3);
        }
      }
      else if (0 < param_3) {
        do {
          *(ushort *)(&UNK_0030502c + uVar2 * 2) = *(byte *)(param_2 + uVar2) | 0xff00;
          uVar2 = uVar2 + 1 & 0xffff;
        } while ((int)uVar2 < param_3);
      }
      _DAT_0030502a = 0;
      *(ushort *)(iVar1 + 10) = *(ushort *)(iVar3 + 0x36) & 0xffdf | 0x40;
      *(undefined4 *)(iVar3 + 0x28) = in_TBLr;
      iVar3 = param_1[1];
      *(undefined2 *)(iVar3 + 0x40) = 0;
      *(undefined *)(iVar3 + 0x42) = 0x82;
      _6();
      return;
    }
    _DAT_0030500a = *(ushort *)(param_1[1] + 0x36) & 0xffdf;
    _DAT_00305028 = 0;
  }
  FUN_00108f54(param_1,param_2,param_3);
  return;
}

