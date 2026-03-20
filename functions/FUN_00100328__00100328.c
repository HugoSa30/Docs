/*
 * Program: n42.bin
 * Function: FUN_00100328
 * Entry: 00100328
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00100328(void)

{
  short sVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = 0;
  do {
    *(undefined4 *)(&DAT_003f9fe8 + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x10);
  local_20 = 0xf00000;
  local_1c = 0xf0ffff;
  FUN_00100704(&local_20);
  sVar1 = FUN_00100a64(0xf00000,0x10000,0xfc0000,0);
  if (sVar1 != 0) {
    FUN_00100704(&local_20);
    sVar1 = FUN_00100a64(0xf00000,0x10000,0xfc0000,0);
    if (sVar1 != 0) {
      FUN_001002d8();
    }
  }
  FUN_00100a64(DAT_001c000c + 0xc0000,0x40,&DAT_003f9fe8,0);
  FUN_00100a64(DAT_001c0010 + 0xc0000,0x40,&DAT_003f9fe8,0);
  local_20 = 0xfc0000;
  local_1c = 0xfdffff;
  sVar1 = FUN_00100704(&local_20);
  if (sVar1 == 0) {
    DAT_003fffcf = 9;
  }
  else {
    DAT_003fffcf = 0x19;
  }
  (*_DAT_00f00024)();
  return;
}

