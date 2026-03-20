/*
 * Program: n42.bin
 * Function: FUN_00092d6c
 * Entry: 00092d6c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00092d6c(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_20;
  undefined4 local_1c;
  undefined local_18;
  
  iVar2 = *param_1;
  uVar3 = (uint)*(ushort *)(param_1 + 1);
  if ((_DAT_003fa1a4 != 1) && (_DAT_003fa1a4 != 2)) {
    *param_2 = 4;
LAB_00092e78:
    if (*param_2 != 0) {
      _DAT_003fa1a4 = 0;
    }
    return *param_2;
  }
  _DAT_003fa1a4 = 2;
  do {
    uVar4 = (*(int *)(_DAT_003fa1bc + 4) - _DAT_003fa1b0) + 1;
    if ((uVar3 & 0xffff) <= uVar4) {
      uVar4 = uVar3;
    }
    sVar1 = (**(code **)(_DAT_003fa1bc + 0xc))(iVar2,uVar4 & 0xffff);
    *param_2 = sVar1;
    if (sVar1 == 0) {
      iVar2 = iVar2 + (uVar4 & 0xffff);
      uVar3 = uVar3 - uVar4;
      _DAT_003fa1b0 = _DAT_003fa1b0 + (uVar4 & 0xffff);
      if ((uVar3 & 0xffff) == 0) goto LAB_00092e78;
      FUN_00092d0c(param_2);
      if (*param_2 == 0) {
        local_20 = _DAT_003fa1b0;
        local_1c = _DAT_003fa1b4;
        local_18 = DAT_003fa1b8;
        FUN_00092bf0(&local_20,param_2);
      }
    }
    if (((uVar3 & 0xffff) == 0) || (*param_2 != 0)) goto LAB_00092e78;
  } while( true );
}

