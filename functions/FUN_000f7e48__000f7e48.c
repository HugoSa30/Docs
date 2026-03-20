/*
 * Program: n42.bin
 * Function: FUN_000f7e48
 * Entry: 000f7e48
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f7e48(undefined4 param_1,undefined param_2,undefined param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (_DAT_003fc5e0 < 2) {
    (*(code *)&SUB_00fafd30)(0x34,_DAT_003fc5e0,param_1,param_4);
    iVar1 = -1;
  }
  else if (DAT_003fc65c < 0xf) {
    uVar2 = (uint)DAT_003fc65e;
    iVar1 = uVar2 * 8;
    (&UNK_003fc5e4)[iVar1] = (char)param_1;
    (&UNK_003fc5e5)[iVar1] = param_2;
    (&UNK_003fc5e6)[iVar1] = param_3;
    (&UNK_003fc5e7)[iVar1] = (char)param_4;
    *(undefined4 *)(&UNK_003fc5e8 + uVar2 * 8) = 1;
    DAT_003fc65c = DAT_003fc65c + 1;
    DAT_003fc65e = (byte)(uVar2 + 1);
    if (0xe < (uVar2 + 1 & 0xff)) {
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

