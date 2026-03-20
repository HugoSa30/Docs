/*
 * Program: n42.bin
 * Function: FUN_00153160
 * Entry: 00153160
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00153160(void)

{
  uint uVar1;
  
  uVar1 = func_0xff2189bc(&DAT_001ca9ce,igenmess);
  igen400A = (word)uVar1;
  if (DAT_001cad9a != '\x01') {
    uVar1 = (uint)genig << 7;
  }
  uVar1 = (uVar1 & 0xffff) >> 7;
  geni_end = (undefined)uVar1;
  if (0xfe < uVar1) {
    geni_end = 0xfe;
  }
  return;
}

