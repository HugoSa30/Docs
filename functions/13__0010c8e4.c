/*
 * Program: n42.bin
 * Function: 13
 * Entry: 0010c8e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _3(void)

{
  undefined *puVar1;
  byte bVar2;
  
  _4();
  bVar2 = 0;
  if (DAT_003fba64 != 0) {
    puVar1 = (undefined *)(_DAT_003fba80 + -0x14);
    do {
      puVar1 = puVar1 + 0x14;
      _5(*puVar1,&UNK_003fba1c,8,0,DAT_003fffa2);
      bVar2 = bVar2 + 1;
    } while (bVar2 < DAT_003fba64);
  }
  _DAT_003fba24 = 0xf0d164;
  _DAT_003fba28 = 0xf0cab4;
  _DAT_003fba2c = 0xf0d394;
  _DAT_003fba30 = 0xf0cab8;
  _DAT_003fba34 = 0xf0cac0;
  _DAT_003fba38 = 0xf0cac4;
  _DAT_003fba3c = 0xf0d3fc;
  _DAT_003fba40 = 0xf0d498;
  _DAT_003fba44 = 0xf0d324;
  _DAT_003fba48 = 0xf0d4b0;
  _DAT_003fba4c = 0xf0d3e4;
  _DAT_003fba50 = 0xf0cf00;
  _DAT_003fba54 = 0xf0ca1c;
  DAT_003fba58 = 0;
  return;
}

