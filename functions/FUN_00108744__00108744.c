/*
 * Program: n42.bin
 * Function: FUN_00108744
 * Entry: 00108744
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108744(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((undefined *)*param_1 == &DAT_00305000) {
    if ((1 < param_3) && (*(char *)(param_1[1] + 0x3b) == '\0')) {
      _5();
      iVar1 = param_1[1];
      *(undefined4 *)(iVar1 + 0x14) = param_2;
      *(short *)(iVar1 + 0x2e) = (short)param_3;
      *(undefined *)(iVar1 + 0x3c) = 0;
      *(undefined *)(param_1[1] + 0x3d) = 0;
      iVar1 = param_1[1];
      *(undefined2 *)(iVar1 + 0x3e) = 0;
      *(undefined *)(iVar1 + 0x42) = 0x81;
      iVar2 = param_1[1];
      *(undefined2 *)(iVar2 + 0x38) = 0xc00;
      iVar1 = *param_1;
      if ((*(ushort *)(iVar1 + 0xc) >> 6 & 1) != 0) {
        *(ushort *)(iVar2 + 0x30) = *(ushort *)(iVar1 + 0xc);
        *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(iVar1 + 0xe);
      }
      _DAT_00305028 = 0xc20;
      _DAT_0030502a = 0;
      *(ushort *)(iVar1 + 10) = *(ushort *)(iVar2 + 0x36) & 0xffdf;
      _6();
      return;
    }
    _DAT_0030500a = *(ushort *)(param_1[1] + 0x36) & 0xffdf;
    _DAT_00305028 = 0;
  }
  FUN_00109008(param_1,param_2,param_3);
  return;
}

