/*
 * Program: n42.bin
 * Function: FUN_0010cf00
 * Entry: 0010cf00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0010cf00(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_TBLr;
  
  iVar3 = _DAT_003fba74;
  if (_DAT_003fba68 == 3) {
    if ((uint)(in_TBLr - _DAT_003fba70) < _DAT_003fff88) goto LAB_0010d134;
LAB_0010cf64:
    iVar1 = (*DAT_005baa18)(DAT_003fba85,_DAT_003fba98);
    iVar3 = _DAT_003fba74;
    if (iVar1 == 0) {
      _DAT_003fba68 = 4;
      _DAT_003fba70 = in_TBLr;
      iVar3 = in_TBLr;
    }
  }
  else {
    if (_DAT_003fba68 == 4) {
      uVar2 = FUN_0010ef08(DAT_003fba85,0x20);
      iVar3 = _DAT_003fba74;
      if ((uVar2 & 1) == 0) goto LAB_0010d134;
      DAT_003fbd5c = 1;
      FUN_0010d4f0();
      iVar3 = _DAT_003fba74;
      if (_DAT_003fba68 == 1) goto LAB_0010d134;
      if (_DAT_003fba90 != 0) {
        FUN_0010f6d0(DAT_003fba84,_DAT_003fba94,_DAT_003fba90);
        _DAT_003fba68 = 5;
        iVar3 = _DAT_003fba74;
        goto LAB_0010d134;
      }
      DAT_003fbd59 = 0;
    }
    else {
      if (_DAT_003fba68 != 5) {
        if (_DAT_003fba68 != 6) goto LAB_0010d134;
        goto LAB_0010cf64;
      }
      uVar2 = FUN_0010ef08(DAT_003fba84,0x20);
      if ((uVar2 & 1) == 0) {
        iVar3 = in_TBLr;
        if ((((uVar2 & 0x20) == 0) && (iVar3 = _DAT_003fba74, _DAT_003fff94 != 0)) &&
           (_DAT_003fff94 < (uint)(in_TBLr - _DAT_003fba74))) {
          _8(0);
          _9(0);
          _DAT_003fba68 = 1;
          iVar3 = _DAT_003fba74;
        }
        goto LAB_0010d134;
      }
      iVar3 = *(int *)(DAT_005baa10 + 0x10) + (uint)DAT_003fba84 * 0x18;
      iVar3 = FUN_0010b220(*(undefined *)(iVar3 + 0xf),*(undefined *)(iVar3 + 0xe));
      if (iVar3 != 1) {
        FUN_0010ef68(DAT_003fba84,2);
        iVar3 = _DAT_003fba74;
        goto LAB_0010d134;
      }
      DAT_003fbd59 = 1;
      _DAT_003fbd54 = _DAT_003fba94;
      DAT_003fbd58 = (undefined)
                     *(undefined2 *)(*(int *)(DAT_005baa10 + 0x10) + (uint)DAT_003fba84 * 0x18 + 8);
      _DAT_003fba70 = in_TBLr;
      _DAT_003fba74 = in_TBLr;
    }
    _DAT_003fba68 = 0;
    iVar3 = _DAT_003fba74;
  }
LAB_0010d134:
  _DAT_003fba74 = iVar3;
  return ((uint)(byte)((_DAT_003fba68 == 1) << 1) << 8) >> 9 ^ 1;
}

