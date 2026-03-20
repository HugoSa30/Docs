/*
 * Program: n42.bin
 * Function: 6
 * Entry: 00100924
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short _(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_30;
  undefined4 local_2c;
  undefined local_28;
  
  iVar2 = *param_1;
  uVar3 = (uint)*(ushort *)(param_1 + 1);
  if ((_DAT_003fb988 != 1) && (_DAT_003fb988 != 2)) {
    *param_2 = 4;
LAB_00100a38:
    if (*param_2 != 0) {
      _DAT_003fb988 = 0;
    }
    return *param_2;
  }
  _DAT_003fb988 = 2;
  do {
    uVar4 = (*(int *)(_DAT_003fb99c + 4) - _DAT_003fb990) + 1;
    if ((uVar3 & 0xffff) <= uVar4) {
      uVar4 = uVar3;
    }
    sVar1 = (**(code **)(_DAT_003fb99c + 0xc))(iVar2,uVar4 & 0xffff);
    *param_2 = sVar1;
    if (sVar1 == 0) {
      iVar2 = iVar2 + (uVar4 & 0xffff);
      uVar3 = uVar3 - uVar4;
      _DAT_003fb990 = _DAT_003fb990 + (uVar4 & 0xffff);
      if ((uVar3 & 0xffff) == 0) goto LAB_00100a38;
      _(param_2);
      if (*param_2 == 0) {
        local_30 = _DAT_003fb990;
        local_2c = _DAT_003fb994;
        local_28 = DAT_003fb998;
        _(&local_30,param_2);
      }
    }
    if (((uVar3 & 0xffff) == 0) || (*param_2 != 0)) goto LAB_00100a38;
  } while( true );
}

