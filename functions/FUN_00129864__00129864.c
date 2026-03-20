/*
 * Program: n42.bin
 * Function: FUN_00129864
 * Entry: 00129864
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00129864(void)

{
  if (DAT_001ce7a4 <= romrstc_um) {
    romrstc_um = 0;
    FUN_001041c8();
    e_romx_um = 1;
    romx_ur = 0x66;
    FUN_00110cc4(0x134);
    FUN_00110efc(0x134);
  }
  romrstc_um = romrstc_um + 1;
  e_romx_um = 1;
  romx_ur = 0x66;
  FUN_00110cc4(0x134);
  FUN_00110efc(0x134);
  return;
}

