/*
 * Program: n42.bin
 * Function: FUN_0015c2d8
 * Entry: 0015c2d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015c2d8(void)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (uint)nmot_w;
  if ((_DAT_001c1b36 != 0xffff) && (_DAT_001c1b36 < uVar2)) {
    _kmstnmax = kmstand;
    if ((_DAT_003faa72 <= _DAT_001c1b36) && (anznmax != -1)) {
      anznmax = anznmax + '\x01';
    }
  }
  uVar1 = func_0xff217b40((int)uVar2 >> 0xd,(uVar2 & 0x1fff) << 3,5);
  if (_nmaxvk_w < uVar1) {
    _nmaxvk_w = uVar1;
  }
  _DAT_003faa72 = nmot_w;
  return;
}

