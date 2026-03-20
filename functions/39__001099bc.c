/*
 * Program: n42.bin
 * Function: 39
 * Entry: 001099bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _9(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  _DAT_003faf20 = &UNK_003faf58;
  uVar3 = 0;
  DAT_003f9ac8 = 0;
  uVar1 = (uint)DAT_00f07e5c;
  if (uVar1 != 0) {
    do {
      (&DAT_003faf0c)[uVar3] = 0;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar1);
  }
  _0();
  iVar2 = _1();
  if (iVar2 == 0) {
    _3(0xf09984,0xf09994,0xf099a4,0xf09976,0xf0997a,0xf09980);
    if (DAT_00f099b4 == '\x01') {
      _4(0xf0994c,DAT_00f09974);
    }
    if (DAT_00f099b5 == '\x01') {
      _9(0xf098d8,0xf0993c);
    }
  }
  return;
}

