/*
 * Program: n42.bin
 * Function: FUN_00100cc8
 * Entry: 00100cc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00100cc8(void)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = FUN_00100d90();
  if (uVar2 == 0x2000) {
    uVar2 = 0x100;
  }
  if (uVar2 == 0) {
    FUN_00100d6c();
    bVar1 = DAT_003fb9a4;
    if (DAT_003fb9a4 <= DAT_003fb9a5) {
      DAT_003fb9a4 = DAT_003fb9a4 + 1;
      uVar2 = FUN_00100e5c(bVar1);
      goto LAB_00100d54;
    }
  }
  else if (uVar2 == 0x100) goto LAB_00100d54;
  DAT_003fb9a5 = 0;
  DAT_003fb9a4 = 1;
LAB_00100d54:
  return uVar2 & 0xffff;
}

