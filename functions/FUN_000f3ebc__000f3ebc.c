/*
 * Program: n42.bin
 * Function: FUN_000f3ebc
 * Entry: 000f3ebc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f3ebc(int param_1,uint param_2,short param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  param_1 = param_1 * 0x18;
  cVar1 = *(char *)(param_1 + 0x17507);
  uVar4 = 0xff;
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_3 == 0) {
    if ((int)param_2 < 1) {
      if (cVar1 == '\0') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    if (9999 < (int)param_2) {
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    if ((0 < (int)param_2) && ((int)param_2 < 10000)) {
      _DAT_003fa368 = 0xd;
      return 0xd;
    }
    iVar2 = (uint)*(byte *)(param_1 + 0x17501) * 0x10;
    (**(code **)(iVar2 + 0x175c0))
              (*(undefined4 *)(iVar2 + 0x175b8),*(undefined4 *)(param_1 + 0x174f8),0,
               param_2 & 0xffff,uVar4,*(undefined *)(param_1 + 0x17506));
  }
  else {
    _DAT_003fa368 = 0;
    uVar3 = *(int *)(param_1 + 0x174fc) * (int)param_3;
    if (0xffff < uVar3) {
      _DAT_003fa368 = 0xf;
      return 0xf;
    }
    if (((int)param_2 < 0) || (10000 < (int)param_2)) {
      _DAT_003fa368 = 0xe;
      return 0xe;
    }
    if (cVar1 != '\0') {
      param_2 = (uint)(short)(10000 - (short)param_2);
    }
    iVar2 = (uint)*(byte *)(param_1 + 0x17501) * 0x10;
    (**(code **)(iVar2 + 0x175c0))
              (*(undefined4 *)(iVar2 + 0x175b8),*(undefined4 *)(param_1 + 0x174f8),uVar3 & 0xffff,
               param_2 & 0xffff,*(undefined *)(param_1 + 0x17506),0xff);
  }
  return 0;
}

