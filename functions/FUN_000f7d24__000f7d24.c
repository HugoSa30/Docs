/*
 * Program: n42.bin
 * Function: FUN_000f7d24
 * Entry: 000f7d24
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f7d24(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  
  if (_DAT_003fc5e0 < 2) {
    (*(code *)&SUB_00fafd30)(0x34,_DAT_003fc5e0,param_1,param_3);
    iVar1 = -1;
  }
  else if (DAT_003fc65c < 0xf) {
    iVar1 = (uint)DAT_003fc65e * 8;
    (&UNK_003fc5e4)[iVar1] = (char)param_1;
    (&UNK_003fc5e5)[iVar1] = param_2;
    (&UNK_003fc5e6)[iVar1] = 0;
    (&UNK_003fc5e7)[iVar1] = (char)param_3;
    *(undefined4 *)(&UNK_003fc5e8 + iVar1) = 2;
    DAT_003fc65c = DAT_003fc65c + 1;
    DAT_003fc65e = DAT_003fc65e + 1;
    if (0xe < DAT_003fc65e) {
      DAT_003fc65e = 0;
    }
    if (3 < _DAT_003fc5e0) {
      (*(code *)&SUB_00067620)();
    }
    iVar1 = (int)(short)(0xf - (ushort)DAT_003fc65c);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

