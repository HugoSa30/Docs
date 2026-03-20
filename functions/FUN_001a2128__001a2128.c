/*
 * Program: n42.bin
 * Function: FUN_001a2128
 * Entry: 001a2128
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a2128(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  
  iVar3 = func_0xff2176ac(DAT_00fa9cad,_DAT_003fbc80);
  uVar2 = _DAT_003fbc7c;
  if (iVar3 != 1) {
    return;
  }
  if ((_DAT_003fbc7a & 0xff00) != 0) {
    return;
  }
  uVar5 = (ushort)_DAT_003fbc80[1];
  _DAT_003fbc8e = _DAT_003fbc8e | uVar5;
  if (((DAT_003fbc79 & 1) == 0) && (*_DAT_003fbc80 != 1)) {
    if ((DAT_003fbc79 & 0x40) == 0) {
      return;
    }
  }
  else if ((DAT_003fbc79 & 0x40) == 0) {
    uVar4 = (uint)*_DAT_003fbc80;
    bVar1 = *(byte *)(uVar4 + 0xfa9c84);
    if ((bVar1 != 0) && (uVar4 < 0x24)) {
      if (((DAT_003fbc8c & bVar1) == 0) && (bVar1 != 0xff)) {
        _DAT_003fbc8e = _DAT_003fbc8e | 0x1800;
        return;
      }
      _DAT_003fbc7a = uVar5;
      if (uVar4 != 1) {
        _DAT_003fbc7a = uVar5 | 0xff00;
      }
      _DAT_003fbc7c = _DAT_003fbc80;
      _DAT_003fbc80 = (byte *)uVar2;
      return;
    }
    uVar5 = 0x3000;
    goto LAB_001a222c;
  }
  uVar5 = 0x3300;
LAB_001a222c:
  _DAT_003fbc8e = _DAT_003fbc8e | uVar5;
  return;
}

