/*
 * Program: n42.bin
 * Function: FUN_001e75cc
 * Entry: 001e75cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001e75cc(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 & 0xff) < 0x21) {
    uVar1 = 0;
    if ((param_2 & 0xff) != 0) {
      do {
        *(undefined2 *)(&DAT_00305180 + uVar1 * 2) = *(undefined2 *)(param_1 + uVar1 * 3);
        (&DAT_003051c0)[uVar1] = *(undefined *)(param_1 + uVar1 * 3 + 2);
        uVar1 = uVar1 + 1 & 0xff;
      } while (uVar1 < (param_2 & 0xff));
    }
    _DAT_0030501c = _DAT_0030501c & 0xe0ff | (((ushort)param_2 & 0xff) - 1) * 0x100 & 0x1f00;
    _DAT_0030501a = _DAT_0030501a | 0x8000;
    if (param_4 == 0) {
      uVar1 = 0;
    }
    else {
      do {
      } while (-1 < (char)DAT_0030501f);
      DAT_0030501f = DAT_0030501f & 0x7f;
      uVar1 = 0;
      if ((param_2 & 0xff) != 0) {
        do {
          iVar2 = (uVar1 & 0xff) * 2;
          *(undefined2 *)(param_3 + iVar2) = *(undefined2 *)(&UNK_00305140 + iVar2);
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xff) < (param_2 & 0xff));
      }
      uVar1 = uVar1 & 0xff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

