/*
 * Program: n42.bin
 * Function: FUN_001e7a60
 * Entry: 001e7a60
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x001e7af4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001e7a60(undefined *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 local_38;
  undefined local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  short local_20 [14];
  
  local_38 = _DAT_00fe7bdc;
  local_34 = DAT_00fe7be0;
  uStack_24 = _DAT_00fe7bee & 0xffffff00;
  local_30 = _DAT_00fe7be2;
  uStack_2c = _DAT_00fe7be6;
  uStack_28 = _DAT_00fe7bea;
  *param_1 = 0;
  puVar4 = &DAT_00305000;
  if ((short)_DAT_0030501a < 0) {
    _DAT_0030501a = _DAT_0030501a & 0x7fff;
  }
  if ((short)_DAT_0030501a < 0) {
    *param_1 = 1;
    uVar2 = 0;
  }
  else {
    FUN_001e7524(&local_38);
    puVar4[0x1e] = puVar4[0x1e] | 4;
    uVar3 = FUN_001e75cc(&local_30,5,local_20,1);
    if ((uVar3 & 0xffff) == 5) {
      uVar5 = 0;
      uVar2 = 1;
      uVar1 = uVar3 & 0xffff;
      do {
        if (uVar1 == 0) {
          return uVar2;
        }
        if (local_20[uVar5] != *(short *)((int)&local_30 + uVar5 * 3)) {
          *param_1 = 3;
          uVar2 = 0;
        }
        uVar5 = uVar5 + 1 & 0xffff;
        uVar1 = uVar2;
      } while (uVar5 < (uVar3 & 0xffff));
    }
    else {
      *param_1 = 2;
      uVar2 = 0;
    }
  }
  return uVar2;
}

