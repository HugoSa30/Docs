/*
 * Program: n42.bin
 * Function: FUN_001a33b4
 * Entry: 001a33b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a33b4(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _DAT_003fae80 = &DAT_005bb460;
  _DAT_003faf20 = &UNK_003faec8;
  DAT_003fae70 = 0;
  DAT_003f9ac8 = 0;
  uVar1 = (uint)DAT_00f07e5c;
  if (uVar1 != 0) {
    puVar4 = &UNK_003faf0b;
    puVar3 = &UNK_003faf07;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  _0();
  iVar2 = _1();
  if (iVar2 == 0) {
    _3(0xf232c0,0xf232d0,0xf232e0,0xf232b6,0xf232b2,0xf232bc);
    if (DAT_00f232f8 == '\x01') {
      FUN_001a3afc(0);
    }
    if (DAT_00f23304 == '\x01') {
      FUN_001a41e4(0);
    }
    if (DAT_00f23305 == '\x01') {
      _9(0xf23134,0xf23210);
    }
  }
  if (_DAT_003f9ad4 != (code *)0x0) {
    (*_DAT_003f9ad4)();
  }
  return;
}

