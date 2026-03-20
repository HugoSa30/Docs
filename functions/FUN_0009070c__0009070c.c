/*
 * Program: n42.bin
 * Function: FUN_0009070c
 * Entry: 0009070c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_0009070c(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    uVar2 = 0x40 - (_DAT_003fa114 & 0x3f);
    if ((int)param_2 <= (int)(uVar2 & 0xffff)) {
      uVar2 = param_2;
    }
    if ((uVar2 & 0xff) == 0x40) {
      sVar1 = func_0x0048a3d8(param_1,(uVar2 & 0xff) >> 2);
      _DAT_003fa114 = _DAT_003fa114 + (uVar2 & 0xff);
LAB_00090800:
      _DAT_003fa118 = _DAT_003fa114;
    }
    else {
      uVar3 = 0;
      if ((uVar2 & 0xff) != 0) {
        do {
          (&DAT_003fa11c)[uVar3 + (_DAT_003fa114 & 0x3f)] = *(undefined *)(param_1 + uVar3);
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < (uVar2 & 0xff));
      }
      _DAT_003fa114 = _DAT_003fa114 + (uVar2 & 0xff);
      if ((_DAT_003fa114 & 0x3f) == 0) {
        uVar3 = _DAT_003fa118 & 0x3c;
        _DAT_003fa118 = _DAT_003fa118 & 0xfffffffc;
        sVar1 = func_0x0048a3d8(&DAT_003fa11c + uVar3,(int)(0x40 - uVar3) >> 2 & 0xff);
        goto LAB_00090800;
      }
      sVar1 = 0;
    }
    param_1 = param_1 + (uVar2 & 0xff);
    param_2 = param_2 - (uVar2 & 0xff) & 0xffff;
    if ((param_2 == 0) || (sVar1 != 0)) {
      return sVar1;
    }
  } while( true );
}

