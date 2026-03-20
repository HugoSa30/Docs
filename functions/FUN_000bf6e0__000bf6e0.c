/*
 * Program: n42.bin
 * Function: FUN_000bf6e0
 * Entry: 000bf6e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bf6e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  
  uVar1 = (uint)*(byte *)((char)zzyllfb + 0x1c2cc);
  if (_luts_f < _DAT_0001c2d0) {
    if (_DAT_0001c2d4 < _luts_f) {
      *(short *)(&DAT_005b8810 + uVar1 * 2) = (short)(int)(_luts_f * _DAT_0001c2d8);
    }
    else {
      *(undefined2 *)(&DAT_005b8810 + uVar1 * 2) = 0x8000;
    }
  }
  else {
    *(undefined2 *)(&DAT_005b8810 + uVar1 * 2) = 0x7fff;
  }
  iVar2 = uVar1 * 2;
  uVar3 = FUN_000a7f84(_ZLUTBGL,(int)*(short *)(&DAT_005b8810 + iVar2),
                       (int)(short)(&DAT_005b8808)[uVar1],*(undefined2 *)(&UNK_003fad24 + iVar2));
  sVar4 = (short)((uint)uVar3 >> 0x10);
  (&DAT_005b8808)[uVar1] = sVar4;
  *(short *)(&UNK_003fad24 + iVar2) = (short)uVar3;
  sVar5 = (short)((int)sVar4 - (int)_DAT_003fad2c >> 3);
  *(short *)(&DAT_005b9994 + iVar2) = sVar5;
  if (sVar5 < 0) {
    (&DAT_005b997c)[uVar1] = -sVar5;
  }
  else {
    (&DAT_005b997c)[uVar1] = sVar5;
  }
  _DAT_003fad2c = sVar4;
  return;
}

